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

namespace MoleMole { class ConfigMaterialPropertyAbnormalPropertyFreezeModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B92F390)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B92F3A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5_WRITE_OFFSET UNITYSDK_OFFSET(0x1B9311B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9323C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B932380)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex = 85315;

	class ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyAbnormalPropertyFreezeModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E60);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E70);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E78);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39E98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39EA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39EA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyFreezeModifier_Class_3_9C57C0D65EFC12A5_TypeDefinitionIndex)->GetStaticField(0x39EB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyAbnormalPropertyFreezeModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyFreezeModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyAbnormalPropertyFreezeModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyFreezeModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_CLASS_3_9C57C0D65EFC12A5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
