#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore::Match3 { class ShowCharacterCutInGroupAction; }

#define CLASS_1_47F7C5DA06461F24_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D022C0)
#define CLASS_1_47F7C5DA06461F24_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D023B0)
#define CLASS_1_47F7C5DA06461F24_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18D025F0)
#define CLASS_1_47F7C5DA06461F24__CTOR_OFFSET UNITYSDK_OFFSET(0x18D02630)

inline static constexpr unsigned int Class_1_47F7C5DA06461F24_TypeDefinitionIndex = 39632;

class Class_1_47F7C5DA06461F24 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole>>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18
	::RPG::PoolList_1<::System::UInt32>* Field_1_2; // 0x20
	::RPG::PoolDictionary_2<::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*, ::System::UInt32>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F7C5DA06461F24__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F7C5DA06461F24_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F7C5DA06461F24_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F7C5DA06461F24_ONRECYCLE_OFFSET))(this);
	}
};
