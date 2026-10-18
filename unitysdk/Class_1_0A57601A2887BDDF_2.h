#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB93BA65C1FA482A;

#define CLASS_1_0A57601A2887BDDF_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA73BF0)
#define CLASS_1_0A57601A2887BDDF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73C50)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_2_TypeDefinitionIndex = 43568;

class Class_1_0A57601A2887BDDF_2 : public ::System::Object
{
public:
	::Class_1_CB93BA65C1FA482A* NNANJMDMAOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_2_CLEAR_OFFSET))(this);
	}
};
