#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_98CC9643C32C6170;
class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF;
class Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x124544C0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D__CTOR_OFFSET UNITYSDK_OFFSET(0x124544B0)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_8F12D9B476B6889D_TypeDefinitionIndex = 66448;

class Class_2_98CC9643C32C6170_Class_1_8F12D9B476B6889D : public ::System::Object
{
public:
	::System::Action_1<::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*>* Field_1_4; // 0x10
	::Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF* Field_1_0; // 0x18
	::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* Field_1_2; // 0x20
	::System::Action_1<::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*>* Field_1_5; // 0x28
	::Class_2_98CC9643C32C6170* Field_1_3; // 0x30
	::System::Single Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
