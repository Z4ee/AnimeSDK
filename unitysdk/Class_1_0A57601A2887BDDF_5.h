#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB93BA65C1FA482A;

#define CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4FF9F0)
#define CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FFA50)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_5_TypeDefinitionIndex = 41926;

class Class_1_0A57601A2887BDDF_5 : public ::System::Object
{
public:
	::Class_1_CB93BA65C1FA482A* NNANJMDMAOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET))(this);
	}
};
