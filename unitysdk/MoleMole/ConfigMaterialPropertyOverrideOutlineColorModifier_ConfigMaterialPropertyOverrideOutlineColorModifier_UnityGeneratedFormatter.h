#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyOverrideOutlineColorModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1754CEA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1754CEB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1754E030)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1754EA70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1754EA30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 44144;

	class ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyOverrideOutlineColorModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A3F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A400);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideOutlineColorModifier_ConfigMaterialPropertyOverrideOutlineColorModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A408);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOverrideOutlineColorModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideOutlineColorModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOverrideOutlineColorModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideOutlineColorModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
