#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_E8D30C7E0FDA44B4_METHOD_1_26B546441A50A139_OFFSET UNITYSDK_OFFSET(0xA92FFA0)
#define CLASS_1_E8D30C7E0FDA44B4_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0xA930160)
#define CLASS_1_E8D30C7E0FDA44B4__CTOR_OFFSET UNITYSDK_OFFSET(0xA930360)

inline static constexpr unsigned int Class_1_E8D30C7E0FDA44B4_TypeDefinitionIndex = 61305;

class Class_1_E8D30C7E0FDA44B4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_26B546441A50A139(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4_METHOD_1_26B546441A50A139_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_798* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_798*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}
};
