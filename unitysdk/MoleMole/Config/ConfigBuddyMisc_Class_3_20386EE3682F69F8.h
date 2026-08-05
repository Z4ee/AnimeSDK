#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/ConfigBuddyBehaviour.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Config { class BuddyOutlineConfig; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4A77C0)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4A77D0)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4A7C30)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4A7F10)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A7ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuddyMisc_Class_3_20386EE3682F69F8_TypeDefinitionIndex = 57715;

	class ConfigBuddyMisc_Class_3_20386EE3682F69F8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigBuddyMisc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_Class_3_20386EE3682F69F8_TypeDefinitionIndex)->GetStaticField(0x3C820);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BuddyOutlineConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BuddyOutlineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_Class_3_20386EE3682F69F8_TypeDefinitionIndex)->GetStaticField(0x3C828);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_Class_3_20386EE3682F69F8_TypeDefinitionIndex)->GetStaticField(0x3C830);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_Class_3_20386EE3682F69F8_TypeDefinitionIndex)->GetStaticField(0x3C838);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigBuddyMisc*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigBuddyMisc*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CLASS_3_20386EE3682F69F8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
