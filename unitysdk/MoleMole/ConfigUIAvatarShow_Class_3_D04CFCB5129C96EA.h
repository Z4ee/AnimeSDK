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

#define MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19AD8C60)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19AD8C70)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA_WRITE_OFFSET UNITYSDK_OFFSET(0x19AD9360)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AD97A0)
#define MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9760)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA_TypeDefinitionIndex = 43721;

	class ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIAvatarShow*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA_TypeDefinitionIndex)->GetStaticField(0x518C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIAvatarCommonLigtOpenType*, ::MoleMole::UIAvatarCommonLightSetting*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIAvatarCommonLigtOpenType*, ::MoleMole::UIAvatarCommonLightSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA_TypeDefinitionIndex)->GetStaticField(0x518C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA_TypeDefinitionIndex)->GetStaticField(0x518D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA_TypeDefinitionIndex)->GetStaticField(0x518D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarShowSettingDefault*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarShowSettingDefault*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA_TypeDefinitionIndex)->GetStaticField(0x518E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIVolumeOpenType_Select*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::UIVolumeOpenType_Select*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_Class_3_D04CFCB5129C96EA_TypeDefinitionIndex)->GetStaticField(0x518E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIAvatarShow*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUIAvatarShow*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_CLASS_3_D04CFCB5129C96EA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
