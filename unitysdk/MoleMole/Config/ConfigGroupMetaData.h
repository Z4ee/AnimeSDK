#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17536060)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17535E20)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x17535EA0)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_METHOD_1_F4FDF6DDB7D0ADBB_OFFSET UNITYSDK_OFFSET(0x175360C0)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x175362F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGroupMetaData_TypeDefinitionIndex = 47427;

	class ConfigGroupMetaData : public ::System::Object
	{
	public:
		::System::Int32 DifficultyTagID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_F4FDF6DDB7D0ADBB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_METHOD_1_F4FDF6DDB7D0ADBB_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
