#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingFogEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingScreenEffect.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigLevelResultPerform; }
namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace MoleMole::Utils::CameraSequence { class CameraSequence_VideoItem_ComposeObject; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12717F00)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12717F10)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12718E50)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12719700)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x127196C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex = 65847;

	class ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigLevelResultPerforms*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA70);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::Config::ConfigLevelResultPerform*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::Config::ConfigLevelResultPerform*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::ELocalPlayType>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::ELocalPlayType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CAA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CAA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CAB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CAB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CAC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CAC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_ConfigLevelResultPerforms_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CAD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigLevelResultPerforms*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigLevelResultPerforms*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CONFIGLEVELRESULTPERFORMS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
