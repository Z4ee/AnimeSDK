#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyNoiseLerpModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4F8E20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F8E30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4F9F10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4FA920)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FA8E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex = 46996;

	class ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E780);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E788);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E790);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E798);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E7A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E7A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E7B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E7B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E7C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_Class_3_6B857D963196D606_TypeDefinitionIndex)->GetStaticField(0x4E7C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CLASS_3_6B857D963196D606_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
