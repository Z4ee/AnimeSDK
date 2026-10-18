#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleEmojiReason.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;

#define CLASS_1_EB361FD1B05BB5EB_METHOD_1_734C3D8AE304BC5D_OFFSET UNITYSDK_OFFSET(0x1CB82C60)
#define CLASS_1_EB361FD1B05BB5EB_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x1CB82E10)
#define CLASS_1_EB361FD1B05BB5EB_METHOD_1_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x1CB83020)
#define CLASS_1_EB361FD1B05BB5EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB82C50)

inline static constexpr unsigned int Class_1_EB361FD1B05BB5EB_TypeDefinitionIndex = 42181;

class Class_1_EB361FD1B05BB5EB : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x10
	::System::Single HABJBFDBCNK; // 0x18
	::System::Boolean NDAODMFBEJN; // 0x1C
	::System::Int32 ADLMGLDHNOJ; // 0x20
	::RPG::Client::LittleGame::MarbleEmojiReason HBOPBCMODIE; // 0x24
	::System::Single DLEJOLKKIMJ; // 0x28

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
