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

#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B34150)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B34160)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12B34610)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B34920)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B348E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuddyMisc_ConfigBuddyMisc_UnityGeneratedFormatter_TypeDefinitionIndex = 76298;

	class ConfigBuddyMisc_ConfigBuddyMisc_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigBuddyMisc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_ConfigBuddyMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BC90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_ConfigBuddyMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BC98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BuddyOutlineConfig*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BuddyOutlineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_ConfigBuddyMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyMisc_ConfigBuddyMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigBuddyMisc*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigBuddyMisc*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_CONFIGBUDDYMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
