#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB93BA65C1FA482A;

#define CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D41860)
#define CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18D418C0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_5_TypeDefinitionIndex = 40153;

class Class_1_0A57601A2887BDDF_5 : public ::System::Object
{
public:
	::Class_1_CB93BA65C1FA482A* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET))(this);
	}
};
