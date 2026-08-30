#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C108C82C095C1A03;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_150026B6423E5934___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18567420)
#define CLASS_1_150026B6423E5934___C__DISPLAYCLASS3_0___WAITMISSIONDATAREADY_B__0_OFFSET UNITYSDK_OFFSET(0x185674B0)

inline static constexpr unsigned int Class_1_150026B6423E5934___c__DisplayClass3_0_TypeDefinitionIndex = 79197;

class Class_1_150026B6423E5934___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_C108C82C095C1A03* rsp; // 0x10
	::RPG::Client::Promises::Promise_1<::Class_1_C108C82C095C1A03*>* promise; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __WaitMissionDataReady_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934___C__DISPLAYCLASS3_0___WAITMISSIONDATAREADY_B__0_OFFSET))(this);
	}
};
