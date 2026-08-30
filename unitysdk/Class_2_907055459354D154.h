#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class PlayMusicRhythmTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_907055459354D154_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED86640)
#define CLASS_2_907055459354D154_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xED86880)
#define CLASS_2_907055459354D154_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xED86680)
#define CLASS_2_907055459354D154_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xED86910)
#define CLASS_2_907055459354D154_TICK_OFFSET UNITYSDK_OFFSET(0xED86960)
#define CLASS_2_907055459354D154__CCTOR_OFFSET UNITYSDK_OFFSET(0xED86AE0)
#define CLASS_2_907055459354D154__CTOR_OFFSET UNITYSDK_OFFSET(0xED86630)

inline static constexpr unsigned int Class_2_907055459354D154_TypeDefinitionIndex = 53358;

class Class_2_907055459354D154 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_IMOALFMKIHP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_907055459354D154_TypeDefinitionIndex)->GetStaticField(0xCD90);
	}
	::RPG::Client::MusicRhythmBoard* MNBHJEELNBA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::RPG::GameCore::PlayMusicRhythmTimeline* IGHAHBNLIJA; // 0x28
	::System::Boolean HANAHDNCPJM; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMusicRhythmTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMusicRhythmTimeline*))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
