#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBillboardInStoryMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FD11728DFAB8A0F3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x178C8510)
#define CLASS_3_FD11728DFAB8A0F3__CTOR_OFFSET UNITYSDK_OFFSET(0x178C84E0)

inline static constexpr unsigned int Class_3_FD11728DFAB8A0F3_TypeDefinitionIndex = 58769;

class Class_3_FD11728DFAB8A0F3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBillboardInStoryMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBillboardInStoryMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBillboardInStoryMode*))((::PBYTE)hIl2Cpp + CLASS_3_FD11728DFAB8A0F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD11728DFAB8A0F3_ONTASKBEGIN_OFFSET))(this);
	}
};
