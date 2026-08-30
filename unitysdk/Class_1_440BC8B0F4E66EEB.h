#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_887;
class Class_1_A2B569C8E16CE41A;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_440BC8B0F4E66EEB_METHOD_1_69D8C0875AF1016B_OFFSET UNITYSDK_OFFSET(0x15E3B280)
#define CLASS_1_440BC8B0F4E66EEB_METHOD_1_DE1C71B54B8F3C27_OFFSET UNITYSDK_OFFSET(0x15E3AEE0)
#define CLASS_1_440BC8B0F4E66EEB__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3AEA0)

inline static constexpr unsigned int Class_1_440BC8B0F4E66EEB_TypeDefinitionIndex = 65653;

class Class_1_440BC8B0F4E66EEB : public ::System::Object
{
public:
	::Class_1_A2B569C8E16CE41A* FMMNHJPNINN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_440BC8B0F4E66EEB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>* Method_1_DE1C71B54B8F3C27(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_440BC8B0F4E66EEB_METHOD_1_DE1C71B54B8F3C27_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_69D8C0875AF1016B(::Class_0_16E4307DCC419505_887* a1, ::Class_0_16E4307DCC419505_887* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_887*, ::Class_0_16E4307DCC419505_887*))((::PBYTE)hIl2Cpp + CLASS_1_440BC8B0F4E66EEB_METHOD_1_69D8C0875AF1016B_OFFSET))(this, a1, a2);
	}
};
