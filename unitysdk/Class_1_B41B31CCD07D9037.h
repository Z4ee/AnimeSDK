#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_B41B31CCD07D9037__CTOR_OFFSET UNITYSDK_OFFSET(0x1C514EE0)

inline static constexpr unsigned int Class_1_B41B31CCD07D9037_TypeDefinitionIndex = 42144;

class Class_1_B41B31CCD07D9037 : public ::System::Object
{
public:
	::System::Object* AKEHPNKLMEK; // 0x10
	::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x18
	::UnityEngine::Vector3Int GOOAMHHLHPJ; // 0x1C
	::RPG::MVector3 LJDHGFECMHJ; // 0x28
	::System::Int32 AHGIENEMKFI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41B31CCD07D9037__CTOR_OFFSET))(this);
	}
};
