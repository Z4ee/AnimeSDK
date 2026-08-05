#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyGlitchModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD7E4A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD7E4B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD7F500)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD7FEE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD7FEA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex = 70142;

	class ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyGlitchModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50DE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50DE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50DF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50DF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50E00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50E08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50E10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50E18);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_Class_3_DF355DBAD4DDC206_TypeDefinitionIndex)->GetStaticField(0x50E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyGlitchModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGlitchModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyGlitchModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGlitchModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CLASS_3_DF355DBAD4DDC206_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
