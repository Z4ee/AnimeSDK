#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyOverrideModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C481F90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C481FA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439_WRITE_OFFSET UNITYSDK_OFFSET(0x1C482CF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4834E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4834A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex = 63949;

	class ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyOverrideModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46C70);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46C78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46C88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46C90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46C98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46CA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46CA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideModifier_Class_3_245F08C3B15D8439_TypeDefinitionIndex)->GetStaticField(0x46CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOverrideModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOverrideModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_CLASS_3_245F08C3B15D8439_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
