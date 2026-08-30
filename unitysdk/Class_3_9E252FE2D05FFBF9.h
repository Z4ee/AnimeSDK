#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class SetRoguePFBillboardInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E252FE2D05FFBF9_METHOD_3_172A2321A94D4008_OFFSET UNITYSDK_OFFSET(0x15B466F0)
#define CLASS_3_9E252FE2D05FFBF9_METHOD_3_915A1511B75FAAE3_OFFSET UNITYSDK_OFFSET(0x15B46610)
#define CLASS_3_9E252FE2D05FFBF9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B46470)
#define CLASS_3_9E252FE2D05FFBF9__CTOR_OFFSET UNITYSDK_OFFSET(0x15B46440)

inline static constexpr unsigned int Class_3_9E252FE2D05FFBF9_TypeDefinitionIndex = 58723;

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

	::RPG::GameCore::NPCDataRow* Method_3_915A1511B75FAAE3()
	{
		return ((::RPG::GameCore::NPCDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E252FE2D05FFBF9_METHOD_3_915A1511B75FAAE3_OFFSET))(this);
	}

	::RPG::Client::TextID Method_3_172A2321A94D4008()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E252FE2D05FFBF9_METHOD_3_172A2321A94D4008_OFFSET))(this);
	}
};
