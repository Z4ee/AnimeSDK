#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_150;
class Class_2_230F5EDDB35DAEBA;
class Class_2_8D31566281692B25;
class Class_3_CD59F26A5F0E803D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0744B77B3650F091_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB453E00)
#define CLASS_1_0744B77B3650F091__CTOR_OFFSET UNITYSDK_OFFSET(0xB453D50)

inline static constexpr unsigned int Class_1_0744B77B3650F091_TypeDefinitionIndex = 75514;

class Class_1_0744B77B3650F091 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_230F5EDDB35DAEBA*>* ANKHLHPPJKP; // 0x10
	::Class_2_8D31566281692B25* EEFMDEHLLFI; // 0x18
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_150*>* LKNIHOLPBEP; // 0x28
	::System::Collections::Generic::List_1<::Class_2_230F5EDDB35DAEBA*>* MIOCFEDKPLK; // 0x30

	::System::Void _ctor(::Class_2_8D31566281692B25* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8D31566281692B25*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_0744B77B3650F091__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0744B77B3650F091_EXECUTE_OFFSET))(this);
	}
};
