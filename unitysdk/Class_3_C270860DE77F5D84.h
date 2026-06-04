#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class PlayOrigamiFinishTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C270860DE77F5D84_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9C3440)
#define CLASS_3_C270860DE77F5D84_METHOD_3_118B343B838CF2BB_OFFSET UNITYSDK_OFFSET(0xA9C36C0)
#define CLASS_3_C270860DE77F5D84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9C3490)
#define CLASS_3_C270860DE77F5D84__CTOR_OFFSET UNITYSDK_OFFSET(0xA9C3410)
#define CLASS_3_C270860DE77F5D84___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9C3B80)

inline static constexpr unsigned int Class_3_C270860DE77F5D84_TypeDefinitionIndex = 49624;

class Class_3_C270860DE77F5D84 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayOrigamiFinishTalk*>
{
public:
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayOrigamiFinishTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayOrigamiFinishTalk*))((::PBYTE)hIl2Cpp + CLASS_3_C270860DE77F5D84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C270860DE77F5D84_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C270860DE77F5D84_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_118B343B838CF2BB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C270860DE77F5D84_METHOD_3_118B343B838CF2BB_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C270860DE77F5D84___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
