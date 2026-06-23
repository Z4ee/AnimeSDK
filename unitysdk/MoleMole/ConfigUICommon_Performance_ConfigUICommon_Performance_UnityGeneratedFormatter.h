#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigUICommon_Performance; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192B6370)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192B6380)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x192B6B80)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192B7050)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B7010)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex = 43116;

	class ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_Performance*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40ED0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_ConfigUICommon_Performance_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40ED8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_Performance*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_Performance*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_Performance*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Performance*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CONFIGUICOMMON_PERFORMANCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
