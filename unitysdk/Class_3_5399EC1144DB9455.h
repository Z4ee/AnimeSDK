#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartAdvTutorialGraph; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5399EC1144DB9455_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E1DA70)
#define CLASS_3_5399EC1144DB9455_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E1DAB0)
#define CLASS_3_5399EC1144DB9455_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E1DC20)
#define CLASS_3_5399EC1144DB9455__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1DA40)

inline static constexpr unsigned int Class_3_5399EC1144DB9455_TypeDefinitionIndex = 56088;

class Class_3_5399EC1144DB9455 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartAdvTutorialGraph*>
{
public:
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartAdvTutorialGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartAdvTutorialGraph*))((::PBYTE)hIl2Cpp + CLASS_3_5399EC1144DB9455__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5399EC1144DB9455_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5399EC1144DB9455_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5399EC1144DB9455_ONTASKRESET_OFFSET))(this);
	}
};
