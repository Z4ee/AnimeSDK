#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class ST_Side_PlayBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_2ABCC1F6EDC9A0B0_METHOD_3_D98BA75FC67827C5_OFFSET UNITYSDK_OFFSET(0x1887BA60)
#define CLASS_3_2ABCC1F6EDC9A0B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1887B560)
#define CLASS_3_2ABCC1F6EDC9A0B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1887BB60)
#define CLASS_3_2ABCC1F6EDC9A0B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1887B530)

inline static constexpr unsigned int Class_3_2ABCC1F6EDC9A0B0_TypeDefinitionIndex = 52527;

class Class_3_2ABCC1F6EDC9A0B0 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_PlayBubbleTalk*>
{
public:
	::System::String* IJMGEMMNNPI; // 0x28
	::System::Boolean GMBPKGHNFJO; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_PlayBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_PlayBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_3_2ABCC1F6EDC9A0B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2ABCC1F6EDC9A0B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2ABCC1F6EDC9A0B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_D98BA75FC67827C5(::RPG::GameCore::BubbleTalkInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_3_2ABCC1F6EDC9A0B0_METHOD_3_D98BA75FC67827C5_OFFSET))(this, a1);
	}
};
