#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreateCurvePropGroupPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_EBA8D0B1B31A7A99_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89696E0)
#define CLASS_3_EBA8D0B1B31A7A99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8969740)
#define CLASS_3_EBA8D0B1B31A7A99__CTOR_OFFSET UNITYSDK_OFFSET(0x89696B0)
#define CLASS_3_EBA8D0B1B31A7A99___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8969E10)

inline static constexpr unsigned int Class_3_EBA8D0B1B31A7A99_TypeDefinitionIndex = 46822;

class Class_3_EBA8D0B1B31A7A99 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateCurvePropGroupPuzzle*>
{
public:
	::UnityEngine::GameObject* Field_3_1; // 0x28
	::System::String* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateCurvePropGroupPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + CLASS_3_EBA8D0B1B31A7A99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA8D0B1B31A7A99_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA8D0B1B31A7A99_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA8D0B1B31A7A99___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
