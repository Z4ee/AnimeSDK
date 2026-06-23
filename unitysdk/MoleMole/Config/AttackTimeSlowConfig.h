#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x162A14F0)
#define MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x162A1150)
#define MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x162A1550)
#define MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x162A11D0)
#define MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A1740)
#define MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x162A1720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackTimeSlowConfig_TypeDefinitionIndex = 44475;

	class AttackTimeSlowConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>** StaticGet_EMPTY()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AttackTimeSlowConfig_TypeDefinitionIndex)->GetStaticField(0x44970);
		}
		::System::String* timeSlowKey; // 0x10
		::MoleMole::Config::AbilityTargetting target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG__CCTOR_OFFSET))();
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKTIMESLOWCONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
