#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
class Class_0_16E4307DCC419505_135;
class Class_1_16C4955EF2FA3814;
class Class_1_872D17A60BBE5EB3;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_E2972620852557B7_1_METHOD_1_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x15D86490)
#define CLASS_1_E2972620852557B7_1_METHOD_1_A7771654C42BD6B0_OFFSET UNITYSDK_OFFSET(0x15D86240)
#define CLASS_1_E2972620852557B7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D86230)

inline static constexpr unsigned int Class_1_E2972620852557B7_1_TypeDefinitionIndex = 80218;

class Class_1_E2972620852557B7_1 : public ::System::Object
{
public:
	::Class_1_16C4955EF2FA3814* GKPHGLBPCKD; // 0x10
	::Class_1_872D17A60BBE5EB3* DOIMIHLLDGH; // 0x18
	::Class_0_16E4307DCC419505_135* GFFCANAAGOJ; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_135* a1, ::Class_1_16C4955EF2FA3814* a2, ::Class_1_872D17A60BBE5EB3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*, ::Class_1_16C4955EF2FA3814*, ::Class_1_872D17A60BBE5EB3*))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_134*>* Method_1_A7771654C42BD6B0(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_134*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_1_METHOD_1_A7771654C42BD6B0_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_1_METHOD_1_4628F59881B23161_OFFSET))(this);
	}
};
