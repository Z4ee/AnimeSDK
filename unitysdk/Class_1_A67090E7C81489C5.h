#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A67090E7C81489C5__CTOR_OFFSET UNITYSDK_OFFSET(0x18526AF0)

inline static constexpr unsigned int Class_1_A67090E7C81489C5_TypeDefinitionIndex = 80720;

class Class_1_A67090E7C81489C5 : public ::System::Object
{
public:
	::System::Boolean MMKEDDICDHK; // 0x10
	::RPG::Client::TextID IFNMFPACLKL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67090E7C81489C5__CTOR_OFFSET))(this);
	}
};
