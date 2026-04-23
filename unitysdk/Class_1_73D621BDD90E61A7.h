#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_73D621BDD90E61A7_CLEAR_OFFSET UNITYSDK_OFFSET(0x99155D0)
#define CLASS_1_73D621BDD90E61A7__CTOR_OFFSET UNITYSDK_OFFSET(0x9915620)

inline static constexpr unsigned int Class_1_73D621BDD90E61A7_TypeDefinitionIndex = 50164;

class Class_1_73D621BDD90E61A7 : public ::System::Object
{
public:
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D621BDD90E61A7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D621BDD90E61A7_CLEAR_OFFSET))(this);
	}
};
