#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A67090E7C81489C5__CTOR_OFFSET UNITYSDK_OFFSET(0xC330E20)

inline static constexpr unsigned int Class_1_A67090E7C81489C5_TypeDefinitionIndex = 82049;

class Class_1_A67090E7C81489C5 : public ::System::Object
{
public:
	::RPG::Client::TextID IFNMFPACLKL; // 0x10
	::System::Boolean MMKEDDICDHK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67090E7C81489C5__CTOR_OFFSET))(this);
	}
};
