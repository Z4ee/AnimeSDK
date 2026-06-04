#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A85708757A0277D.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_7AB95FB0007F9397_METHOD_2_9BE193EAAF0889D1_OFFSET UNITYSDK_OFFSET(0x13C4E740)
#define CLASS_2_7AB95FB0007F9397__CTOR_OFFSET UNITYSDK_OFFSET(0x13C4E790)

inline static constexpr unsigned int Class_2_7AB95FB0007F9397_TypeDefinitionIndex = 60953;

class Class_2_7AB95FB0007F9397 : public ::Class_1_5A85708757A0277D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AB95FB0007F9397__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_9BE193EAAF0889D1(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_7AB95FB0007F9397_METHOD_2_9BE193EAAF0889D1_OFFSET))(this, a1);
	}
};
