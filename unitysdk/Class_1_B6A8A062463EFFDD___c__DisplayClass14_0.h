#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_480;
class Class_1_AD0B53B56535FBAD;
class Class_1_B6A8A062463EFFDD;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS14_0__ADDUNPACK_B__0_OFFSET UNITYSDK_OFFSET(0x10C43A30)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS14_0__ADDUNPACK_B__1_OFFSET UNITYSDK_OFFSET(0x10C439A0)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3F9F0)

inline static constexpr unsigned int Class_1_B6A8A062463EFFDD___c__DisplayClass14_0_TypeDefinitionIndex = 48208;

class Class_1_B6A8A062463EFFDD___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_1_B6A8A062463EFFDD* __4__this; // 0x10
	::RPG::Client::DataActionProgress_1<::Class_1_AD0B53B56535FBAD*>* progress; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddUnpack_b__1(::Class_0_16E4307DCC419505_478* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS14_0__ADDUNPACK_B__1_OFFSET))(this, _);
	}

	::System::Void _AddUnpack_b__0(::Class_0_16E4307DCC419505_480* data, ::Class_1_AD0B53B56535FBAD* item)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*, ::Class_1_AD0B53B56535FBAD*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS14_0__ADDUNPACK_B__0_OFFSET))(this, data, item);
	}
};
