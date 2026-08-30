#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_666;
class Class_0_16E4307DCC419505_671;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F64EC1EAB25103FB_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0x17CBE120)
#define CLASS_1_F64EC1EAB25103FB_METHOD_1_9845EC1657B98E60_OFFSET UNITYSDK_OFFSET(0x17CBDE40)
#define CLASS_1_F64EC1EAB25103FB__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBDE30)

inline static constexpr unsigned int Class_1_F64EC1EAB25103FB_TypeDefinitionIndex = 64205;

class Class_1_F64EC1EAB25103FB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ANCPEILJFCB; // 0x10
	::Class_0_16E4307DCC419505_671* GNAOLDABNBB; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::Class_0_16E4307DCC419505_671* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::Class_0_16E4307DCC419505_671*))((::PBYTE)hIl2Cpp + CLASS_1_F64EC1EAB25103FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double Method_1_9845EC1657B98E60()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64EC1EAB25103FB_METHOD_1_9845EC1657B98E60_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_666* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_F64EC1EAB25103FB_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}
};
