#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_505;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_79EA3C0F1B5547EE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xA613E50)
#define CLASS_2_79EA3C0F1B5547EE_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0xA613E70)
#define CLASS_2_79EA3C0F1B5547EE_METHOD_2_B8000DC3802917FD_OFFSET UNITYSDK_OFFSET(0xA613EC0)
#define CLASS_2_79EA3C0F1B5547EE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xA613E60)
#define CLASS_2_79EA3C0F1B5547EE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6140E0)

inline static constexpr unsigned int Class_2_79EA3C0F1B5547EE_TypeDefinitionIndex = 52485;

class Class_2_79EA3C0F1B5547EE : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_505*>
{
public:
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79EA3C0F1B5547EE__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Owner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79EA3C0F1B5547EE_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_79EA3C0F1B5547EE_SET_OWNER_OFFSET))(this, a1);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79EA3C0F1B5547EE_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_2_B8000DC3802917FD(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_79EA3C0F1B5547EE_METHOD_2_B8000DC3802917FD_OFFSET))(this, a1);
	}
};
