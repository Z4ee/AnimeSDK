#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class ConfigGalGameAvatarShowSettings; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A362ED0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A362EE0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A363010)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A363150)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A363110)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShowSettings_ConfigGalGameAvatarShowSettings_UnityGeneratedFormatter_TypeDefinitionIndex = 79845;

	class ConfigGalGameAvatarShowSettings_ConfigGalGameAvatarShowSettings_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigGalGameAvatarShowSettings*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGalGameAvatarShowSettings_ConfigGalGameAvatarShowSettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D740);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGalGameAvatarShowSettings*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigGalGameAvatarShowSettings*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CONFIGGALGAMEAVATARSHOWSETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
