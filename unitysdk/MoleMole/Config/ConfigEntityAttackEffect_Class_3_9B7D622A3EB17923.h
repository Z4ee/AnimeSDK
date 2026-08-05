#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkelem.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkweapon.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Imactlevel.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7E7B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7E7B20)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7E81F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7E8620)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E85E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923_TypeDefinitionIndex = 82240;

	class ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAttackEffect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkelem>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkelem>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923_TypeDefinitionIndex)->GetStaticField(0x4A520);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923_TypeDefinitionIndex)->GetStaticField(0x4A528);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkweapon>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkweapon>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923_TypeDefinitionIndex)->GetStaticField(0x4A530);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923_TypeDefinitionIndex)->GetStaticField(0x4A538);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Imactlevel>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Imactlevel>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923_TypeDefinitionIndex)->GetStaticField(0x4A540);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_Class_3_9B7D622A3EB17923_TypeDefinitionIndex)->GetStaticField(0x4A548);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackEffect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackEffect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CLASS_3_9B7D622A3EB17923_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
