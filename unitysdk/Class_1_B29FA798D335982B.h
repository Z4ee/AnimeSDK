#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A865FEC42C70DCB5.h"
#include "unitysdk/System/Object.h"

class Class_1_519C6226D9800491;
class Class_1_D375C91CCE5D3999;
class Class_2_604149159BD159AA;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B29FA798D335982B_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x1150CB50)
#define CLASS_1_B29FA798D335982B_METHOD_1_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0x1150CD60)
#define CLASS_1_B29FA798D335982B_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1150BC60)
#define CLASS_1_B29FA798D335982B_METHOD_1_76C14174E094F341_OFFSET UNITYSDK_OFFSET(0x1150C7A0)
#define CLASS_1_B29FA798D335982B_METHOD_1_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0x1150C9D0)
#define CLASS_1_B29FA798D335982B__CTOR_OFFSET UNITYSDK_OFFSET(0x1150BBC0)

inline static constexpr unsigned int Class_1_B29FA798D335982B_TypeDefinitionIndex = 68869;

class Class_1_B29FA798D335982B : public ::System::Object
{
public:
	::Class_2_604149159BD159AA* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_A865FEC42C70DCB5, ::System::Action_1<::Class_1_D375C91CCE5D3999*>*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_A865FEC42C70DCB5, ::Class_1_519C6226D9800491*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_604149159BD159AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_604149159BD159AA*))((::PBYTE)hIl2Cpp + CLASS_1_B29FA798D335982B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_76C14174E094F341(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_B29FA798D335982B_METHOD_1_76C14174E094F341_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F20D9555862CF22(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_B29FA798D335982B_METHOD_1_7F20D9555862CF22_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B29FA798D335982B_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_1_390623AF74E8C979(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_B29FA798D335982B_METHOD_1_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B29FA798D335982B_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
