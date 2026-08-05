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

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C45D70)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C45D80)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44_WRITE_OFFSET UNITYSDK_OFFSET(0x16C45F10)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C46070)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44__CTOR_OFFSET UNITYSDK_OFFSET(0x16C46030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifierMap_Class_3_2CF7564607402D44_TypeDefinitionIndex = 57731;

	class ConfigMaterialPropertyModifierMap_Class_3_2CF7564607402D44 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMaterialPropertyModifierMap*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyModifierMap_Class_3_2CF7564607402D44_TypeDefinitionIndex)->GetStaticField(0x488E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyModifierMap_Class_3_2CF7564607402D44_TypeDefinitionIndex)->GetStaticField(0x488E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertyModifierMap*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertyModifierMap*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CLASS_3_2CF7564607402D44_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
