#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OnHitAnimType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_216AB6886C5F1D96__CTOR_OFFSET UNITYSDK_OFFSET(0x1237E3B0)

inline static constexpr unsigned int Class_1_216AB6886C5F1D96_TypeDefinitionIndex = 51586;

class Class_1_216AB6886C5F1D96 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::RPG::GameCore::OnHitAnimType Field_1_1; // 0x14
	::System::Single Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216AB6886C5F1D96__CTOR_OFFSET))(this);
	}
};
