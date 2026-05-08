#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82F1E9B6EF1BCA84_Class_1_DF3984ACD9BFBD00;
class Class_1_8C4EEDCDF27EDEA0;
class Class_2_44A4A8D0EA003DD8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82F1E9B6EF1BCA84_METHOD_1_2B5F840B32CF1A44_OFFSET UNITYSDK_OFFSET(0x129593B0)
#define CLASS_1_82F1E9B6EF1BCA84_METHOD_1_4487EB59871B4D67_OFFSET UNITYSDK_OFFSET(0x12959250)
#define CLASS_1_82F1E9B6EF1BCA84__CTOR_OFFSET UNITYSDK_OFFSET(0x129591D0)

inline static constexpr unsigned int Class_1_82F1E9B6EF1BCA84_TypeDefinitionIndex = 80896;

class Class_1_82F1E9B6EF1BCA84 : public ::System::Object
{
public:
	::Class_1_8C4EEDCDF27EDEA0* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_82F1E9B6EF1BCA84_Class_1_DF3984ACD9BFBD00*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_8C4EEDCDF27EDEA0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C4EEDCDF27EDEA0*))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4487EB59871B4D67(::Class_2_44A4A8D0EA003DD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_44A4A8D0EA003DD8*))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84_METHOD_1_4487EB59871B4D67_OFFSET))(this, a1);
	}

	static ::Class_1_82F1E9B6EF1BCA84* Method_1_2B5F840B32CF1A44(::Class_2_44A4A8D0EA003DD8* a1)
	{
		return ((::Class_1_82F1E9B6EF1BCA84*(*)(::Class_2_44A4A8D0EA003DD8*))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84_METHOD_1_2B5F840B32CF1A44_OFFSET))(a1);
	}
};
