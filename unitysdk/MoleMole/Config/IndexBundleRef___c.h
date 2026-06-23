#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_F1C13185F6DD3EB0_OFFSET UNITYSDK_OFFSET(0xE97D820)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE97D7D0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE97D810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBundleRef___c_TypeDefinitionIndex = 56583;

	class IndexBundleRef___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::IndexBundleRef___c** StaticGet___9()
		{
			return (::MoleMole::Config::IndexBundleRef___c**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x48450);
		}
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x48458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_F1C13185F6DD3EB0(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_F1C13185F6DD3EB0_OFFSET))(this, a1);
		}
	};
}
