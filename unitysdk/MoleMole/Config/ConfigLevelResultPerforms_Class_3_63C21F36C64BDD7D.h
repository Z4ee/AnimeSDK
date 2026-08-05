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

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x134FF1A0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x134FF1B0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D_WRITE_OFFSET UNITYSDK_OFFSET(0x13500050)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D__CCTOR_OFFSET UNITYSDK_OFFSET(0x135008E0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D__CTOR_OFFSET UNITYSDK_OFFSET(0x135008A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex = 73016;

	class ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigLevelResultPerforms*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF50);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF68);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::Config::ConfigLevelResultPerform*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::Config::ConfigLevelResultPerform*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BF98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::ELocalPlayType>*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::ELocalPlayType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_Class_3_63C21F36C64BDD7D_TypeDefinitionIndex)->GetStaticField(0x4BFA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigLevelResultPerforms*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigLevelResultPerforms*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_CLASS_3_63C21F36C64BDD7D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
