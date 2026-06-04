#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetActivityTelevisionBuffInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_07A7D3FEFC980F57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFEA6C0)
#define CLASS_3_07A7D3FEFC980F57__CTOR_OFFSET UNITYSDK_OFFSET(0xAFEA690)

inline static constexpr unsigned int Class_3_07A7D3FEFC980F57_TypeDefinitionIndex = 51694;

class Class_3_07A7D3FEFC980F57 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetActivityTelevisionBuffInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActivityTelevisionBuffInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_3_07A7D3FEFC980F57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07A7D3FEFC980F57_ONTASKBEGIN_OFFSET))(this);
	}
};
