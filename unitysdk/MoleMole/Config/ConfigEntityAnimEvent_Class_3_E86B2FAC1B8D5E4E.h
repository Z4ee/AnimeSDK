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

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD57570)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD576A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_READ_OFFSET UNITYSDK_OFFSET(0x1BD57580)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD58150)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD58890)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD58850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex = 91280;

	class ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAnimEvent*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C60);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C70);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackCameraShake*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraZoom*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraZoom*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraStretch*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityCameraStretch*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50C98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50CA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackEffect*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50CA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackProperty*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackProperty*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50CB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackPatternType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAttackPatternType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50CB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50CC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50CC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_Class_3_E86B2FAC1B8D5E4E_TypeDefinitionIndex)->GetStaticField(0x50CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::ConfigEntityAnimEvent*& a1, ::Sirenix::Serialization::IDataReader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_READ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAnimEvent*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAnimEvent*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CLASS_3_E86B2FAC1B8D5E4E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
