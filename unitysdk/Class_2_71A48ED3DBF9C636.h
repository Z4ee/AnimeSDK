#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_4BFB662CA8913AC0.h"

class Class_0_16E4307DCC419505_408;

#define CLASS_2_71A48ED3DBF9C636_METHOD_2_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x12503B80)
#define CLASS_2_71A48ED3DBF9C636_METHOD_2_E54F64E7B68AFBF4_OFFSET UNITYSDK_OFFSET(0x12503BF0)
#define CLASS_2_71A48ED3DBF9C636__CTOR_OFFSET UNITYSDK_OFFSET(0x12503E40)

inline static constexpr unsigned int Class_2_71A48ED3DBF9C636_TypeDefinitionIndex = 49570;

class Class_2_71A48ED3DBF9C636 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_408*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A48ED3DBF9C636__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A48ED3DBF9C636_METHOD_2_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_2_E54F64E7B68AFBF4(::Struct_2_4BFB662CA8913AC0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4BFB662CA8913AC0&))((::PBYTE)hIl2Cpp + CLASS_2_71A48ED3DBF9C636_METHOD_2_E54F64E7B68AFBF4_OFFSET))(this, a1);
	}
};
