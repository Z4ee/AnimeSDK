#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6720E295FB8CF9C8;
class Class_1_D707BE2AC47F299A;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_3BDA35EA1E3ED47E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA32170)
#define CLASS_1_3BDA35EA1E3ED47E_GET_ICON_OFFSET UNITYSDK_OFFSET(0xBA320E0)
#define CLASS_1_3BDA35EA1E3ED47E_GET_LACKEQUIP_OFFSET UNITYSDK_OFFSET(0xBA320F0)
#define CLASS_1_3BDA35EA1E3ED47E__CTOR_OFFSET UNITYSDK_OFFSET(0xBA32100)

inline static constexpr unsigned int Class_1_3BDA35EA1E3ED47E_TypeDefinitionIndex = 80095;

class Class_1_3BDA35EA1E3ED47E : public ::System::Object
{
public:
	::Class_1_6720E295FB8CF9C8* _Icon_k__BackingField; // 0x10
	::Class_1_D707BE2AC47F299A* _LackEquip_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_3BDA35EA1E3ED47E__CTOR_OFFSET))(this, a1);
	}

	::Class_1_6720E295FB8CF9C8* get_Icon()
	{
		return ((::Class_1_6720E295FB8CF9C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BDA35EA1E3ED47E_GET_ICON_OFFSET))(this);
	}

	::Class_1_D707BE2AC47F299A* get_LackEquip()
	{
		return ((::Class_1_D707BE2AC47F299A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BDA35EA1E3ED47E_GET_LACKEQUIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BDA35EA1E3ED47E_DISPOSE_OFFSET))(this);
	}
};
