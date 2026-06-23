#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_91322E66F4CC7ECA.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_286;
namespace MoleMole { class MonoRenderHandler; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_11A6C6850BA04D5F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12CAF800)
#define CLASS_1_11A6C6850BA04D5F__CTOR_OFFSET UNITYSDK_OFFSET(0x12CAF7F0)

inline static constexpr unsigned int Class_1_11A6C6850BA04D5F_TypeDefinitionIndex = 43380;

class Class_1_11A6C6850BA04D5F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_286* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_1; // 0x18
	::MoleMole::MonoRenderHandler* Field_1_6; // 0x20
	::MoleMole::CharacterCameraDitheringData Field_1_7; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x70
	::System::Boolean Field_1_2; // 0x7C
	::System::Boolean Field_1_9; // 0x7D
	::System::Boolean Field_1_8; // 0x7E
	::System::Single Field_1_4; // 0x80
	::Enum_3_91322E66F4CC7ECA Field_1_10; // 0x84
	::System::Single Field_1_5; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A6C6850BA04D5F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A6C6850BA04D5F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
