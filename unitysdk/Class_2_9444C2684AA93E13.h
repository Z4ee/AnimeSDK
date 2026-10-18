#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCC6EC14575D7215.h"

class Class_0_16E4307DCC419505_114;
class Class_0_16E4307DCC419505_127;
class Class_0_16E4307DCC419505_1488;
class Class_0_16E4307DCC419505_1493;
class Class_1_08228315FBA10BA4;
class Class_1_1294FEF8E985635C;
class Class_1_45CA56C59C8BBBC0;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_2_9444C2684AA93E13_METHOD_2_A11418B0D1895A4A_OFFSET UNITYSDK_OFFSET(0xB9AE520)
#define CLASS_2_9444C2684AA93E13__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AE4D0)
#define CLASS_2_9444C2684AA93E13___SUBMITIMPL_B__5_0_OFFSET UNITYSDK_OFFSET(0xB9AE810)

inline static constexpr unsigned int Class_2_9444C2684AA93E13_TypeDefinitionIndex = 79583;

class Class_2_9444C2684AA93E13 : public ::Class_1_BCC6EC14575D7215
{
public:
	::Class_0_16E4307DCC419505_1493* AFONPMCCIEL; // 0x68
	::Class_0_16E4307DCC419505_1488* MPFFGNPIDOA; // 0x70
	::Class_0_16E4307DCC419505_114* IGFAMLHNLPL; // 0x78

	::System::Void _ctor(::Class_0_16E4307DCC419505_1493* a1, ::Class_0_16E4307DCC419505_1488* a2, ::Class_1_45CA56C59C8BBBC0* a3, ::Class_0_16E4307DCC419505_114* a4, ::Class_0_16E4307DCC419505_127* a5, ::Class_1_1294FEF8E985635C* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1493*, ::Class_0_16E4307DCC419505_1488*, ::Class_1_45CA56C59C8BBBC0*, ::Class_0_16E4307DCC419505_114*, ::Class_0_16E4307DCC419505_127*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_2_9444C2684AA93E13__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_2_A11418B0D1895A4A()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9444C2684AA93E13_METHOD_2_A11418B0D1895A4A_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* __SubmitImpl_b__5_0(::Class_1_08228315FBA10BA4* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::Class_1_08228315FBA10BA4*))((::PBYTE)hIl2Cpp + CLASS_2_9444C2684AA93E13___SUBMITIMPL_B__5_0_OFFSET))(this, a1);
	}
};
