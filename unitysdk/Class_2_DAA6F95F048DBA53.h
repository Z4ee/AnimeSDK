#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class PlayNPCSingleBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_DAA6F95F048DBA53_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138B8870)
#define CLASS_2_DAA6F95F048DBA53_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x138B8F10)
#define CLASS_2_DAA6F95F048DBA53_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x138B8FD0)
#define CLASS_2_DAA6F95F048DBA53_METHOD_2_D98BA75FC67827C5_OFFSET UNITYSDK_OFFSET(0x138B8D00)
#define CLASS_2_DAA6F95F048DBA53_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x138B8EB0)
#define CLASS_2_DAA6F95F048DBA53_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138B8930)
#define CLASS_2_DAA6F95F048DBA53_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x138B8E00)
#define CLASS_2_DAA6F95F048DBA53_TICK_OFFSET UNITYSDK_OFFSET(0x138B8E50)
#define CLASS_2_DAA6F95F048DBA53__CTOR_OFFSET UNITYSDK_OFFSET(0x138B8860)

inline static constexpr unsigned int Class_2_DAA6F95F048DBA53_TypeDefinitionIndex = 54468;

class Class_2_DAA6F95F048DBA53 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::PlayNPCSingleBubbleTalk* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_3; // 0x28

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
