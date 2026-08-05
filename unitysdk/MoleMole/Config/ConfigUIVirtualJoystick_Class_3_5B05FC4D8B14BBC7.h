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

#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1170F0C0)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1170F0D0)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7_WRITE_OFFSET UNITYSDK_OFFSET(0x1170F320)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1170F4E0)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1170F4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIVirtualJoystick_Class_3_5B05FC4D8B14BBC7_TypeDefinitionIndex = 69972;

	class ConfigUIVirtualJoystick_Class_3_5B05FC4D8B14BBC7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUIVirtualJoystick*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigVirtualJoystickParam*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigVirtualJoystickParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIVirtualJoystick_Class_3_5B05FC4D8B14BBC7_TypeDefinitionIndex)->GetStaticField(0x4F9F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigVirtualJoystickParam*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigVirtualJoystickParam*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIVirtualJoystick_Class_3_5B05FC4D8B14BBC7_TypeDefinitionIndex)->GetStaticField(0x4F9F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUIVirtualJoystick*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigUIVirtualJoystick*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_CLASS_3_5B05FC4D8B14BBC7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
