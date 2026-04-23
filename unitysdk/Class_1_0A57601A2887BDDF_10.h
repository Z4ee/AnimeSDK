#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2619E79A8B632DAF;

#define CLASS_1_0A57601A2887BDDF_10_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E69460)
#define CLASS_1_0A57601A2887BDDF_10__CTOR_OFFSET UNITYSDK_OFFSET(0x17E694C0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_10_TypeDefinitionIndex = 39152;

class Class_1_0A57601A2887BDDF_10 : public ::System::Object
{
public:
	::Class_1_2619E79A8B632DAF* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_10__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_10_CLEAR_OFFSET))(this);
	}
};
