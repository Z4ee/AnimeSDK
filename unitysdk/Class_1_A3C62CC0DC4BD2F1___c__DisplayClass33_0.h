#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class Face; }

#define CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1394E630)
#define CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS33_0__GETFACE_B__0_OFFSET UNITYSDK_OFFSET(0x1394E770)

inline static constexpr unsigned int Class_1_A3C62CC0DC4BD2F1___c__DisplayClass33_0_TypeDefinitionIndex = 69715;

class Class_1_A3C62CC0DC4BD2F1___c__DisplayClass33_0 : public ::System::Object
{
public:
	::System::UInt32 faceIndex; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetFace_b__0(::RPG::Client::NavMap::FiveDim::Face* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS33_0__GETFACE_B__0_OFFSET))(this, a1);
	}
};
