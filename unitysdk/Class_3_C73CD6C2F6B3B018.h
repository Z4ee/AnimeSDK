#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class SetDynamicValueByPreCalcHPDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C73CD6C2F6B3B018_METHOD_3_B322C03570E354F9_OFFSET UNITYSDK_OFFSET(0x198C4DB0)
#define CLASS_3_C73CD6C2F6B3B018_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198C4970)
#define CLASS_3_C73CD6C2F6B3B018__CTOR_OFFSET UNITYSDK_OFFSET(0x198C4890)

inline static constexpr unsigned int Class_3_C73CD6C2F6B3B018_TypeDefinitionIndex = 55649;

class Class_3_C73CD6C2F6B3B018 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByPreCalcHPDamage*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage*))((::PBYTE)hIl2Cpp + CLASS_3_C73CD6C2F6B3B018__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C73CD6C2F6B3B018_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B322C03570E354F9(::Class_1_843DD6330B22E422*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*&))((::PBYTE)hIl2Cpp + CLASS_3_C73CD6C2F6B3B018_METHOD_3_B322C03570E354F9_OFFSET))(this, a1);
	}
};
