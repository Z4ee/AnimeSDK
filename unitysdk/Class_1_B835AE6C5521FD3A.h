#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_5.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournTitanBless; }

#define CLASS_1_B835AE6C5521FD3A_METHOD_1_3FCB99F9C7889C1F_OFFSET UNITYSDK_OFFSET(0xDE563E0)
#define CLASS_1_B835AE6C5521FD3A_METHOD_1_748734F2545341E1_OFFSET UNITYSDK_OFFSET(0xDE562C0)
#define CLASS_1_B835AE6C5521FD3A__CTOR_OFFSET UNITYSDK_OFFSET(0xDE562B0)

inline static constexpr unsigned int Class_1_B835AE6C5521FD3A_TypeDefinitionIndex = 54773;

class Class_1_B835AE6C5521FD3A : public ::System::Object
{
public:
	::RPG::Client::RogueTournTitanBless* Field_1_1; // 0x10
	::Struct_2_FD0368737CBF6F9B_5 Field_1_0; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_5))((::PBYTE)hIl2Cpp + CLASS_1_B835AE6C5521FD3A__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_748734F2545341E1()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B835AE6C5521FD3A_METHOD_1_748734F2545341E1_OFFSET))(this);
	}

	::RPG::Client::RogueTournTitanBless* Method_1_3FCB99F9C7889C1F()
	{
		return ((::RPG::Client::RogueTournTitanBless*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B835AE6C5521FD3A_METHOD_1_3FCB99F9C7889C1F_OFFSET))(this);
	}
};
