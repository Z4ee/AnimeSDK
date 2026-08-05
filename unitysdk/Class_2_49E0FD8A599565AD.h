#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_1_9B11BDAD3713D22C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_49E0FD8A599565AD_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x13615E30)
#define CLASS_2_49E0FD8A599565AD_METHOD_2_AD9774126CCF5C5C_OFFSET UNITYSDK_OFFSET(0x13665B70)
#define CLASS_2_49E0FD8A599565AD__CTOR_OFFSET UNITYSDK_OFFSET(0x13615D90)

inline static constexpr unsigned int Class_2_49E0FD8A599565AD_TypeDefinitionIndex = 25864;

class Class_2_49E0FD8A599565AD : public ::Foundation::Singleton_1<::Class_2_49E0FD8A599565AD*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_9B11BDAD3713D22C*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49E0FD8A599565AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49E0FD8A599565AD_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Boolean Method_2_AD9774126CCF5C5C(::System::UInt16 a1, ::Class_1_9B11BDAD3713D22C*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::Class_1_9B11BDAD3713D22C*&))((::PBYTE)hIl2Cpp + CLASS_2_49E0FD8A599565AD_METHOD_2_AD9774126CCF5C5C_OFFSET))(this, a1, a2);
	}
};
