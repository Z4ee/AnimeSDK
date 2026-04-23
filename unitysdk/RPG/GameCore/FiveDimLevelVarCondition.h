#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLEVELVARCONDITION_METHOD_2_6B4CFDA16F749EA9_OFFSET UNITYSDK_OFFSET(0x18909970)
#define RPG_GAMECORE_FIVEDIMLEVELVARCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18909AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelVarCondition_TypeDefinitionIndex = 17672;

	class FiveDimLevelVarCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CompareType Operation; // 0x10
		::System::Int16 Value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6B4CFDA16F749EA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelVarCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelVarCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARCONDITION_METHOD_2_6B4CFDA16F749EA9_OFFSET))(a1, a2);
		}
	};
}
