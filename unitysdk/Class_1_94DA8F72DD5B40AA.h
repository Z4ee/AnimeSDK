#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_94DA8F72DD5B40AA_METHOD_1_092E633B9CD2BE71_OFFSET UNITYSDK_OFFSET(0x18F762E0)
#define CLASS_1_94DA8F72DD5B40AA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F76500)

inline static constexpr unsigned int Class_1_94DA8F72DD5B40AA_TypeDefinitionIndex = 14213;

class Class_1_94DA8F72DD5B40AA : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x20
	::RPG::GameCore::RogueTournAreaGroupID Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94DA8F72DD5B40AA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_092E633B9CD2BE71(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_94DA8F72DD5B40AA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_94DA8F72DD5B40AA*&))((::PBYTE)hIl2Cpp + CLASS_1_94DA8F72DD5B40AA_METHOD_1_092E633B9CD2BE71_OFFSET))(a1, a2);
	}
};
