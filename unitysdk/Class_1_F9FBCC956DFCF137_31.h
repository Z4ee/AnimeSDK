#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1492;
class Class_1_134F4A605D115C87;
namespace System { class Action; }

#define CLASS_1_F9FBCC956DFCF137_31_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB86B7C0)
#define CLASS_1_F9FBCC956DFCF137_31_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB86B7D0)
#define CLASS_1_F9FBCC956DFCF137_31__CTOR_OFFSET UNITYSDK_OFFSET(0xB86B7E0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_31_TypeDefinitionIndex = 79790;

class Class_1_F9FBCC956DFCF137_31 : public ::System::Object
{
public:
	::Class_1_134F4A605D115C87* _Owner_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_31__CTOR_OFFSET))(this);
	}

	::Class_1_134F4A605D115C87* get_Owner()
	{
		return ((::Class_1_134F4A605D115C87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_31_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_1_134F4A605D115C87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_134F4A605D115C87*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_31_SET_OWNER_OFFSET))(this, a1);
	}
};
