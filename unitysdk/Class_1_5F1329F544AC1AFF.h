#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5F1329F544AC1AFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E7E20)

inline static constexpr unsigned int Class_1_5F1329F544AC1AFF_TypeDefinitionIndex = 41085;

class Class_1_5F1329F544AC1AFF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F1329F544AC1AFF__CTOR_OFFSET))(this);
	}
};
