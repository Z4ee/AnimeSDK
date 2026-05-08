#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AttackEffectTriggerAt.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x159E8EA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x159E8EB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x159E9800)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x159E9DA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x159E9D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffectItem_ConfigEntityAttackEffectItem_UnityGeneratedFormatter_TypeDefinitionIndex = 39244;

	class ConfigEntityAttackEffectItem_ConfigEntityAttackEffectItem_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_ConfigEntityAttackEffectItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49240);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_ConfigEntityAttackEffectItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49248);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_ConfigEntityAttackEffectItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49250);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_ConfigEntityAttackEffectItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49258);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackEffectTriggerAt>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackEffectTriggerAt>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_ConfigEntityAttackEffectItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackEffectItem*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackEffectItem*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CONFIGENTITYATTACKEFFECTITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
