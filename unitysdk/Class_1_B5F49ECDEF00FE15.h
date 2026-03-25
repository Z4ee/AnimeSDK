#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CB66EAA8C4DE7F9;
class Class_1_4CF8088A158DCE25_64;
class Class_1_5FEFAED860528596_64;
class Class_1_DCE302F7FD05DE84_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0x10603BA0)
#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_397DC5BF8C3B8571_OFFSET UNITYSDK_OFFSET(0x106035F0)
#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0x10603840)
#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x10603FB0)
#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x106040E0)
#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x10603510)
#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x106041D0)
#define CLASS_1_B5F49ECDEF00FE15_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x106039C0)
#define CLASS_1_B5F49ECDEF00FE15__CTOR_OFFSET UNITYSDK_OFFSET(0x10604230)

inline static constexpr unsigned int Class_1_B5F49ECDEF00FE15_TypeDefinitionIndex = 50215;

class Class_1_B5F49ECDEF00FE15 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4CF8088A158DCE25_64*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_397DC5BF8C3B8571(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_397DC5BF8C3B8571_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_3CB66EAA8C4DE7F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_5FEFAED860528596_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_64*))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_DCE302F7FD05DE84_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_2*))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5F49ECDEF00FE15_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}
};
