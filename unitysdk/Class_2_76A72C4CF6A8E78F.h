#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLC1Dot3PictureFrame; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define CLASS_2_76A72C4CF6A8E78F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9271800)
#define CLASS_2_76A72C4CF6A8E78F_METHOD_2_1BB2478DBA0E0D85_OFFSET UNITYSDK_OFFSET(0x9271980)
#define CLASS_2_76A72C4CF6A8E78F_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x9271CB0)
#define CLASS_2_76A72C4CF6A8E78F_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x9271F50)
#define CLASS_2_76A72C4CF6A8E78F_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x9271F00)
#define CLASS_2_76A72C4CF6A8E78F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9271900)
#define CLASS_2_76A72C4CF6A8E78F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9271EB0)
#define CLASS_2_76A72C4CF6A8E78F_TICK_OFFSET UNITYSDK_OFFSET(0x92718A0)
#define CLASS_2_76A72C4CF6A8E78F__CTOR_OFFSET UNITYSDK_OFFSET(0x92717F0)

inline static constexpr unsigned int Class_2_76A72C4CF6A8E78F_TypeDefinitionIndex = 53892;

class Class_2_76A72C4CF6A8E78F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::UnityEngine::Texture* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::RPG::GameCore::RogueDLC1Dot3PictureFrame* Field_2_0; // 0x30

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

	::System::String* Method_2_1BB2478DBA0E0D85()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_METHOD_2_1BB2478DBA0E0D85_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76A72C4CF6A8E78F_METHOD_2_85377D41FEE05B66_OFFSET))(this);
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
