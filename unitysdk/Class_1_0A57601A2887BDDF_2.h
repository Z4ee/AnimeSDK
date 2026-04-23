#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F7DEA1B9C573501;

#define CLASS_1_0A57601A2887BDDF_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EC95B0)
#define CLASS_1_0A57601A2887BDDF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC9610)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_2_TypeDefinitionIndex = 39319;

class Class_1_0A57601A2887BDDF_2 : public ::System::Object
{
public:
	::Class_1_1F7DEA1B9C573501* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_2_CLEAR_OFFSET))(this);
	}
};
