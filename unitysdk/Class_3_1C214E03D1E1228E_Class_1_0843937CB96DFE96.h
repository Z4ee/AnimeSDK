#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_F87390FACCD0D2C6_1;

#define CLASS_3_1C214E03D1E1228E_CLASS_1_0843937CB96DFE96_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x14533150)
#define CLASS_3_1C214E03D1E1228E_CLASS_1_0843937CB96DFE96__CTOR_OFFSET UNITYSDK_OFFSET(0x14533140)

inline static constexpr unsigned int Class_3_1C214E03D1E1228E_Class_1_0843937CB96DFE96_TypeDefinitionIndex = 69362;

class Class_3_1C214E03D1E1228E_Class_1_0843937CB96DFE96 : public ::System::Object
{
public:
	::Class_2_F87390FACCD0D2C6_1* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E_CLASS_1_0843937CB96DFE96__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E_CLASS_1_0843937CB96DFE96_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
