#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_1E5246F77F141C2A_METHOD_1_A457149E7F33CAA8_OFFSET UNITYSDK_OFFSET(0x1255D2D0)
#define CLASS_1_1E5246F77F141C2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1255D600)

inline static constexpr unsigned int Class_1_1E5246F77F141C2A_TypeDefinitionIndex = 60942;

class Class_1_1E5246F77F141C2A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E5246F77F141C2A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A457149E7F33CAA8(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_1E5246F77F141C2A_METHOD_1_A457149E7F33CAA8_OFFSET))(this, a1);
	}
};
