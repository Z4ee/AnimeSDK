#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/System/Object.h"

class ScreenPlayData;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SEQUENCEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA62D0)

inline static constexpr unsigned int SequencePlay_TypeDefinitionIndex = 38450;

class SequencePlay : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ScreenPlayData*>* PlayDatas; // 0x10
	::MoleMole::StaticSceneObjectListLoopType playMode; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCEPLAY__CTOR_OFFSET))(this);
	}
};
