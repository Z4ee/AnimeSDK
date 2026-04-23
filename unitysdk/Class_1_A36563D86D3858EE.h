#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1099;
namespace RPG::Client::ActivityIdleLive { class IdleLiveTickManager; }

#define CLASS_1_A36563D86D3858EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124978A0)
#define CLASS_1_A36563D86D3858EE_METHOD_1_9E992ACDF90158E8_OFFSET UNITYSDK_OFFSET(0x124977F0)
#define CLASS_1_A36563D86D3858EE__CTOR_OFFSET UNITYSDK_OFFSET(0x12497780)

inline static constexpr unsigned int Class_1_A36563D86D3858EE_TypeDefinitionIndex = 69507;

class Class_1_A36563D86D3858EE : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveTickManager* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A36563D86D3858EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9E992ACDF90158E8(::Class_0_16E4307DCC419505_1099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1099*))((::PBYTE)hIl2Cpp + CLASS_1_A36563D86D3858EE_METHOD_1_9E992ACDF90158E8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A36563D86D3858EE_DISPOSE_OFFSET))(this);
	}
};
