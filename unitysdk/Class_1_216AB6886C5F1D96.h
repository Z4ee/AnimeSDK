#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OnHitAnimType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_216AB6886C5F1D96__CTOR_OFFSET UNITYSDK_OFFSET(0x154FD1D0)

inline static constexpr unsigned int Class_1_216AB6886C5F1D96_TypeDefinitionIndex = 56121;

class Class_1_216AB6886C5F1D96 : public ::System::Object
{
public:
	::RPG::GameCore::OnHitAnimType GMPGDEINODK; // 0x10
	::System::Single AHHLEOHHJLB; // 0x14
	::System::Int32 JDILJDFJBMM; // 0x18
	::System::Int32 CJCCLNEDGKB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216AB6886C5F1D96__CTOR_OFFSET))(this);
	}
};
