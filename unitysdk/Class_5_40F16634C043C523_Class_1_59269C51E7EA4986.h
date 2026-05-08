#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_5_40F16634C043C523;

#define CLASS_5_40F16634C043C523_CLASS_1_59269C51E7EA4986_METHOD_1_117B6C86B0F4C97C_OFFSET UNITYSDK_OFFSET(0x17864360)
#define CLASS_5_40F16634C043C523_CLASS_1_59269C51E7EA4986__CTOR_OFFSET UNITYSDK_OFFSET(0x17864350)

inline static constexpr unsigned int Class_5_40F16634C043C523_Class_1_59269C51E7EA4986_TypeDefinitionIndex = 44675;

class Class_5_40F16634C043C523_Class_1_59269C51E7EA4986 : public ::System::Object
{
public:
	::System::Threading::CancellationToken Field_1_3; // 0x10
	::Class_5_40F16634C043C523* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::Enum_3_982178F761E7F1DC Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_CLASS_1_59269C51E7EA4986__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_117B6C86B0F4C97C()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_CLASS_1_59269C51E7EA4986_METHOD_1_117B6C86B0F4C97C_OFFSET))(this);
	}
};
