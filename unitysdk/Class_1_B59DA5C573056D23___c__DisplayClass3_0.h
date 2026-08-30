#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_497921D1CA5AB772;
class Class_1_5AD3EC2EA1B1D5CD;
class Class_1_B59DA5C573056D23;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15958B20)
#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_0__DEVELOPCARASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1595AA60)

inline static constexpr unsigned int Class_1_B59DA5C573056D23___c__DisplayClass3_0_TypeDefinitionIndex = 80484;

class Class_1_B59DA5C573056D23___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_B59DA5C573056D23* __4__this; // 0x10
	::Class_1_5AD3EC2EA1B1D5CD* carBeforeDevelop; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _DevelopCarAsync_b__0(::Class_1_497921D1CA5AB772* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_497921D1CA5AB772*))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_0__DEVELOPCARASYNC_B__0_OFFSET))(this, a1);
	}
};
