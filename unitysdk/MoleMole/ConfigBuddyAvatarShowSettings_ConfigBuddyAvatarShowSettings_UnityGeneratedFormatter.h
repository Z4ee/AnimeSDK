#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigBuddyAvatarShowSettings; }
namespace MoleMole { class ConfigUIMainPageShowSetting; }
namespace MoleMole { class UIAvatarShowSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FFE520)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FFE530)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x19FFE710)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FFE8B0)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFE870)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyAvatarShowSettings_ConfigBuddyAvatarShowSettings_UnityGeneratedFormatter_TypeDefinitionIndex = 43525;

	class ConfigBuddyAvatarShowSettings_ConfigBuddyAvatarShowSettings_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigBuddyAvatarShowSettings*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainPageShowSetting*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainPageShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyAvatarShowSettings_ConfigBuddyAvatarShowSettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BD70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyAvatarShowSettings_ConfigBuddyAvatarShowSettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BD78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigBuddyAvatarShowSettings*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigBuddyAvatarShowSettings*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CONFIGBUDDYAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
