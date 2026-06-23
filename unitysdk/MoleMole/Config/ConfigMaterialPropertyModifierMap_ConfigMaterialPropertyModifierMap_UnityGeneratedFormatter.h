#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18AD55C0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18AD55D0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18AD57B0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AD5950)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD5910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifierMap_ConfigMaterialPropertyModifierMap_UnityGeneratedFormatter_TypeDefinitionIndex = 64561;

	class ConfigMaterialPropertyModifierMap_ConfigMaterialPropertyModifierMap_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMaterialPropertyModifierMap*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyModifierMap_ConfigMaterialPropertyModifierMap_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyModifierMap_ConfigMaterialPropertyModifierMap_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertyModifierMap*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertyModifierMap*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CONFIGMATERIALPROPERTYMODIFIERMAP_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
