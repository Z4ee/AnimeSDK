#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicRhythmEvent; }
namespace System { class Object; }

#define CLASS_2_558066A402B9276A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AE8B00)
#define CLASS_2_558066A402B9276A_METHOD_2_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0x15AE8CF0)
#define CLASS_2_558066A402B9276A_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15AE91F0)
#define CLASS_2_558066A402B9276A_METHOD_2_CC2FBC3BD9171E9F_OFFSET UNITYSDK_OFFSET(0x15AE8F70)
#define CLASS_2_558066A402B9276A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AE8960)
#define CLASS_2_558066A402B9276A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AE8AB0)
#define CLASS_2_558066A402B9276A_TICK_OFFSET UNITYSDK_OFFSET(0x15AE8E90)
#define CLASS_2_558066A402B9276A__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE88D0)

inline static constexpr unsigned int Class_2_558066A402B9276A_TypeDefinitionIndex = 53735;

class Class_2_558066A402B9276A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::MusicRhythmBoard* MIPPNCGOJNM; // 0x18
	::RPG::GameCore::WaitMusicRhythmEvent* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::Class_3_07C3C4D2990C49EE* ILEMLGEGLCC; // 0x30
	::System::Boolean BHEIANKOOPN; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicRhythmEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicRhythmEvent*))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7A6818D24D36DCBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A_METHOD_2_7A6818D24D36DCBD_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC2FBC3BD9171E9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A_METHOD_2_CC2FBC3BD9171E9F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_558066A402B9276A_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
