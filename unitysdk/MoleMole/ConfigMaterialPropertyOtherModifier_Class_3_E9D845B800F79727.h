#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyOtherModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192233D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192233E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727_WRITE_OFFSET UNITYSDK_OFFSET(0x19224120)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727__CCTOR_OFFSET UNITYSDK_OFFSET(0x192248E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727__CTOR_OFFSET UNITYSDK_OFFSET(0x192248A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex = 89502;

	class ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyOtherModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB40);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOtherModifier_Class_3_E9D845B800F79727_TypeDefinitionIndex)->GetStaticField(0x4FB78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOtherModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOtherModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOtherModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOtherModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_CLASS_3_E9D845B800F79727_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
