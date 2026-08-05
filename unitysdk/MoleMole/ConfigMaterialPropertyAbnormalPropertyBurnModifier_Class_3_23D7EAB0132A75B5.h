#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyAbnormalPropertyBurnModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19215870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19215880)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5_WRITE_OFFSET UNITYSDK_OFFSET(0x19217300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x192182D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5__CTOR_OFFSET UNITYSDK_OFFSET(0x19218290)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex = 89098;

	class ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyAbnormalPropertyBurnModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FA70);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FA78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FA80);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FA88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FA90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FA98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FAA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FAA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FAB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FAB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FAC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FAC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyBurnModifier_Class_3_23D7EAB0132A75B5_TypeDefinitionIndex)->GetStaticField(0x4FAD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyAbnormalPropertyBurnModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyBurnModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyAbnormalPropertyBurnModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyBurnModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_CLASS_3_23D7EAB0132A75B5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
