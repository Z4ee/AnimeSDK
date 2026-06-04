#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropCurveMoveRecover; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6E237B6AC1346A2F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA481E10)
#define CLASS_3_6E237B6AC1346A2F__CTOR_OFFSET UNITYSDK_OFFSET(0xA481DE0)

inline static constexpr unsigned int Class_3_6E237B6AC1346A2F_TypeDefinitionIndex = 54502;

class Class_3_6E237B6AC1346A2F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropCurveMoveRecover*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveRecover* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveRecover*))((::PBYTE)hIl2Cpp + CLASS_3_6E237B6AC1346A2F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E237B6AC1346A2F_ONTASKBEGIN_OFFSET))(this);
	}
};
