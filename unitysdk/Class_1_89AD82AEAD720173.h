#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/System/Object.h"

class Class_1_69C7B9DFD5B449A1;
class Class_1_F35D4DA7881CD768;

#define CLASS_1_89AD82AEAD720173_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C00570)
#define CLASS_1_89AD82AEAD720173_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18C00670)
#define CLASS_1_89AD82AEAD720173_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18C006E0)
#define CLASS_1_89AD82AEAD720173__CTOR_OFFSET UNITYSDK_OFFSET(0x18C00720)

inline static constexpr unsigned int Class_1_89AD82AEAD720173_TypeDefinitionIndex = 39892;

class Class_1_89AD82AEAD720173 : public ::System::Object
{
public:
	::Class_1_F35D4DA7881CD768* Field_1_0; // 0x10
	::Struct_2_CFA12135DA0D972E Field_1_1; // 0x18
	::Class_1_69C7B9DFD5B449A1* Field_1_2; // 0x28
	::Class_1_69C7B9DFD5B449A1* Field_1_3; // 0x30
	::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173_ONRECYCLE_OFFSET))(this);
	}
};
