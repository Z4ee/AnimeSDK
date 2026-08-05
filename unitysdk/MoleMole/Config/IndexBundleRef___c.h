#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_2C61108A8DA0AD73_1_OFFSET UNITYSDK_OFFSET(0x19ACE4C0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_2C61108A8DA0AD73_OFFSET UNITYSDK_OFFSET(0x19ACE4A0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ACE450)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACE490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBundleRef___c_TypeDefinitionIndex = 84217;

	class IndexBundleRef___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::IndexBundleRef___c** StaticGet___9()
		{
			return (::MoleMole::Config::IndexBundleRef___c**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x4E700);
		}
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__0_1()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x4E708);
		}
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x4E710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_2C61108A8DA0AD73(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_2C61108A8DA0AD73_OFFSET))(this, a1);
		}

		::System::String* Method_1_2C61108A8DA0AD73_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_2C61108A8DA0AD73_1_OFFSET))(this, a1);
		}
	};
}
