#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimDanmuTrackAlignment.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace System { class String; }

#define CLASS_1_3039E593DEE50CCF_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C0DAC0)
#define CLASS_1_3039E593DEE50CCF__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0DB40)

inline static constexpr unsigned int Class_1_3039E593DEE50CCF_TypeDefinitionIndex = 39995;

class Class_1_3039E593DEE50CCF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30
	::RPG::GameCore::FiveDimDanmuTrackAlignment Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Boolean Field_1_9; // 0x3C
	::System::Boolean Field_1_10; // 0x3D
	::System::UInt32 Field_1_11; // 0x40
	::System::Int32 Field_1_12; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3039E593DEE50CCF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3039E593DEE50CCF_CLEAR_OFFSET))(this);
	}
};
