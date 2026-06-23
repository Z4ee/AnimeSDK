#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { template <typename T> class Predicate_1; }

#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81A9C0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__COLLECTPROPERTYNAMES_B__27_0_OFFSET UNITYSDK_OFFSET(0x1E81AA10)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__COLLECTPROPERTYNAMES_B__27_1_OFFSET UNITYSDK_OFFSET(0x1E81AAB0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__COLLECTPROPERTYNAMES_B__27_2_OFFSET UNITYSDK_OFFSET(0x1E81AB50)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81AA00)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MBVersionConcrete___c_TypeDefinitionIndex = 90564;

	class MBVersionConcrete___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>** StaticGet___9__27_0()
		{
			return (::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>**)Il2CppClass::FromTypeDefinitionIndex(MBVersionConcrete___c_TypeDefinitionIndex)->GetStaticField(0x4E410);
		}
		static ::DigitalOpus::MB::Core::MBVersionConcrete___c** StaticGet___9()
		{
			return (::DigitalOpus::MB::Core::MBVersionConcrete___c**)Il2CppClass::FromTypeDefinitionIndex(MBVersionConcrete___c_TypeDefinitionIndex)->GetStaticField(0x4E418);
		}
		static ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>** StaticGet___9__27_2()
		{
			return (::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>**)Il2CppClass::FromTypeDefinitionIndex(MBVersionConcrete___c_TypeDefinitionIndex)->GetStaticField(0x4E420);
		}
		static ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>** StaticGet___9__27_1()
		{
			return (::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>**)Il2CppClass::FromTypeDefinitionIndex(MBVersionConcrete___c_TypeDefinitionIndex)->GetStaticField(0x4E428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CollectPropertyNames_b__27_0(::DigitalOpus::MB::Core::ShaderTextureProperty* pn)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__COLLECTPROPERTYNAMES_B__27_0_OFFSET))(this, pn);
		}

		::System::Boolean _CollectPropertyNames_b__27_1(::DigitalOpus::MB::Core::ShaderTextureProperty* pn)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__COLLECTPROPERTYNAMES_B__27_1_OFFSET))(this, pn);
		}

		::System::Boolean _CollectPropertyNames_b__27_2(::DigitalOpus::MB::Core::ShaderTextureProperty* pn)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE___C__COLLECTPROPERTYNAMES_B__27_2_OFFSET))(this, pn);
		}
	};
}
