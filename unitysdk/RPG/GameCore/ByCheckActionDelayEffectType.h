#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayEffectType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_565B5F070BF5A659_OFFSET UNITYSDK_OFFSET(0x19CC0FC0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_5F0F1B508C27EF76_OFFSET UNITYSDK_OFFSET(0x19CC0FF0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C78F913653A8849A_OFFSET UNITYSDK_OFFSET(0x19CC0E10)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C882628DA906CA73_OFFSET UNITYSDK_OFFSET(0x19CC0DD0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC0E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayEffectType_TypeDefinitionIndex = 22633;

	class ByCheckActionDelayEffectType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ActionDelayEffectType EffectType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C882628DA906CA73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C882628DA906CA73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C78F913653A8849A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C78F913653A8849A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_565B5F070BF5A659(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_565B5F070BF5A659_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F0F1B508C27EF76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_5F0F1B508C27EF76_OFFSET))(a1, a2);
		}
	};
}
