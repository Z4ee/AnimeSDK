#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_8A7E6FB90F5A287E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_3407002B0BC6E5ED;

#define CLASS_2_3407002B0BC6E5ED_CLASS_1_ED0ACFE0902D3ACE_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x147C6780)
#define CLASS_2_3407002B0BC6E5ED_CLASS_1_ED0ACFE0902D3ACE__CTOR_OFFSET UNITYSDK_OFFSET(0x147C6770)

inline static constexpr unsigned int Class_2_3407002B0BC6E5ED_Class_1_ED0ACFE0902D3ACE_TypeDefinitionIndex = 58857;

class Class_2_3407002B0BC6E5ED_Class_1_ED0ACFE0902D3ACE : public ::System::Object
{
public:
	::Class_2_3407002B0BC6E5ED* Field_1_0; // 0x10
	::Struct_2_8A7E6FB90F5A287E Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED_CLASS_1_ED0ACFE0902D3ACE__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED_CLASS_1_ED0ACFE0902D3ACE_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
