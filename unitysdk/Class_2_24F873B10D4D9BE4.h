#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LimaoNewsShowTalkText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_24F873B10D4D9BE4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x883B970)
#define CLASS_2_24F873B10D4D9BE4_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x883BC70)
#define CLASS_2_24F873B10D4D9BE4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x883BA00)
#define CLASS_2_24F873B10D4D9BE4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x883BBC0)
#define CLASS_2_24F873B10D4D9BE4_TICK_OFFSET UNITYSDK_OFFSET(0x883BC10)
#define CLASS_2_24F873B10D4D9BE4__CTOR_OFFSET UNITYSDK_OFFSET(0x883B960)

inline static constexpr unsigned int Class_2_24F873B10D4D9BE4_TypeDefinitionIndex = 42846;

class Class_2_24F873B10D4D9BE4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LimaoNewsShowTalkText* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::LimaoNewsShowTalkText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::LimaoNewsShowTalkText*))((::PBYTE)hIl2Cpp + CLASS_2_24F873B10D4D9BE4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F873B10D4D9BE4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F873B10D4D9BE4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F873B10D4D9BE4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24F873B10D4D9BE4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24F873B10D4D9BE4_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
