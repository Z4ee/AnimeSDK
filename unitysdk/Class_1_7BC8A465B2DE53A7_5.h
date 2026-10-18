#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_114;
class Class_0_16E4307DCC419505_1526;
class Class_1_6526EDA44F8A6866;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7BC8A465B2DE53A7_5_METHOD_1_B6E35259FE057D80_OFFSET UNITYSDK_OFFSET(0xBAD8E00)
#define CLASS_1_7BC8A465B2DE53A7_5_METHOD_1_F97ED5C8097573CC_OFFSET UNITYSDK_OFFSET(0xBAD8D50)
#define CLASS_1_7BC8A465B2DE53A7_5__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD8D40)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_5_TypeDefinitionIndex = 80112;

class Class_1_7BC8A465B2DE53A7_5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1526* CEFLLELKFOP; // 0x10
	::Class_1_6526EDA44F8A6866* OMLAHOMDEID; // 0x18

	::System::Void _ctor(::Class_1_6526EDA44F8A6866* a1, ::Class_0_16E4307DCC419505_1526* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6526EDA44F8A6866*, ::Class_0_16E4307DCC419505_1526*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_F97ED5C8097573CC()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_5_METHOD_1_F97ED5C8097573CC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_114* Method_1_B6E35259FE057D80(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_114*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_5_METHOD_1_B6E35259FE057D80_OFFSET))(this, a1);
	}
};
