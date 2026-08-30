#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class PlayNPCSingleBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_DAA6F95F048DBA53_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172B9060)
#define CLASS_2_DAA6F95F048DBA53_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x172B96E0)
#define CLASS_2_DAA6F95F048DBA53_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x172B97A0)
#define CLASS_2_DAA6F95F048DBA53_METHOD_2_D98BA75FC67827C5_OFFSET UNITYSDK_OFFSET(0x172B94D0)
#define CLASS_2_DAA6F95F048DBA53_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x172B9680)
#define CLASS_2_DAA6F95F048DBA53_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x172B9120)
#define CLASS_2_DAA6F95F048DBA53_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x172B95D0)
#define CLASS_2_DAA6F95F048DBA53_TICK_OFFSET UNITYSDK_OFFSET(0x172B9620)
#define CLASS_2_DAA6F95F048DBA53__CTOR_OFFSET UNITYSDK_OFFSET(0x172B9050)

inline static constexpr unsigned int Class_2_DAA6F95F048DBA53_TypeDefinitionIndex = 58423;

class Class_2_DAA6F95F048DBA53 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	::System::String* IJMGEMMNNPI; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::PlayNPCSingleBubbleTalk* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayNPCSingleBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayNPCSingleBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_D98BA75FC67827C5(::RPG::GameCore::BubbleTalkInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DAA6F95F048DBA53_METHOD_2_D98BA75FC67827C5_OFFSET))(this, a1);
	}
};
