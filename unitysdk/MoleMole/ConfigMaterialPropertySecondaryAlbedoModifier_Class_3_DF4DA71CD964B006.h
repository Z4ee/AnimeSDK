#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueDistortionChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertySecondaryAlbedoModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19D69A10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19D69A20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006_WRITE_OFFSET UNITYSDK_OFFSET(0x19D6B040)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D6BDA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6BD60)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex = 64717;

	class ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C100);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C108);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C110);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C118);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C120);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C128);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C130);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C138);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C140);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C148);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C150);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C158);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C160);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C168);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryAlbedoModifier_Class_3_DF4DA71CD964B006_TypeDefinitionIndex)->GetStaticField(0x4C170);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_CLASS_3_DF4DA71CD964B006_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
