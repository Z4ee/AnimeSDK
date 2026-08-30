#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_8086A183F161BF34_OFFSET UNITYSDK_OFFSET(0x1C2F85B0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_AE908FC85CFBE831_OFFSET UNITYSDK_OFFSET(0x1C2F8570)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_C82976AAB2833114_OFFSET UNITYSDK_OFFSET(0x1C2F8730)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_EE86B8FD2EFD4732_OFFSET UNITYSDK_OFFSET(0x1C2F8760)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F85A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayChanged_TypeDefinitionIndex = 22782;

	class ByCheckActionDelayChanged : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AE908FC85CFBE831(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayChanged*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayChanged*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_AE908FC85CFBE831_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8086A183F161BF34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_8086A183F161BF34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C82976AAB2833114(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_C82976AAB2833114_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE86B8FD2EFD4732(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_EE86B8FD2EFD4732_OFFSET))(a1, a2);
		}
	};
}
