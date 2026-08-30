#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBillboardInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F542EA02DA049DB0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC029EC0)
#define CLASS_3_F542EA02DA049DB0__CTOR_OFFSET UNITYSDK_OFFSET(0xC029E90)

inline static constexpr unsigned int Class_3_F542EA02DA049DB0_TypeDefinitionIndex = 58678;

class Class_3_F542EA02DA049DB0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBillboardInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBillboardInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBillboardInfo*))((::PBYTE)hIl2Cpp + CLASS_3_F542EA02DA049DB0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F542EA02DA049DB0_ONTASKBEGIN_OFFSET))(this);
	}
};
