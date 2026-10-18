#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }

#define CLASS_1_3B4E5417FD788DB9_METHOD_1_FBB96C05F2F3013B_OFFSET UNITYSDK_OFFSET(0x1193B5C0)
#define CLASS_1_3B4E5417FD788DB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1193B550)

inline static constexpr unsigned int Class_1_3B4E5417FD788DB9_TypeDefinitionIndex = 74926;

class Class_1_3B4E5417FD788DB9 : public ::System::Object
{
public:
	::RPG::Client::ScheduleData* IIPEDCJJIMN; // 0x10

	::System::Void _ctor(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_3B4E5417FD788DB9__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::BlindBox::Pool::PoolClosedReason Method_1_FBB96C05F2F3013B()
	{
		return ((::RPG::Client::BlindBox::Pool::PoolClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B4E5417FD788DB9_METHOD_1_FBB96C05F2F3013B_OFFSET))(this);
	}
};
