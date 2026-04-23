#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SelectRubikGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E53B22E729E113C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96CAE80)
#define CLASS_3_E53B22E729E113C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96CAEC0)
#define CLASS_3_E53B22E729E113C3__CTOR_OFFSET UNITYSDK_OFFSET(0x96CAE50)
#define CLASS_3_E53B22E729E113C3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96CB4A0)

inline static constexpr unsigned int Class_3_E53B22E729E113C3_TypeDefinitionIndex = 53933;

class Class_3_E53B22E729E113C3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SelectRubikGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectRubikGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectRubikGroup*))((::PBYTE)hIl2Cpp + CLASS_3_E53B22E729E113C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E53B22E729E113C3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E53B22E729E113C3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E53B22E729E113C3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
