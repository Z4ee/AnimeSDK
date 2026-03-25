#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class SetRoguePFBillboardInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E252FE2D05FFBF9_METHOD_3_628221527CBBFBC8_OFFSET UNITYSDK_OFFSET(0x118CF9E0)
#define CLASS_3_9E252FE2D05FFBF9_METHOD_3_E2547987B305C2AF_OFFSET UNITYSDK_OFFSET(0x118CFA60)
#define CLASS_3_9E252FE2D05FFBF9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118CF8B0)
#define CLASS_3_9E252FE2D05FFBF9__CTOR_OFFSET UNITYSDK_OFFSET(0x118CF880)

inline static constexpr unsigned int Class_3_9E252FE2D05FFBF9_TypeDefinitionIndex = 47269;

class Class_3_9E252FE2D05FFBF9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetRoguePFBillboardInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetRoguePFBillboardInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetRoguePFBillboardInfo*))((::PBYTE)hIl2Cpp + CLASS_3_9E252FE2D05FFBF9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E252FE2D05FFBF9_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::NPCDataRow* Method_3_628221527CBBFBC8()
	{
		return ((::RPG::GameCore::NPCDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E252FE2D05FFBF9_METHOD_3_628221527CBBFBC8_OFFSET))(this);
	}

	::RPG::Client::TextID Method_3_E2547987B305C2AF()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E252FE2D05FFBF9_METHOD_3_E2547987B305C2AF_OFFSET))(this);
	}
};
