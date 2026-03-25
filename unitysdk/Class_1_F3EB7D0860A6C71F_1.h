#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3EB7D0860A6C71F_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A6BAC0)
#define CLASS_1_F3EB7D0860A6C71F_1_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x8A6B8B0)
#define CLASS_1_F3EB7D0860A6C71F_1_METHOD_1_7E97FE7B356A7427_OFFSET UNITYSDK_OFFSET(0x8A6BB70)
#define CLASS_1_F3EB7D0860A6C71F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6BBF0)

inline static constexpr unsigned int Class_1_F3EB7D0860A6C71F_1_TypeDefinitionIndex = 49852;

class Class_1_F3EB7D0860A6C71F_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1B7044A592B17773_2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_1_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_1_DISPOSE_OFFSET))(this);
	}

	::Class_1_1B7044A592B17773_2* Method_1_7E97FE7B356A7427(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773_2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_1_METHOD_1_7E97FE7B356A7427_OFFSET))(this, a1);
	}
};
