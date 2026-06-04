#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B436617F93D1E3D;

#define CLASS_1_0A57601A2887BDDF_4_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D30310)
#define CLASS_1_0A57601A2887BDDF_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18D30370)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_4_TypeDefinitionIndex = 39931;

class Class_1_0A57601A2887BDDF_4 : public ::System::Object
{
public:
	::Class_1_9B436617F93D1E3D* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_4_CLEAR_OFFSET))(this);
	}
};
