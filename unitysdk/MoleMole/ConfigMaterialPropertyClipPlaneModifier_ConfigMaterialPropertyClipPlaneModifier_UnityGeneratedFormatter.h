#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyClipPlaneModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D316F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D31700)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D329E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D334F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D334B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 60579;

	class ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyClipPlaneModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47850);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47858);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47860);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47868);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47870);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47878);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47880);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47888);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyClipPlaneModifier_ConfigMaterialPropertyClipPlaneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyClipPlaneModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyClipPlaneModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyClipPlaneModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyClipPlaneModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
