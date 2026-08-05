#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C471280)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C470D90)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x1C470E10)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_METHOD_1_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0x1C4712E0)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C471710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NumIntervalByDifficulty_TypeDefinitionIndex = 88112;

	class NumIntervalByDifficulty : public ::System::Object
	{
	public:
		::System::Int32 DifficultyType; // 0x10
		::System::Int32 IntervalMin; // 0x14
		::System::Int32 IntervalMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_D32A5475BAED534D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_METHOD_1_D32A5475BAED534D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
		}
	};
}
