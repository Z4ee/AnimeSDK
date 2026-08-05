#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/SocialPostSizeType.h"
#include "unitysdk/ProtoScript/HollowShopCurrencyType.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

class BubbleProgressColor;
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class ConfigUICommon_UIPage; }
namespace MoleMole { class ConfigUICommon_UIPage_StreamingPagePauseGameLogic; }
namespace MoleMole { class FeverV3MaterialParam; }
namespace MoleMole { class InterknotPostHeightDic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1922B4B0)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1922B4C0)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C_WRITE_OFFSET UNITYSDK_OFFSET(0x1922BE50)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1922C410)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C__CTOR_OFFSET UNITYSDK_OFFSET(0x1922C3D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex = 60267;

	class ConfigUICommon_UIPage_Class_3_15945603BF084D9C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_UIPage*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_UIPage_StreamingPagePauseGameLogic*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_UIPage_StreamingPagePauseGameLogic*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SocialPostSizeType, ::System::Single>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SocialPostSizeType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_Class_3_15945603BF084D9C_TypeDefinitionIndex)->GetStaticField(0x4FC68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_UIPage*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_UIPage*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_UIPage*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_UIPage*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CLASS_3_15945603BF084D9C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
