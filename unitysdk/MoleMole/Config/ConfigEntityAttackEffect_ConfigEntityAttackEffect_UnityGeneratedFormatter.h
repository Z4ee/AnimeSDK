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

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D02700)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D02710)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D02E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D032B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D03270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter_TypeDefinitionIndex = 70913;

	class ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAttackEffect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkelem>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkelem>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x464F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Imactlevel>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Imactlevel>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x464F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkweapon>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Wwise_SwitchGroup_Atkweapon>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46500);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46508);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46510);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffect_ConfigEntityAttackEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46518);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackEffect*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackEffect*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CONFIGENTITYATTACKEFFECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
