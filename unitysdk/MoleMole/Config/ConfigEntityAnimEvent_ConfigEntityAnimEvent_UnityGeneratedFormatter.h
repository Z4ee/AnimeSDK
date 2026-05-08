#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/ConfigAttackPatternType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class CollisionDetect; }
namespace MoleMole::Config { class ConfigAttackActiveFrameDynamicProp; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAttackCameraShake; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityCameraStretch; }
namespace MoleMole::Config { class ConfigEntityCameraZoom; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12305D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12305E90)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x12305D30)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x123069B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12307130)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x123070F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex = 79644;

	class ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAnimEvent*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C350);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackCameraShake*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C358);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackPatternType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackPatternType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C360);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C368);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C370);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackEffect*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C378);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C380);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C388);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C390);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackProperty*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackProperty*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C398);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C3A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraZoom*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraZoom*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C3A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraStretch*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraStretch*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C3B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C3B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_ConfigEntityAnimEvent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C3C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::ConfigEntityAnimEvent*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAnimEvent*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAnimEvent*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CONFIGENTITYANIMEVENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
