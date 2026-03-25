#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GeometryEdit/Prism.h"

#define PRISMLAV__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBBBC0)

inline static constexpr unsigned int PrismLAV_TypeDefinitionIndex = 38217;

class PrismLAV : public ::GeometryEdit::Prism
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRISMLAV__CTOR_OFFSET))(this);
	}
};
