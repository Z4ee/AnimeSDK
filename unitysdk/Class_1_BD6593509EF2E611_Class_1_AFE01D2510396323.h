#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_1_ADDC23591029E232_Class_1_4E271783D45CB8C7;

#define CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x1559C5C0)
#define CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1559C5B0)
#define CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323__CTOR_OFFSET UNITYSDK_OFFSET(0x1559C5A0)

inline static constexpr unsigned int Class_1_BD6593509EF2E611_Class_1_AFE01D2510396323_TypeDefinitionIndex = 45325;

class Class_1_BD6593509EF2E611_Class_1_AFE01D2510396323 : public ::System::Object
{
public:
	::Class_1_ADDC23591029E232_Class_1_4E271783D45CB8C7* Field_1_2; // 0x10
	::Class_1_3002D7CF5FEE9D3A* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
