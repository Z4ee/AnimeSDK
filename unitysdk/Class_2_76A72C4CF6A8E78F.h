#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLC1Dot3PictureFrame; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define CLASS_2_76A72C4CF6A8E78F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154176F0)
#define CLASS_2_76A72C4CF6A8E78F_METHOD_2_49BEF2EAB8B3053C_OFFSET UNITYSDK_OFFSET(0x154178E0)
#define CLASS_2_76A72C4CF6A8E78F_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x15417C80)
#define CLASS_2_76A72C4CF6A8E78F_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x15417F20)
#define CLASS_2_76A72C4CF6A8E78F_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x15417ED0)
#define CLASS_2_76A72C4CF6A8E78F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15417860)
#define CLASS_2_76A72C4CF6A8E78F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15417E80)
#define CLASS_2_76A72C4CF6A8E78F_TICK_OFFSET UNITYSDK_OFFSET(0x15417800)
#define CLASS_2_76A72C4CF6A8E78F__CTOR_OFFSET UNITYSDK_OFFSET(0x154176E0)

inline static constexpr unsigned int Class_2_76A72C4CF6A8E78F_TypeDefinitionIndex = 58608;

class Class_2_76A72C4CF6A8E78F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::UnityEngine::Texture* HMIDCAFGPAI; // 0x18
	::System::String* IFNEOIIGFBL; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::RogueDLC1Dot3PictureFrame* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3PictureFrame*))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_ONTASKRESET_OFFSET))(this);
	}

	::System::String* Method_2_49BEF2EAB8B3053C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_METHOD_2_49BEF2EAB8B3053C_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}
};
