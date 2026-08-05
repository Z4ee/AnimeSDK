#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyMatCapModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BAE2A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BAE2B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293_WRITE_OFFSET UNITYSDK_OFFSET(0x19BB0820)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BB1EE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB1EA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex = 55399;

	class ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyMatCapModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48AF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48B00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48B08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMatCapModifier_Class_3_9D8BC3C02388E293_TypeDefinitionIndex)->GetStaticField(0x48B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyMatCapModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMatCapModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyMatCapModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMatCapModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_CLASS_3_9D8BC3C02388E293_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
