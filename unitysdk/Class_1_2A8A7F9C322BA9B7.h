#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2A8A7F9C322BA9B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1630A070)

inline static constexpr unsigned int Class_1_2A8A7F9C322BA9B7_TypeDefinitionIndex = 62209;

class Class_1_2A8A7F9C322BA9B7 : public ::System::Object
{
public:
	::System::String* CEGADPFLPGM; // 0x10
	::RPG::GameCore::AnimatorParameterType JBPNBECLGKN; // 0x18
	::System::Single AALPICLABCO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8A7F9C322BA9B7__CTOR_OFFSET))(this);
	}
};
