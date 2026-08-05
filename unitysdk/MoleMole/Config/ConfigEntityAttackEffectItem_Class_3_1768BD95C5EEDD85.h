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

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11702430)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11702440)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85_WRITE_OFFSET UNITYSDK_OFFSET(0x11702D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85__CCTOR_OFFSET UNITYSDK_OFFSET(0x11703290)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85__CTOR_OFFSET UNITYSDK_OFFSET(0x11703250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffectItem_Class_3_1768BD95C5EEDD85_TypeDefinitionIndex = 69097;

	class ConfigEntityAttackEffectItem_Class_3_1768BD95C5EEDD85 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_Class_3_1768BD95C5EEDD85_TypeDefinitionIndex)->GetStaticField(0x4F8F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_Class_3_1768BD95C5EEDD85_TypeDefinitionIndex)->GetStaticField(0x4F8F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackEffectTriggerAt>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackEffectTriggerAt>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_Class_3_1768BD95C5EEDD85_TypeDefinitionIndex)->GetStaticField(0x4F900);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_Class_3_1768BD95C5EEDD85_TypeDefinitionIndex)->GetStaticField(0x4F908);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackEffectItem_Class_3_1768BD95C5EEDD85_TypeDefinitionIndex)->GetStaticField(0x4F910);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackEffectItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackEffectItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_CLASS_3_1768BD95C5EEDD85_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
