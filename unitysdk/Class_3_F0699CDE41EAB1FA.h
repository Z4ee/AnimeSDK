#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class FollowRotate; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class PropSetFollowRotate; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_F0699CDE41EAB1FA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11562860)
#define CLASS_3_F0699CDE41EAB1FA_METHOD_3_49D86376EA6BF9FB_OFFSET UNITYSDK_OFFSET(0x11562DA0)
#define CLASS_3_F0699CDE41EAB1FA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115629F0)
#define CLASS_3_F0699CDE41EAB1FA__CTOR_OFFSET UNITYSDK_OFFSET(0x11562830)
#define CLASS_3_F0699CDE41EAB1FA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11563530)

inline static constexpr unsigned int Class_3_F0699CDE41EAB1FA_TypeDefinitionIndex = 43051;

class Class_3_F0699CDE41EAB1FA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetFollowRotate*>
{
public:
	::RPG::Client::FollowRotate* Field_3_0; // 0x28
	::System::Boolean Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetFollowRotate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetFollowRotate*))((::PBYTE)hIl2Cpp + CLASS_3_F0699CDE41EAB1FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0699CDE41EAB1FA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0699CDE41EAB1FA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_49D86376EA6BF9FB(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_F0699CDE41EAB1FA_METHOD_3_49D86376EA6BF9FB_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0699CDE41EAB1FA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
