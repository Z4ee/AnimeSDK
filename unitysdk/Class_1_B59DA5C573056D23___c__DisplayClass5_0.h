#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5AD3EC2EA1B1D5CD;
class Class_1_970413AB8390BE8E;
class Class_1_B59DA5C573056D23;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15958E20)
#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS5_0__DIRECTACQUIREPARTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1595AD30)

inline static constexpr unsigned int Class_1_B59DA5C573056D23___c__DisplayClass5_0_TypeDefinitionIndex = 80487;

class Class_1_B59DA5C573056D23___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_B59DA5C573056D23* __4__this; // 0x10
	::Class_1_5AD3EC2EA1B1D5CD* carBeforeDevelop; // 0x18
	::System::UInt32 partID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _DirectAcquirePartAsync_b__0(::Class_1_970413AB8390BE8E* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_970413AB8390BE8E*))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS5_0__DIRECTACQUIREPARTASYNC_B__0_OFFSET))(this, a1);
	}
};
