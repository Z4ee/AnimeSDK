#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8F93E829E5E147B6__CTOR_OFFSET UNITYSDK_OFFSET(0xBE75E00)

inline static constexpr unsigned int Class_1_8F93E829E5E147B6_TypeDefinitionIndex = 82055;

class Class_1_8F93E829E5E147B6 : public ::System::Object
{
public:
	::System::Boolean GDBPKGCLAPF; // 0x10
	::RPG::Client::TextID POFLNFDFEKB; // 0x18
	::System::Int32 GBJLLAJJEOL; // 0x28
	::System::Int32 MNAKIEOGPDK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F93E829E5E147B6__CTOR_OFFSET))(this);
	}
};
