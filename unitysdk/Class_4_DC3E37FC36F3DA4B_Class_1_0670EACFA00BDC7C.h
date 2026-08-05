#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

#define CLASS_4_DC3E37FC36F3DA4B_CLASS_1_0670EACFA00BDC7C_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x133C0D20)
#define CLASS_4_DC3E37FC36F3DA4B_CLASS_1_0670EACFA00BDC7C__CTOR_OFFSET UNITYSDK_OFFSET(0x133C0D70)

inline static constexpr unsigned int Class_4_DC3E37FC36F3DA4B_Class_1_0670EACFA00BDC7C_TypeDefinitionIndex = 49608;

class Class_4_DC3E37FC36F3DA4B_Class_1_0670EACFA00BDC7C : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTag Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC3E37FC36F3DA4B_CLASS_1_0670EACFA00BDC7C__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_4_DC3E37FC36F3DA4B_CLASS_1_0670EACFA00BDC7C_ONVISITONE_OFFSET))(this, a1);
	}
};
