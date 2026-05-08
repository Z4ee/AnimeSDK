#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GizmosArea.h"

namespace System { class String; }

#define GIZMOSAREACREATEPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x12470650)

inline static constexpr unsigned int GizmosAreaCreatePoints_TypeDefinitionIndex = 42271;

class GizmosAreaCreatePoints : public ::GizmosArea
{
public:
	::System::Single m_XSpacing; // 0x48
	::System::Single m_ZSpacing; // 0x4C
	::System::String* m_PrefixName; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIZMOSAREACREATEPOINTS__CTOR_OFFSET))(this);
	}
};
