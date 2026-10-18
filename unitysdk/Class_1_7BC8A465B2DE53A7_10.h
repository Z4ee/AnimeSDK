#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1534;
class Class_0_16E4307DCC419505_154;
class Class_1_6526EDA44F8A6866;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7BC8A465B2DE53A7_10_METHOD_1_76BC5C4B914F2482_OFFSET UNITYSDK_OFFSET(0xBB6DA40)
#define CLASS_1_7BC8A465B2DE53A7_10_METHOD_1_C2A2949DC9554D5B_OFFSET UNITYSDK_OFFSET(0xBB6D980)
#define CLASS_1_7BC8A465B2DE53A7_10__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6D970)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_10_TypeDefinitionIndex = 80160;

class Class_1_7BC8A465B2DE53A7_10 : public ::System::Object
{
public:
	::Class_1_6526EDA44F8A6866* OMLAHOMDEID; // 0x10
	::Class_0_16E4307DCC419505_1534* CEFLLELKFOP; // 0x18

	::System::Void _ctor(::Class_1_6526EDA44F8A6866* a1, ::Class_0_16E4307DCC419505_1534* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6526EDA44F8A6866*, ::Class_0_16E4307DCC419505_1534*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_10__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_154* Method_1_C2A2949DC9554D5B(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_154*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_10_METHOD_1_C2A2949DC9554D5B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_154*>* Method_1_76BC5C4B914F2482()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_154*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_10_METHOD_1_76BC5C4B914F2482_OFFSET))(this);
	}
};
