#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5772346ACD452D08.h"
#include "unitysdk/RPG/Client/TextID.h"

#define CLASS_2_A2AF1EBB6C9DE545_METHOD_2_1ECD1CA7132F9503_OFFSET UNITYSDK_OFFSET(0x8D08870)
#define CLASS_2_A2AF1EBB6C9DE545_METHOD_2_74C2BB27DF174BA3_OFFSET UNITYSDK_OFFSET(0x8D08960)
#define CLASS_2_A2AF1EBB6C9DE545__CTOR_OFFSET UNITYSDK_OFFSET(0x8D08850)

inline static constexpr unsigned int Class_2_A2AF1EBB6C9DE545_TypeDefinitionIndex = 49611;

class Class_2_A2AF1EBB6C9DE545 : public ::Class_1_5772346ACD452D08
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2AF1EBB6C9DE545__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_1ECD1CA7132F9503()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2AF1EBB6C9DE545_METHOD_2_1ECD1CA7132F9503_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_74C2BB27DF174BA3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2AF1EBB6C9DE545_METHOD_2_74C2BB27DF174BA3_OFFSET))(this);
	}
};
