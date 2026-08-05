#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyMainMapsModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1921B460)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1921B470)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E_WRITE_OFFSET UNITYSDK_OFFSET(0x19220360)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19223280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E__CTOR_OFFSET UNITYSDK_OFFSET(0x19223240)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex = 48192;

	class ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyMainMapsModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FAE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FAE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FAF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FAF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FB00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FB08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FB10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FB18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FB20);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FB28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyMainMapsModifier_Class_3_7A95D2C0AEA9322E_TypeDefinitionIndex)->GetStaticField(0x4FB30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyMainMapsModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMainMapsModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyMainMapsModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMainMapsModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_CLASS_3_7A95D2C0AEA9322E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
