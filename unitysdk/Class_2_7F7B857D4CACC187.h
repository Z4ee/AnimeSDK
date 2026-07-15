#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveModifierBuilder_1.h"

class Class_1_F6160A8B4F4A1F27;
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }

#define CLASS_2_7F7B857D4CACC187_BUILD_OFFSET UNITYSDK_OFFSET(0x17535970)
#define CLASS_2_7F7B857D4CACC187__CTOR_OFFSET UNITYSDK_OFFSET(0x17535950)

inline static constexpr unsigned int Class_2_7F7B857D4CACC187_TypeDefinitionIndex = 71526;

class Class_2_7F7B857D4CACC187 : public ::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::Class_1_F6160A8B4F4A1F27* Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_F6160A8B4F4A1F27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F6160A8B4F4A1F27*))((::PBYTE)hIl2Cpp + CLASS_2_7F7B857D4CACC187__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_7F7B857D4CACC187_BUILD_OFFSET))(this, a1);
	}
};
