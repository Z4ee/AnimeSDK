#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyFresnelModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B5729C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5729D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9_WRITE_OFFSET UNITYSDK_OFFSET(0x1B573860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5740F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5740B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex = 70245;

	class ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyFresnelModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_Class_3_C612B285774C54E9_TypeDefinitionIndex)->GetStaticField(0x4D4E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyFresnelModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyFresnelModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyFresnelModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyFresnelModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CLASS_3_C612B285774C54E9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
