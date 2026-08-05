#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONArray; }

#define CLASS_4_21328B78EDFE64DD_CLASS_1_992151BD48F7139D_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x119C96E0)
#define CLASS_4_21328B78EDFE64DD_CLASS_1_992151BD48F7139D__CTOR_OFFSET UNITYSDK_OFFSET(0x119C9910)

inline static constexpr unsigned int Class_4_21328B78EDFE64DD_Class_1_992151BD48F7139D_TypeDefinitionIndex = 80891;

class Class_4_21328B78EDFE64DD_Class_1_992151BD48F7139D : public ::System::Object
{
public:
	::SimpleJSON::JSONArray* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_21328B78EDFE64DD_CLASS_1_992151BD48F7139D__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_4_21328B78EDFE64DD_CLASS_1_992151BD48F7139D_ONVISITONE_OFFSET))(this, a1);
	}
};
