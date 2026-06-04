#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_4BFB662CA8913AC0.h"

class Class_0_16E4307DCC419505_427;

#define CLASS_2_71A48ED3DBF9C636_METHOD_2_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x138AE7C0)
#define CLASS_2_71A48ED3DBF9C636_METHOD_2_E54F64E7B68AFBF4_OFFSET UNITYSDK_OFFSET(0x138AE830)
#define CLASS_2_71A48ED3DBF9C636__CTOR_OFFSET UNITYSDK_OFFSET(0x138AEA80)

inline static constexpr unsigned int Class_2_71A48ED3DBF9C636_TypeDefinitionIndex = 50237;

class Class_2_71A48ED3DBF9C636 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_427*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A48ED3DBF9C636__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A48ED3DBF9C636_METHOD_2_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void Method_2_E54F64E7B68AFBF4(::Struct_2_4BFB662CA8913AC0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4BFB662CA8913AC0&))((::PBYTE)hIl2Cpp + CLASS_2_71A48ED3DBF9C636_METHOD_2_E54F64E7B68AFBF4_OFFSET))(this, a1);
	}
};
