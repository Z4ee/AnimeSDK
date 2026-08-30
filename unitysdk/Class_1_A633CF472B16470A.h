#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A633CF472B16470A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A432EE0)
#define CLASS_1_A633CF472B16470A_METHOD_1_1E91FFFB37216F67_OFFSET UNITYSDK_OFFSET(0x1A432880)
#define CLASS_1_A633CF472B16470A_METHOD_1_272C3FF0FD3A3ADE_OFFSET UNITYSDK_OFFSET(0x1A433280)
#define CLASS_1_A633CF472B16470A_METHOD_1_5311EEFD8D11BEA3_OFFSET UNITYSDK_OFFSET(0x1A432BB0)
#define CLASS_1_A633CF472B16470A_METHOD_1_9E9615ED35F4AD70_OFFSET UNITYSDK_OFFSET(0x1A432F30)
#define CLASS_1_A633CF472B16470A_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x1A432830)
#define CLASS_1_A633CF472B16470A_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1A432D20)
#define CLASS_1_A633CF472B16470A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A433330)

inline static constexpr unsigned int Class_1_A633CF472B16470A_TypeDefinitionIndex = 61304;

class Class_1_A633CF472B16470A : public ::System::Object
{
public:
	::System::String* LOAGDPONECC; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::BundleArchiveFileJsonItem*>* ELLBAOHDHFE; // 0x18
	::System::Int32 BBGNJHAELDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::RPG::Client::BundleArchiveFileJsonItem* Method_1_5311EEFD8D11BEA3(::System::String* a1)
	{
		return ((::RPG::Client::BundleArchiveFileJsonItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_5311EEFD8D11BEA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E91FFFB37216F67(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_1E91FFFB37216F67_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A633CF472B16470A_METHOD_1_EC2B405D0723571D_OFFSET))(this);
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
