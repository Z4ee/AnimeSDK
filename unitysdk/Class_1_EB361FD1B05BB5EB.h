#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleEmojiReason.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;

#define CLASS_1_EB361FD1B05BB5EB_METHOD_1_734C3D8AE304BC5D_OFFSET UNITYSDK_OFFSET(0x19C79AF0)
#define CLASS_1_EB361FD1B05BB5EB_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x19C79CB0)
#define CLASS_1_EB361FD1B05BB5EB_METHOD_1_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x19C79EC0)
#define CLASS_1_EB361FD1B05BB5EB__CTOR_OFFSET UNITYSDK_OFFSET(0x19C79AE0)

inline static constexpr unsigned int Class_1_EB361FD1B05BB5EB_TypeDefinitionIndex = 40021;

class Class_1_EB361FD1B05BB5EB : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::RPG::Client::LittleGame::MarbleEmojiReason Field_1_5; // 0x28

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_1_EB361FD1B05BB5EB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_734C3D8AE304BC5D(::RPG::Client::LittleGame::MarbleEmojiReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MarbleEmojiReason))((::PBYTE)hIl2Cpp + CLASS_1_EB361FD1B05BB5EB_METHOD_1_734C3D8AE304BC5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB361FD1B05BB5EB_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_1_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB361FD1B05BB5EB_METHOD_1_A5ADA4706DA592FA_OFFSET))(this, a1);
	}
};
