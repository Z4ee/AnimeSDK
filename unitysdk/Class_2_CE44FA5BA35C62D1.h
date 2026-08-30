#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_32.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LittleGameEvent; }

#define CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C38B880)
#define CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38B900)

inline static constexpr unsigned int Class_2_CE44FA5BA35C62D1_TypeDefinitionIndex = 41904;

class Class_2_CE44FA5BA35C62D1 : public ::Class_1_43BD383C98B4C0C5_32
{
public:
	::RPG::GameCore::LittleGameEvent* BHDGCIJPCFN; // 0x10
	::System::Single IDKONBFPBLH; // 0x18
	::System::Single GCJMFBKLGHI; // 0x1C
	::System::Boolean ICEIIAHGPFJ; // 0x20
	::System::UInt32 CEIFACBCNKE; // 0x24
	::System::Single MLKDPKEGIML; // 0x28
	::UnityEngine::Vector3 HOHFMIBLDJJ; // 0x2C
	::System::Single DPKMOFJOHKB; // 0x38
	::UnityEngine::Vector3 AJHKIJLGLOH; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET))(this);
	}
};
