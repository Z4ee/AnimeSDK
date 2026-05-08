#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyDitherAlphaModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11CB8EB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11CB8EC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x11CB9E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CBA6E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBA6A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 62400;

	class ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E820);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E828);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E830);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E838);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E840);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E848);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E850);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDitherAlphaModifier_ConfigMaterialPropertyDitherAlphaModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E858);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
