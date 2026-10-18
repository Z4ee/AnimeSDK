#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_270;
class Class_2_230F5EDDB35DAEBA;
class Class_2_D55679E3C796A7AF;
class Class_3_CD59F26A5F0E803D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0744B77B3650F091_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB115270)
#define CLASS_1_0744B77B3650F091__CTOR_OFFSET UNITYSDK_OFFSET(0xB1151C0)

inline static constexpr unsigned int Class_1_0744B77B3650F091_TypeDefinitionIndex = 75928;

class Class_1_0744B77B3650F091 : public ::System::Object
{
public:
	::Class_2_D55679E3C796A7AF* EEFMDEHLLFI; // 0x10
	::System::Collections::Generic::List_1<::Class_2_230F5EDDB35DAEBA*>* ANKHLHPPJKP; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_270*>* LKNIHOLPBEP; // 0x20
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x28
	::System::Collections::Generic::List_1<::Class_2_230F5EDDB35DAEBA*>* MIOCFEDKPLK; // 0x30

	::System::Void _ctor(::Class_2_D55679E3C796A7AF* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D55679E3C796A7AF*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_0744B77B3650F091__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0744B77B3650F091_EXECUTE_OFFSET))(this);
	}
};
