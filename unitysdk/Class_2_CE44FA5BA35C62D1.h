#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_32.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LittleGameEvent; }

#define CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BE2EEF0)
#define CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2EF60)

inline static constexpr unsigned int Class_2_CE44FA5BA35C62D1_TypeDefinitionIndex = 41904;

class Class_2_CE44FA5BA35C62D1 : public ::Class_1_43BD383C98B4C0C5_32
{
public:
	::RPG::GameCore::LittleGameEvent* BHDGCIJPCFN; // 0x10
	::UnityEngine::Vector3 AJHKIJLGLOH; // 0x18
	::System::Single MLKDPKEGIML; // 0x24
	::System::Boolean ICEIIAHGPFJ; // 0x28
	::System::Single GCJMFBKLGHI; // 0x2C
	::System::UInt32 CEIFACBCNKE; // 0x30
	::UnityEngine::Vector3 HOHFMIBLDJJ; // 0x34
	::System::Single IDKONBFPBLH; // 0x40
	::System::Single DPKMOFJOHKB; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET))(this);
	}
};
