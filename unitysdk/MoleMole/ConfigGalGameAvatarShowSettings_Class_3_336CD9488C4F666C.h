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

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4F6E90)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F6EA0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4F6F70)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7060)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7020)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShowSettings_Class_3_336CD9488C4F666C_TypeDefinitionIndex = 71768;

	class ConfigGalGameAvatarShowSettings_Class_3_336CD9488C4F666C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigGalGameAvatarShowSettings*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGalGameAvatarShowSettings_Class_3_336CD9488C4F666C_TypeDefinitionIndex)->GetStaticField(0x4E770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGalGameAvatarShowSettings*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigGalGameAvatarShowSettings*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_CLASS_3_336CD9488C4F666C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
