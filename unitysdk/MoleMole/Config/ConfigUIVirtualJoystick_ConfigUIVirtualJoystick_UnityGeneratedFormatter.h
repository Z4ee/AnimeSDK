#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace MoleMole::Config { class ConfigVirtualJoystickParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF98D840)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF98D850)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xF98DAF0)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF98DCE0)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xF98DCA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIVirtualJoystick_ConfigUIVirtualJoystick_UnityGeneratedFormatter_TypeDefinitionIndex = 74553;

	class ConfigUIVirtualJoystick_ConfigUIVirtualJoystick_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUIVirtualJoystick*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigVirtualJoystickParam*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigVirtualJoystickParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIVirtualJoystick_ConfigUIVirtualJoystick_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x467D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigVirtualJoystickParam*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigVirtualJoystickParam*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIVirtualJoystick_ConfigUIVirtualJoystick_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x467D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUIVirtualJoystick*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigUIVirtualJoystick*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CONFIGUIVIRTUALJOYSTICK_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
