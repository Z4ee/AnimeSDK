#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4F74EA22DA1A4BED_METHOD_1_6FCD431FDD57076E_OFFSET UNITYSDK_OFFSET(0x1A88EB00)
#define CLASS_1_4F74EA22DA1A4BED_METHOD_1_84FD67F3C79B65C4_OFFSET UNITYSDK_OFFSET(0x1A88EBB0)
#define CLASS_1_4F74EA22DA1A4BED_METHOD_1_9242614AAD60C721_OFFSET UNITYSDK_OFFSET(0x1A88EC90)
#define CLASS_1_4F74EA22DA1A4BED_METHOD_1_BEACA6E93BE692C0_OFFSET UNITYSDK_OFFSET(0x1A88EB50)
#define CLASS_1_4F74EA22DA1A4BED_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A88EAF0)
#define CLASS_1_4F74EA22DA1A4BED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A88ED90)

inline static constexpr unsigned int Class_1_4F74EA22DA1A4BED_TypeDefinitionIndex = 58746;

class Class_1_4F74EA22DA1A4BED : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_6FCD431FDD57076E(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED_METHOD_1_6FCD431FDD57076E_OFFSET))(this, a1);
	}

	::System::String* Method_1_BEACA6E93BE692C0(::Foundation::AssetPath a1)
	{
		return ((::System::String*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED_METHOD_1_BEACA6E93BE692C0_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> Method_1_84FD67F3C79B65C4(::System::String* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED_METHOD_1_84FD67F3C79B65C4_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> Method_1_9242614AAD60C721(::Foundation::AssetPath a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED_METHOD_1_9242614AAD60C721_OFFSET))(this, a1);
	}
};
