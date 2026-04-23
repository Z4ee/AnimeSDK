#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB93BA65C1FA482A;

#define CLASS_1_0A57601A2887BDDF_9_CLEAR_OFFSET UNITYSDK_OFFSET(0x180B28D0)
#define CLASS_1_0A57601A2887BDDF_9__CTOR_OFFSET UNITYSDK_OFFSET(0x180B2930)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_9_TypeDefinitionIndex = 39382;

class Class_1_0A57601A2887BDDF_9 : public ::System::Object
{
public:
	::Class_1_CB93BA65C1FA482A* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_9_CLEAR_OFFSET))(this);
	}
};
