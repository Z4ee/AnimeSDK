#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_486;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_ECD5FF82851D3446_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x12A57D10)
#define CLASS_2_ECD5FF82851D3446_METHOD_2_B8000DC3802917FD_OFFSET UNITYSDK_OFFSET(0x12A57D80)
#define CLASS_2_ECD5FF82851D3446_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x12A57D30)
#define CLASS_2_ECD5FF82851D3446_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x12A57D20)
#define CLASS_2_ECD5FF82851D3446__CTOR_OFFSET UNITYSDK_OFFSET(0x12A57FA0)

inline static constexpr unsigned int Class_2_ECD5FF82851D3446_TypeDefinitionIndex = 51811;

class Class_2_ECD5FF82851D3446 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_486*>
{
public:
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECD5FF82851D3446__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Owner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECD5FF82851D3446_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_ECD5FF82851D3446_SET_OWNER_OFFSET))(this, value);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECD5FF82851D3446_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_B8000DC3802917FD(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_ECD5FF82851D3446_METHOD_2_B8000DC3802917FD_OFFSET))(this, a1);
	}
};
