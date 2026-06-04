#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class Face; }

#define CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1394E700)
#define CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS34_0__GETFACEBYSURFACEID_B__0_OFFSET UNITYSDK_OFFSET(0x1394E790)

inline static constexpr unsigned int Class_1_A3C62CC0DC4BD2F1___c__DisplayClass34_0_TypeDefinitionIndex = 69716;

class Class_1_A3C62CC0DC4BD2F1___c__DisplayClass34_0 : public ::System::Object
{
public:
	::System::UInt32 surfaceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetFaceBySurfaceID_b__0(::RPG::Client::NavMap::FiveDim::Face* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1___C__DISPLAYCLASS34_0__GETFACEBYSURFACEID_B__0_OFFSET))(this, a1);
	}
};
