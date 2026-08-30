#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideModifierName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_14062AF23F2CFDF6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCC95D0)
#define CLASS_3_14062AF23F2CFDF6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCC9200)
#define CLASS_3_14062AF23F2CFDF6__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC91D0)

inline static constexpr unsigned int Class_3_14062AF23F2CFDF6_TypeDefinitionIndex = 55441;

class Class_3_14062AF23F2CFDF6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideModifierName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideModifierName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideModifierName*))((::PBYTE)hIl2Cpp + CLASS_3_14062AF23F2CFDF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14062AF23F2CFDF6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14062AF23F2CFDF6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
