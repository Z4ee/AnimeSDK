#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAbnormalPropertyType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyAbnormalPropertyModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BA97D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA97E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065_WRITE_OFFSET UNITYSDK_OFFSET(0x19BAB6B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BAC930)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065__CTOR_OFFSET UNITYSDK_OFFSET(0x19BAC8F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex = 54587;

	class ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x489F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x489F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A18);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A20);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A38);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A40);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A48);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A50);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_Class_3_5064F0D14DAF5065_TypeDefinitionIndex)->GetStaticField(0x48A58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CLASS_3_5064F0D14DAF5065_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
