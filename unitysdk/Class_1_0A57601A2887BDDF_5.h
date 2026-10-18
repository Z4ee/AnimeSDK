#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2619E79A8B632DAF;

#define CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9F6BE0)
#define CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F6C40)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_5_TypeDefinitionIndex = 43327;

class Class_1_0A57601A2887BDDF_5 : public ::System::Object
{
public:
	::Class_1_2619E79A8B632DAF* IECLHGKEMFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET))(this);
	}
};
