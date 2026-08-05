#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueSecondaryEmissionBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertySecondaryEmissionModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BB2060)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BB2070)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B_WRITE_OFFSET UNITYSDK_OFFSET(0x19BB37C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BB45C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB4580)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex = 64936;

	class ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B20);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B30);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B48);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B78);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_Class_3_B645CE6F4A36156B_TypeDefinitionIndex)->GetStaticField(0x48B90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CLASS_3_B645CE6F4A36156B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
