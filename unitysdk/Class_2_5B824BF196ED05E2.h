#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"

class Class_0_16E4307DCC419505_631;
class Class_1_D8203AFB32E9259C;

#define CLASS_2_5B824BF196ED05E2_CLEAR_OFFSET UNITYSDK_OFFSET(0x15833890)
#define CLASS_2_5B824BF196ED05E2_METHOD_2_18BDBC060936A743_OFFSET UNITYSDK_OFFSET(0x158337E0)
#define CLASS_2_5B824BF196ED05E2__CTOR_OFFSET UNITYSDK_OFFSET(0x15833910)

inline static constexpr unsigned int Class_2_5B824BF196ED05E2_TypeDefinitionIndex = 54243;

class Class_2_5B824BF196ED05E2 : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::Class_1_D8203AFB32E9259C* IJGAPCNDIAG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B824BF196ED05E2__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_2_18BDBC060936A743(::Class_0_16E4307DCC419505_631* a1, ::Class_1_D8203AFB32E9259C* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_631*, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_2_5B824BF196ED05E2_METHOD_2_18BDBC060936A743_OFFSET))(a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B824BF196ED05E2_CLEAR_OFFSET))(this);
	}
};
