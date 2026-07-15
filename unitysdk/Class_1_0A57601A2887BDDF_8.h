#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2619E79A8B632DAF;

#define CLASS_1_0A57601A2887BDDF_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C581440)
#define CLASS_1_0A57601A2887BDDF_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5814A0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_8_TypeDefinitionIndex = 40733;

class Class_1_0A57601A2887BDDF_8 : public ::System::Object
{
public:
	::Class_1_2619E79A8B632DAF* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_8_CLEAR_OFFSET))(this);
	}
};
