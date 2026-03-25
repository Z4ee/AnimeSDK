#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFloatToInt.h"
#include "unitysdk/RPG/GameCore/MarbleOperation.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_5A3F108DBFD41D20_OFFSET UNITYSDK_OFFSET(0x17392F90)
#define RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_69C9D4B7BC1B22D7_OFFSET UNITYSDK_OFFSET(0x17393070)
#define RPG_GAMECORE_MARBLEMODIFYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17393020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleModifyValue_TypeDefinitionIndex = 15414;

	class MarbleModifyValue : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::RPG::GameCore::MarbleValue ValueType; // 0x14
		::RPG::GameCore::MarbleOperation Operation; // 0x18
		::System::Single Value; // 0x1C
		::System::Boolean IsPercent; // 0x20
		::System::Boolean UseProperty; // 0x21
		::RPG::GameCore::MarbleTarget PropertyTarget; // 0x24
		::RPG::GameCore::MarbleValue PropertyType; // 0x28
		::System::Single PropertyFactor; // 0x2C
		::RPG::GameCore::MarbleFloatToInt ToInt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMODIFYVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A3F108DBFD41D20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleModifyValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleModifyValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_5A3F108DBFD41D20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69C9D4B7BC1B22D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleModifyValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleModifyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_69C9D4B7BC1B22D7_OFFSET))(a1, a2);
		}
	};
}
