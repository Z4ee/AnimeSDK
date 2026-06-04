#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DriveCurvePropGroupObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_54956BC63B60C907_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC72AA0)
#define CLASS_3_54956BC63B60C907_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC72AE0)
#define CLASS_3_54956BC63B60C907__CTOR_OFFSET UNITYSDK_OFFSET(0xAC72A70)
#define CLASS_3_54956BC63B60C907___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC72C30)

inline static constexpr unsigned int Class_3_54956BC63B60C907_TypeDefinitionIndex = 54288;

class Class_3_54956BC63B60C907 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DriveCurvePropGroupObject*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DriveCurvePropGroupObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DriveCurvePropGroupObject*))((::PBYTE)hIl2Cpp + CLASS_3_54956BC63B60C907__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54956BC63B60C907_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54956BC63B60C907_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54956BC63B60C907___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
