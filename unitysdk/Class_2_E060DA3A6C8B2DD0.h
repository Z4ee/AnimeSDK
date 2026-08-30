#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleFuncShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E060DA3A6C8B2DD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FDEAB0)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x18FDF730)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18FDF860)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1DF59E6F9D4E273B_OFFSET UNITYSDK_OFFSET(0x18FDF590)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x18FDF940)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x18FDF2E0)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x18FDF810)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_D7D514A57F13FD3D_OFFSET UNITYSDK_OFFSET(0x18FDF130)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0x18FDF540)
#define CLASS_2_E060DA3A6C8B2DD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FDED10)
#define CLASS_2_E060DA3A6C8B2DD0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FDEA60)
#define CLASS_2_E060DA3A6C8B2DD0_TICK_OFFSET UNITYSDK_OFFSET(0x18FDEA00)
#define CLASS_2_E060DA3A6C8B2DD0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDE8B0)

inline static constexpr unsigned int Class_2_E060DA3A6C8B2DD0_TypeDefinitionIndex = 58614;

class Class_2_E060DA3A6C8B2DD0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* AFPMOJKPEIC; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
	::RPG::GameCore::RogueGambleFuncShowUI* JKJPFJALGKO; // 0x30
	::RPG::GameCore::PropComponent* BCCLENOIOBD; // 0x38
	::Class_3_07C3C4D2990C49EE* JFAMPANPALF; // 0x40
	::Class_3_07C3C4D2990C49EE* GGGKNHKPGHP; // 0x48
	::RPG::Client::RogueGambleBaseFunc* HDHGCLLONGP; // 0x50
	::System::Boolean MJGDFAHFDDF; // 0x58
	::System::UInt32 FBJCMAAHKIP; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_D7D514A57F13FD3D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_D7D514A57F13FD3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_1DF59E6F9D4E273B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1DF59E6F9D4E273B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}
};
