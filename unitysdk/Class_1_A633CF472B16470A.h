#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A633CF472B16470A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xBA54480)
#define CLASS_1_A633CF472B16470A_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xBA54290)
#define CLASS_1_A633CF472B16470A_METHOD_1_272C3FF0FD3A3ADE_OFFSET UNITYSDK_OFFSET(0xBA54820)
#define CLASS_1_A633CF472B16470A_METHOD_1_5311EEFD8D11BEA3_OFFSET UNITYSDK_OFFSET(0xBA54120)
#define CLASS_1_A633CF472B16470A_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xBA53DE0)
#define CLASS_1_A633CF472B16470A_METHOD_1_91012FDC152072DC_OFFSET UNITYSDK_OFFSET(0xBA53E30)
#define CLASS_1_A633CF472B16470A_METHOD_1_9E9615ED35F4AD70_OFFSET UNITYSDK_OFFSET(0xBA544D0)
#define CLASS_1_A633CF472B16470A__CTOR_OFFSET UNITYSDK_OFFSET(0xBA548D0)

inline static constexpr unsigned int Class_1_A633CF472B16470A_TypeDefinitionIndex = 61210;

class Class_1_A633CF472B16470A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BundleArchiveFileJsonItem*>* ELLBAOHDHFE; // 0x10
	::System::String* LOAGDPONECC; // 0x18
	::System::Int32 BBGNJHAELDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_62593EE2FE331D20_OFFSET))(this);
	}

	::RPG::Client::BundleArchiveFileJsonItem* Method_1_5311EEFD8D11BEA3(::System::String* a1)
	{
		return ((::RPG::Client::BundleArchiveFileJsonItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_5311EEFD8D11BEA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_91012FDC152072DC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_91012FDC152072DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E9615ED35F4AD70(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_9E9615ED35F4AD70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_272C3FF0FD3A3ADE(::RPG::Client::BundleArchiveFileJsonItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BundleArchiveFileJsonItem*))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_272C3FF0FD3A3ADE_OFFSET))(this, a1);
	}
};
