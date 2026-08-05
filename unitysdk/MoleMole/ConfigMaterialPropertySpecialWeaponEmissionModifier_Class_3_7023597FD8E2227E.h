#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertySpecialWeaponEmissionModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4FAA60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4FAA70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4FBC50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4FC720)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FC6E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex = 44728;

	class ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E7D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E7D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E7E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E7E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E7F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E7F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E800);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E808);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E810);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_Class_3_7023597FD8E2227E_TypeDefinitionIndex)->GetStaticField(0x4E818);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CLASS_3_7023597FD8E2227E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
