#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarShowSettingDefault; }
namespace MoleMole { class ConfigUIAvatarShow; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace MoleMole { class UIAvatarCommonLigtOpenType; }
namespace MoleMole { class UIAvatarShowSetting; }
namespace MoleMole { class UIVolumeOpenType_Select; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16B53B10)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16B53B20)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16B54270)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B546E0)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16B546A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex = 55793;

	class ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIAvatarShow*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41B30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIVolumeOpenType_Select*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIVolumeOpenType_Select*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41B38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41B48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIAvatarCommonLigtOpenType*, ::MoleMole::UIAvatarCommonLightSetting*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIAvatarCommonLigtOpenType*, ::MoleMole::UIAvatarCommonLightSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41B50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarShowSettingDefault*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarShowSettingDefault*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_ConfigUIAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41B58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIAvatarShow*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUIAvatarShow*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CONFIGUIAVATARSHOW_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
