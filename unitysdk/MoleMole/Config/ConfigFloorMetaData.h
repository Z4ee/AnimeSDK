#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F354C0)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18F34FA0)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x18F35020)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_METHOD_1_BF50AF6BCBDE0EBC_OFFSET UNITYSDK_OFFSET(0x18F35520)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F35860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFloorMetaData_TypeDefinitionIndex = 51919;

	class ConfigFloorMetaData : public ::System::Object
	{
	public:
		::System::Int32 MonsterPlayType; // 0x10
		::System::String* GlobalAIKey; // 0x18
		::System::Boolean DisableEntityDelayCreation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_BF50AF6BCBDE0EBC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_METHOD_1_BF50AF6BCBDE0EBC_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}
	};
}
