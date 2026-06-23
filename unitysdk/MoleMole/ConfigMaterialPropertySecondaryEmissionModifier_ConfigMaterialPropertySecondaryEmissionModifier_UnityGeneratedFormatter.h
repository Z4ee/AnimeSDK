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

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D7C260)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D7C270)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1B21BFC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B21CDF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21CDB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 87020;

	class ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB10);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB20);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB30);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
