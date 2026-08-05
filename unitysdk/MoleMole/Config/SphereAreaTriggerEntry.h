#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13514850)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13513E50)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x13513ED0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_METHOD_1_AB1851855FC4CE08_OFFSET UNITYSDK_OFFSET(0x135148B0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13514C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SphereAreaTriggerEntry_TypeDefinitionIndex = 72936;

	class SphereAreaTriggerEntry : public ::System::Object
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single Hight; // 0x14
		::System::Int32 Priority; // 0x18
		::System::String* SoundActionKey; // 0x20
		::System::String* UIKey; // 0x28
		::System::String* Flag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_AB1851855FC4CE08(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_METHOD_1_AB1851855FC4CE08_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}
	};
}
