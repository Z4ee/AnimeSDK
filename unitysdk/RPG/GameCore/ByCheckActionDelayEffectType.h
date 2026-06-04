#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayEffectType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_0FC44AED1FB9BAA9_OFFSET UNITYSDK_OFFSET(0x194F7C20)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_41AA97F98A3C6C44_OFFSET UNITYSDK_OFFSET(0x194F7920)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_B43B2B23AC970A30_OFFSET UNITYSDK_OFFSET(0x194F7BA0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C78F913653A8849A_OFFSET UNITYSDK_OFFSET(0x194F79F0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x194F79A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayEffectType_TypeDefinitionIndex = 22196;

	class ByCheckActionDelayEffectType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ActionDelayEffectType EffectType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_41AA97F98A3C6C44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_41AA97F98A3C6C44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C78F913653A8849A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C78F913653A8849A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B43B2B23AC970A30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_B43B2B23AC970A30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0FC44AED1FB9BAA9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_0FC44AED1FB9BAA9_OFFSET))(a1, a2);
		}
	};
}
