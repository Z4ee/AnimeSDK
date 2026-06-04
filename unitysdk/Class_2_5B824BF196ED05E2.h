#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_4.h"

class Class_0_16E4307DCC419505_484;
class Class_1_D8203AFB32E9259C;

#define CLASS_2_5B824BF196ED05E2_CLEAR_OFFSET UNITYSDK_OFFSET(0x137A5CA0)
#define CLASS_2_5B824BF196ED05E2_METHOD_2_18BDBC060936A743_OFFSET UNITYSDK_OFFSET(0x137A5BF0)
#define CLASS_2_5B824BF196ED05E2__CTOR_OFFSET UNITYSDK_OFFSET(0x137A5D20)
#define CLASS_2_5B824BF196ED05E2___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x137A5D30)

inline static constexpr unsigned int Class_2_5B824BF196ED05E2_TypeDefinitionIndex = 50691;

class Class_2_5B824BF196ED05E2 : public ::Class_1_F9FBCC956DFCF137_4
{
public:
	::Class_1_D8203AFB32E9259C* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B824BF196ED05E2__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_2_18BDBC060936A743(::Class_0_16E4307DCC419505_484* a1, ::Class_1_D8203AFB32E9259C* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_484*, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_2_5B824BF196ED05E2_METHOD_2_18BDBC060936A743_OFFSET))(a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B824BF196ED05E2_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B824BF196ED05E2___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
