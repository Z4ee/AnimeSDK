#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_68CB91321C3E76A7;
class Class_2_D3DC74FCB64200A3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D3DC74FCB64200A3___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199EA810)
#define CLASS_2_D3DC74FCB64200A3___C__DISPLAYCLASS5_0___FIREMISSLE_B__0_OFFSET UNITYSDK_OFFSET(0x199EB050)

inline static constexpr unsigned int Class_2_D3DC74FCB64200A3___c__DisplayClass5_0_TypeDefinitionIndex = 58344;

class Class_2_D3DC74FCB64200A3___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* context; // 0x10
	::Class_2_D3DC74FCB64200A3* __4__this; // 0x18
	::Class_2_68CB91321C3E76A7* casterEntity; // 0x20
	::System::Int32 targetRuntimeID; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __FireMissle_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3___C__DISPLAYCLASS5_0___FIREMISSLE_B__0_OFFSET))(this);
	}
};
