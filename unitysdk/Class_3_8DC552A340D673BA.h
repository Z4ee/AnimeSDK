#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8DC552A340D673BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1558F9D0)
#define CLASS_3_8DC552A340D673BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1558F8F0)

inline static constexpr unsigned int Class_3_8DC552A340D673BA_TypeDefinitionIndex = 52966;

class Class_3_8DC552A340D673BA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByWeakness*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWeakness* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWeakness*))((::PBYTE)hIl2Cpp + CLASS_3_8DC552A340D673BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DC552A340D673BA_ONTASKBEGIN_OFFSET))(this);
	}
};
