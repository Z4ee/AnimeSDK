#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropCurveMoveStop; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6BC4A722A008838C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AB78F0)
#define CLASS_3_6BC4A722A008838C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB78C0)

inline static constexpr unsigned int Class_3_6BC4A722A008838C_TypeDefinitionIndex = 58464;

class Class_3_6BC4A722A008838C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropCurveMoveStop*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStop*))((::PBYTE)hIl2Cpp + CLASS_3_6BC4A722A008838C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC4A722A008838C_ONTASKBEGIN_OFFSET))(this);
	}
};
