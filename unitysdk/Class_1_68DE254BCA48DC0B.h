#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraShowJumpText; }

#define CLASS_1_68DE254BCA48DC0B_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xE4D0D50)
#define CLASS_1_68DE254BCA48DC0B_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xE4D0D90)
#define CLASS_1_68DE254BCA48DC0B__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D0D10)

inline static constexpr unsigned int Class_1_68DE254BCA48DC0B_TypeDefinitionIndex = 74461;

class Class_1_68DE254BCA48DC0B : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::GameCore::ChimeraShowJumpText* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor(::RPG::GameCore::ChimeraShowJumpText* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraShowJumpText*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68DE254BCA48DC0B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DE254BCA48DC0B_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DE254BCA48DC0B_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}
};
