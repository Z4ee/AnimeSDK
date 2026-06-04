#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }

#define CLASS_1_4836B1FEE3436F34_METHOD_1_24E70F6B947DAEBD_OFFSET UNITYSDK_OFFSET(0xAB3ACF0)
#define CLASS_1_4836B1FEE3436F34__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3AD60)

inline static constexpr unsigned int Class_1_4836B1FEE3436F34_TypeDefinitionIndex = 70011;

class Class_1_4836B1FEE3436F34 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4836B1FEE3436F34__CTOR_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveNode* Method_1_24E70F6B947DAEBD(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::RPG::Client::ActivityIdleLive::StoryLine* a2)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_4836B1FEE3436F34_METHOD_1_24E70F6B947DAEBD_OFFSET))(this, a1, a2);
	}
};
