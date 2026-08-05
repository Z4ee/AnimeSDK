#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyGhostMaskModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B80B7A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B80B7B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1_WRITE_OFFSET UNITYSDK_OFFSET(0x1B80C4F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B80CCB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B80CC70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex = 71899;

	class ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyGhostMaskModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A620);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A628);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A630);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A638);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A640);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A648);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A650);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGhostMaskModifier_Class_3_46401EE8CF4B4AF1_TypeDefinitionIndex)->GetStaticField(0x4A658);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyGhostMaskModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGhostMaskModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyGhostMaskModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGhostMaskModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_CLASS_3_46401EE8CF4B4AF1_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
