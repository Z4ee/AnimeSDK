#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B59DA5C573056D23_Struct_2_BEE76773838D4608.h"
#include "unitysdk/System/Object.h"

class Class_1_B59DA5C573056D23___c__DisplayClass3_0;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1595AC30)
#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_1__DEVELOPCARASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1595AC40)

inline static constexpr unsigned int Class_1_B59DA5C573056D23___c__DisplayClass3_1_TypeDefinitionIndex = 80485;

class Class_1_B59DA5C573056D23___c__DisplayClass3_1 : public ::System::Object
{
public:
	::Class_1_B59DA5C573056D23___c__DisplayClass3_0* CS___8__locals1; // 0x10
	::Class_1_B59DA5C573056D23_Struct_2_BEE76773838D4608 syncResult; // 0x18
	::System::UInt32 oldPartID; // 0x28
	::System::UInt32 newPartID; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _DevelopCarAsync_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS3_1__DEVELOPCARASYNC_B__1_OFFSET))(this);
	}
};
