#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace System { class Action; }

#define CLASS_1_D4B1B05403EFB954_CLASS_1_F3507D81BADE0B2E_METHOD_1_FE45F0BA0D7DCFD4_OFFSET UNITYSDK_OFFSET(0x193F5EC0)
#define CLASS_1_D4B1B05403EFB954_CLASS_1_F3507D81BADE0B2E__CTOR_OFFSET UNITYSDK_OFFSET(0x193F5AE0)

inline static constexpr unsigned int Class_1_D4B1B05403EFB954_Class_1_F3507D81BADE0B2E_TypeDefinitionIndex = 78914;

class Class_1_D4B1B05403EFB954_Class_1_F3507D81BADE0B2E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_CLASS_1_F3507D81BADE0B2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FE45F0BA0D7DCFD4(::MoleMole::CinemaSingleBeatMapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_CLASS_1_F3507D81BADE0B2E_METHOD_1_FE45F0BA0D7DCFD4_OFFSET))(this, a1);
	}
};
