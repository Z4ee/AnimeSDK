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

#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4F69D0)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F69E0)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4F6B70)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4F6CD0)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F6C90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyAvatarShowSettings_Class_3_B349E71FBDF4281C_TypeDefinitionIndex = 65288;

	class ConfigBuddyAvatarShowSettings_Class_3_B349E71FBDF4281C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigBuddyAvatarShowSettings*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyAvatarShowSettings_Class_3_B349E71FBDF4281C_TypeDefinitionIndex)->GetStaticField(0x4E760);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainPageShowSetting*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainPageShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuddyAvatarShowSettings_Class_3_B349E71FBDF4281C_TypeDefinitionIndex)->GetStaticField(0x4E768);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigBuddyAvatarShowSettings*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigBuddyAvatarShowSettings*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_CLASS_3_B349E71FBDF4281C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
