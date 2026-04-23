#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_1_8C3AC9786B6764EF;
class Class_1_AD0B53B56535FBAD;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS14_0__ADDUNPACK_B__0_OFFSET UNITYSDK_OFFSET(0x97FFE30)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS14_0__ADDUNPACK_B__1_OFFSET UNITYSDK_OFFSET(0x97FFD90)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FBD30)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass14_0_TypeDefinitionIndex = 54953;

class Class_1_8C3AC9786B6764EF___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x10
	::RPG::Client::DataActionProgress_1<::Class_1_AD0B53B56535FBAD*>* progress; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddUnpack_b__1(::Class_0_16E4307DCC419505_557* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS14_0__ADDUNPACK_B__1_OFFSET))(this, _);
	}

	::System::Void _AddUnpack_b__0(::Class_0_16E4307DCC419505_559* data, ::Class_1_AD0B53B56535FBAD* item)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_559*, ::Class_1_AD0B53B56535FBAD*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS14_0__ADDUNPACK_B__0_OFFSET))(this, data, item);
	}
};
