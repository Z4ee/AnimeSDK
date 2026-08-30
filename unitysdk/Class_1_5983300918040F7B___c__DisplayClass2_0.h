#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5983300918040F7B;
class Class_1_7C1B6F38E8E579A2;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157BE890)
#define CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0x157BEF10)
#define CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__ONENTER_B__1_OFFSET UNITYSDK_OFFSET(0x157BEFE0)
#define CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__ONENTER_B__2_OFFSET UNITYSDK_OFFSET(0x157BF010)

inline static constexpr unsigned int Class_1_5983300918040F7B___c__DisplayClass2_0_TypeDefinitionIndex = 77262;

class Class_1_5983300918040F7B___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_5983300918040F7B* __4__this; // 0x10
	::Class_1_7C1B6F38E8E579A2* phaseData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _OnEnter_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__ONENTER_B__0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _OnEnter_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__ONENTER_B__1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _OnEnter_b__2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5983300918040F7B___C__DISPLAYCLASS2_0__ONENTER_B__2_OFFSET))(this);
	}
};
