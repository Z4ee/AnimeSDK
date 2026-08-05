#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B568BF0)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B568850)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_METHOD_1_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x1B5688D0)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_METHOD_1_46F5479027C46F32_OFFSET UNITYSDK_OFFSET(0x1B568C50)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B568F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SuiteWeightEntry_TypeDefinitionIndex = 78089;

	class SuiteWeightEntry : public ::System::Object
	{
	public:
		::System::Int32 SuiteIndex; // 0x10
		::System::Int32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_METHOD_1_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_46F5479027C46F32(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_METHOD_1_46F5479027C46F32_OFFSET))(this, a1, a2);
		}
	};
}
