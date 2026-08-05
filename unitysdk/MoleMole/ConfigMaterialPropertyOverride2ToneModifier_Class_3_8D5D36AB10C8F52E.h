#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueLightSource.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValuePointSpace.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigMaterialPropertyOverride2ToneModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C522BC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C522BD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E_WRITE_OFFSET UNITYSDK_OFFSET(0x1C524180)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C524E70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C524E30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex = 59749;

	class ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F780);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F788);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F790);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F798);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_Class_3_8D5D36AB10C8F52E_TypeDefinitionIndex)->GetStaticField(0x3F7F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CLASS_3_8D5D36AB10C8F52E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
