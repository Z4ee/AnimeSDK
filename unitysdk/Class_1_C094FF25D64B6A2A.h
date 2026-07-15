#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C094FF25D64B6A2A_METHOD_1_9A940AE0D4CA56C8_OFFSET UNITYSDK_OFFSET(0x1BF40900)
#define CLASS_1_C094FF25D64B6A2A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BF40A80)
#define CLASS_1_C094FF25D64B6A2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF40AF0)

inline static constexpr unsigned int Class_1_C094FF25D64B6A2A_TypeDefinitionIndex = 41114;

class Class_1_C094FF25D64B6A2A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Single Field_1_6; // 0x30
	::RPG::GameCore::ChenLingFesToastStyleType Field_1_7; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C094FF25D64B6A2A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A940AE0D4CA56C8(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::RPG::GameCore::ChenLingFesToastStyleType a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::RPG::GameCore::ChenLingFesToastStyleType, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C094FF25D64B6A2A_METHOD_1_9A940AE0D4CA56C8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C094FF25D64B6A2A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
