#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBA0DB4687115F0A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_809340EB7C132B81_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8404A0)
#define CLASS_1_809340EB7C132B81_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0xA840540)
#define CLASS_1_809340EB7C132B81_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xA8405D0)
#define CLASS_1_809340EB7C132B81_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0xA840240)
#define CLASS_1_809340EB7C132B81__CTOR_OFFSET UNITYSDK_OFFSET(0xA840790)

inline static constexpr unsigned int Class_1_809340EB7C132B81_TypeDefinitionIndex = 59331;

class Class_1_809340EB7C132B81 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EBA0DB4687115F0A*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_809340EB7C132B81__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_809340EB7C132B81_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_809340EB7C132B81_DISPOSE_OFFSET))(this);
	}

	::Class_1_EBA0DB4687115F0A* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_EBA0DB4687115F0A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_809340EB7C132B81_METHOD_1_A917AC671DF6CB2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_809340EB7C132B81_METHOD_1_BD2F8ECECEAD4800_OFFSET))(this);
	}
};
