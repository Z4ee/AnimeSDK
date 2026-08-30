#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
class Class_1_C7A3189C9B32F559;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD28D8C0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS9_0__STARTMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xD2917F0)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass9_0_TypeDefinitionIndex = 78952;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_7B005A18003A04C3* extInfo; // 0x10
	::Class_1_C7A3189C9B32F559* session; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _StartMatch_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS9_0__STARTMATCH_B__0_OFFSET))(this);
	}
};
