#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityDiceCombatV2BattleTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6403DECDBFD56254_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x19EB4560)
#define CLASS_1_6403DECDBFD56254__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB4770)

inline static constexpr unsigned int Class_1_6403DECDBFD56254_TypeDefinitionIndex = 10872;

class Class_1_6403DECDBFD56254 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::GameCore::ActivityDiceCombatV2BattleTalkType Field_1_2; // 0x1C
	::RPG::Client::TextID Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6403DECDBFD56254__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6403DECDBFD56254*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6403DECDBFD56254*&))((::PBYTE)hIl2Cpp + CLASS_1_6403DECDBFD56254_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
