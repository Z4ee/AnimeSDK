#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_0060350ECFA9D32E_OFFSET UNITYSDK_OFFSET(0x1D37D4B0)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_0EFEB70C014BE9C3_OFFSET UNITYSDK_OFFSET(0x1D37D730)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_76A7E4624C96AE6C_OFFSET UNITYSDK_OFFSET(0x1D37D700)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_C30BA96C24A5F47F_OFFSET UNITYSDK_OFFSET(0x1D37D4F0)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37D4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByCompareVariableFloat_TypeDefinitionIndex = 19819;

	class RA_ByCompareVariableFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VarName; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Single CompareValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0060350ECFA9D32E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_0060350ECFA9D32E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C30BA96C24A5F47F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_C30BA96C24A5F47F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76A7E4624C96AE6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_76A7E4624C96AE6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0EFEB70C014BE9C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_0EFEB70C014BE9C3_OFFSET))(a1, a2);
		}
	};
}
