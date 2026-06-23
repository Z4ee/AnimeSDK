#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_1_3F750E5E135E93C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123952A0)
#define CLASS_1_3F750E5E135E93C6_METHOD_1_0828F0296CA13D64_OFFSET UNITYSDK_OFFSET(0x12395530)
#define CLASS_1_3F750E5E135E93C6_METHOD_1_2744DA7488AB82BF_OFFSET UNITYSDK_OFFSET(0x12395F70)
#define CLASS_1_3F750E5E135E93C6_METHOD_1_A218851BAC83D92F_OFFSET UNITYSDK_OFFSET(0x123960A0)
#define CLASS_1_3F750E5E135E93C6_METHOD_1_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x12395580)
#define CLASS_1_3F750E5E135E93C6__CTOR_OFFSET UNITYSDK_OFFSET(0x12395520)

inline static constexpr unsigned int Class_1_3F750E5E135E93C6_TypeDefinitionIndex = 85372;

class Class_1_3F750E5E135E93C6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xFFFFFFFF; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Foundation::Unreal::FGameplayTagContainer Field_1_4; // 0x10
	::System::Int32 Field_1_5; // 0x80
	::System::Int32 Field_1_3; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F750E5E135E93C6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F750E5E135E93C6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0828F0296CA13D64(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_3F750E5E135E93C6_METHOD_1_0828F0296CA13D64_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2744DA7488AB82BF(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_1_3F750E5E135E93C6_METHOD_1_2744DA7488AB82BF_OFFSET))(this, a1);
	}

	static ::Class_1_3F750E5E135E93C6* Method_1_A218851BAC83D92F()
	{
		return ((::Class_1_3F750E5E135E93C6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F750E5E135E93C6_METHOD_1_A218851BAC83D92F_OFFSET))();
	}

	::System::Void Method_1_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F750E5E135E93C6_METHOD_1_B76CD5CB3E297DF3_OFFSET))(this);
	}
};
