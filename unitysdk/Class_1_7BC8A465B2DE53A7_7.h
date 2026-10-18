#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1530;
class Class_0_16E4307DCC419505_157;
class Class_1_6526EDA44F8A6866;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7BC8A465B2DE53A7_7_METHOD_1_B6E35259FE057D80_OFFSET UNITYSDK_OFFSET(0x155A5330)
#define CLASS_1_7BC8A465B2DE53A7_7_METHOD_1_F97ED5C8097573CC_OFFSET UNITYSDK_OFFSET(0x155A5280)
#define CLASS_1_7BC8A465B2DE53A7_7__CTOR_OFFSET UNITYSDK_OFFSET(0x155A5270)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_7_TypeDefinitionIndex = 80135;

class Class_1_7BC8A465B2DE53A7_7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1530* CEFLLELKFOP; // 0x10
	::Class_1_6526EDA44F8A6866* OMLAHOMDEID; // 0x18

	::System::Void _ctor(::Class_1_6526EDA44F8A6866* a1, ::Class_0_16E4307DCC419505_1530* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6526EDA44F8A6866*, ::Class_0_16E4307DCC419505_1530*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_F97ED5C8097573CC()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_7_METHOD_1_F97ED5C8097573CC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_157* Method_1_B6E35259FE057D80(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_157*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_7_METHOD_1_B6E35259FE057D80_OFFSET))(this, a1);
	}
};
