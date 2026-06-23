#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyVertextStretchModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A36F530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A36F540)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A370A20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A371630)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3715F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 47455;

	class ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyVertextStretchModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_ConfigMaterialPropertyVertextStretchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D7F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyVertextStretchModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyVertextStretchModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyVertextStretchModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyVertextStretchModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
