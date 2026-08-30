#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace System { class String; }

#define CLASS_1_493005553AE6AC4E_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1C4FCCA0)
#define CLASS_1_493005553AE6AC4E_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1C4FCC60)
#define CLASS_1_493005553AE6AC4E_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1C4FCC20)
#define CLASS_1_493005553AE6AC4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FCD10)

inline static constexpr unsigned int Class_1_493005553AE6AC4E_TypeDefinitionIndex = 41753;

class Class_1_493005553AE6AC4E : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameEntityPreset* ELILFEPKLCJ; // 0x10
	::Struct_2_A725E4562D03EA4E BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_493005553AE6AC4E__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_493005553AE6AC4E_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_493005553AE6AC4E_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_493005553AE6AC4E_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
