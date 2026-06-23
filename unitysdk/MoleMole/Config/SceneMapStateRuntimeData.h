#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE9813D0)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE980A20)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xE980AA0)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_METHOD_1_E7B4A536DFAE42AC_OFFSET UNITYSDK_OFFSET(0xE981430)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE9817C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneMapStateRuntimeData_TypeDefinitionIndex = 50663;

	class SceneMapStateRuntimeData : public ::System::Object
	{
	public:
		::System::Int32 number; // 0x10
		::System::String* imageResPath; // 0x18
		::System::Single centerPositionX; // 0x20
		::System::Single centerPositionZ; // 0x24
		::System::Single lengthX; // 0x28
		::System::Single lengthZ; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_E7B4A536DFAE42AC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_METHOD_1_E7B4A536DFAE42AC_OFFSET))(this, a1, a2);
		}
	};
}
