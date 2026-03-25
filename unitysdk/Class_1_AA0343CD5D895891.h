#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AA0343CD5D895891__CTOR_OFFSET UNITYSDK_OFFSET(0x11875E70)

inline static constexpr unsigned int Class_1_AA0343CD5D895891_TypeDefinitionIndex = 53573;

class Class_1_AA0343CD5D895891 : public ::System::Object
{
public:
	::RPG::GameCore::Match3::GridTag Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA0343CD5D895891__CTOR_OFFSET))(this);
	}
};
