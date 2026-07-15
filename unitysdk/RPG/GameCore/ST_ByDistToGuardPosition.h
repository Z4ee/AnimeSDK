#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_ParamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_2C1A15E6BCD58D80_OFFSET UNITYSDK_OFFSET(0x1B779720)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_A764A4E4EF7394AD_OFFSET UNITYSDK_OFFSET(0x1B779760)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_D082DD3414D06ED9_OFFSET UNITYSDK_OFFSET(0x1B7799A0)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_DDA9E4F35A037066_OFFSET UNITYSDK_OFFSET(0x1B779970)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B779750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistToGuardPosition_TypeDefinitionIndex = 19294;

	class ST_ByDistToGuardPosition : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_ParamType ValueType; // 0x20
		::System::Single MinValue; // 0x24
		::System::Single MaxValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2C1A15E6BCD58D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistToGuardPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistToGuardPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_2C1A15E6BCD58D80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A764A4E4EF7394AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_A764A4E4EF7394AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DDA9E4F35A037066(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_DDA9E4F35A037066_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D082DD3414D06ED9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_METHOD_4_D082DD3414D06ED9_OFFSET))(a1, a2);
		}
	};
}
