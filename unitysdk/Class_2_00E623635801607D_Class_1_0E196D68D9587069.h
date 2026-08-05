#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_A9B38335FDB64CC2;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_00E623635801607D_CLASS_1_0E196D68D9587069_METHOD_1_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x12A7B320)
#define CLASS_2_00E623635801607D_CLASS_1_0E196D68D9587069_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0x12A7B3A0)
#define CLASS_2_00E623635801607D_CLASS_1_0E196D68D9587069__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7B310)

inline static constexpr unsigned int Class_2_00E623635801607D_Class_1_0E196D68D9587069_TypeDefinitionIndex = 53479;

class Class_2_00E623635801607D_Class_1_0E196D68D9587069 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_1_27F786FF2A30778C<::Class_3_A9B38335FDB64CC2*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00E623635801607D_CLASS_1_0E196D68D9587069__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_00E623635801607D_CLASS_1_0E196D68D9587069_METHOD_1_A7FD041C3B0AC101_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_00E623635801607D_CLASS_1_0E196D68D9587069_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}
};
