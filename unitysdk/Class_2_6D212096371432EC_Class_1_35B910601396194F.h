#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_00AE5965E4B9C06A_Class_1_9BE993166B508A2A_Struct_2_318F939E5295DF93.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_6D212096371432EC;

#define CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x17CF2E70)
#define CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF2E60)

inline static constexpr unsigned int Class_2_6D212096371432EC_Class_1_35B910601396194F_TypeDefinitionIndex = 73467;

class Class_2_6D212096371432EC_Class_1_35B910601396194F : public ::System::Object
{
public:
	::Class_2_00AE5965E4B9C06A_Class_1_9BE993166B508A2A_Struct_2_318F939E5295DF93 Field_1_0; // 0x10
	::Class_2_6D212096371432EC* Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
