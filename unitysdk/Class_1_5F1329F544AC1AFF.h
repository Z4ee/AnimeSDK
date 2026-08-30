#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5F1329F544AC1AFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FB2D0)

inline static constexpr unsigned int Class_1_5F1329F544AC1AFF_TypeDefinitionIndex = 42045;

class Class_1_5F1329F544AC1AFF : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
	::System::String* GINFOPOAKHK; // 0x18
	::System::UInt32 BOKJJKFCFME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F1329F544AC1AFF__CTOR_OFFSET))(this);
	}
};
