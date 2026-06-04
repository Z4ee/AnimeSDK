#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03EB5D6C771FDB13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3EB7D0860A6C71F_METHOD_1_7E97FE7B356A7427_OFFSET UNITYSDK_OFFSET(0xBF26260)
#define CLASS_1_F3EB7D0860A6C71F__CTOR_OFFSET UNITYSDK_OFFSET(0xBF26420)

inline static constexpr unsigned int Class_1_F3EB7D0860A6C71F_TypeDefinitionIndex = 57405;

class Class_1_F3EB7D0860A6C71F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_03EB5D6C771FDB13*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F__CTOR_OFFSET))(this);
	}

	::Class_1_03EB5D6C771FDB13* Method_1_7E97FE7B356A7427(::System::UInt32 a1)
	{
		return ((::Class_1_03EB5D6C771FDB13*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_METHOD_1_7E97FE7B356A7427_OFFSET))(this, a1);
	}
};
