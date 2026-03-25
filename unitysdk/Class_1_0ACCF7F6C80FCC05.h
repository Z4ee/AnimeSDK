#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0ACCF7F6C80FCC05_METHOD_1_A5B0281C1A8348C9_OFFSET UNITYSDK_OFFSET(0x113F39E0)
#define CLASS_1_0ACCF7F6C80FCC05__CTOR_OFFSET UNITYSDK_OFFSET(0x113F3A30)

inline static constexpr unsigned int Class_1_0ACCF7F6C80FCC05_TypeDefinitionIndex = 53025;

class Class_1_0ACCF7F6C80FCC05 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACCF7F6C80FCC05__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_A5B0281C1A8348C9(::System::String* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0ACCF7F6C80FCC05_METHOD_1_A5B0281C1A8348C9_OFFSET))(this, a1);
	}
};
