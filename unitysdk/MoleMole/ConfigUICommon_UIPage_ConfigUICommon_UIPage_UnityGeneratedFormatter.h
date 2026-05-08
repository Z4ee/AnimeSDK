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

#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D37E30)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D37E40)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D38840)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D38E30)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D38DF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex = 52156;

	class ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_UIPage*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SocialPostSizeType, ::System::Single>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SocialPostSizeType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_UIPage_StreamingPagePauseGameLogic*>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_UIPage_StreamingPagePauseGameLogic*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x478F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47900);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_ConfigUICommon_UIPage_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47908);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_UIPage*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_UIPage*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_UIPage*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_UIPage*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_CONFIGUICOMMON_UIPAGE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
