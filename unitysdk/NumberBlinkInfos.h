#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class HueAndSaturationGroup;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NUMBERBLINKINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0xE591470)

inline static constexpr unsigned int NumberBlinkInfos_TypeDefinitionIndex = 78174;

class NumberBlinkInfos : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HueAndSaturationGroup*>* HueAndGroupInfos; // 0x10
	::HueAndSaturationGroup* StableInfo; // 0x18
	::UnityEngine::Color Color; // 0x20
	::System::Int32 BaseTextureIndex; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NUMBERBLINKINFOS__CTOR_OFFSET))(this);
	}
};
