#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
class Class_0_16E4307DCC419505_1527;
class Class_1_6526EDA44F8A6866;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7BC8A465B2DE53A7_6_METHOD_1_300FA190EAA92566_OFFSET UNITYSDK_OFFSET(0xE22DDE0)
#define CLASS_1_7BC8A465B2DE53A7_6_METHOD_1_C2A2949DC9554D5B_OFFSET UNITYSDK_OFFSET(0xE22DD10)
#define CLASS_1_7BC8A465B2DE53A7_6__CTOR_OFFSET UNITYSDK_OFFSET(0xE22DD00)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_6_TypeDefinitionIndex = 80121;

class Class_1_7BC8A465B2DE53A7_6 : public ::System::Object
{
public:
	::Class_1_6526EDA44F8A6866* OMLAHOMDEID; // 0x10
	::Class_0_16E4307DCC419505_1527* CEFLLELKFOP; // 0x18

	::System::Void _ctor(::Class_1_6526EDA44F8A6866* a1, ::Class_0_16E4307DCC419505_1527* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6526EDA44F8A6866*, ::Class_0_16E4307DCC419505_1527*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_134* Method_1_C2A2949DC9554D5B(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_134*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6_METHOD_1_C2A2949DC9554D5B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_300FA190EAA92566()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6_METHOD_1_300FA190EAA92566_OFFSET))(this);
	}
};
