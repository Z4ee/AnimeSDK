#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_68841D2E219E78DE_1.h"
#include "unitysdk/Struct_2_6FD410D66A5A40AF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_1E2BCC44350175D1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB049CD0)
#define CLASS_1_1E2BCC44350175D1_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB049D10)
#define CLASS_1_1E2BCC44350175D1_GET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xB049D50)
#define CLASS_1_1E2BCC44350175D1_GET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0xB049CF0)
#define CLASS_1_1E2BCC44350175D1_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0xB049D70)
#define CLASS_1_1E2BCC44350175D1_GET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xB049D30)
#define CLASS_1_1E2BCC44350175D1_METHOD_1_4D0C00C67836AE79_OFFSET UNITYSDK_OFFSET(0xB049DB0)
#define CLASS_1_1E2BCC44350175D1_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB049D20)
#define CLASS_1_1E2BCC44350175D1_SET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xB049D60)
#define CLASS_1_1E2BCC44350175D1_SET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0xB049D00)
#define CLASS_1_1E2BCC44350175D1_SET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0xB049D90)
#define CLASS_1_1E2BCC44350175D1_SET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xB049D40)
#define CLASS_1_1E2BCC44350175D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB049DA0)

inline static constexpr unsigned int Class_1_1E2BCC44350175D1_TypeDefinitionIndex = 48588;

class Class_1_1E2BCC44350175D1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _PromotionCostList_k__BackingField; // 0x10
	::System::UInt32 _MaxLevel_k__BackingField; // 0x18
	::System::UInt32 _PlayerLevelRequire_k__BackingField; // 0x1C
	::Struct_2_68841D2E219E78DE_1 _Identifier_k__BackingField; // 0x20
	::System::UInt32 _WorldLevelRequire_k__BackingField; // 0x2C
	::Struct_2_6FD410D66A5A40AF _PropertyValues_k__BackingField; // 0x30

	::System::Void _ctor(::Struct_2_68841D2E219E78DE_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_68841D2E219E78DE_1))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_68841D2E219E78DE_1 get_Identifier()
	{
		return ((::Struct_2_68841D2E219E78DE_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_GET_IDENTIFIER_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_PromotionCostList()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_GET_PROMOTIONCOSTLIST_OFFSET))(this);
	}

	::System::Void set_PromotionCostList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_SET_PROMOTIONCOSTLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_SET_MAXLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_WorldLevelRequire()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_GET_WORLDLEVELREQUIRE_OFFSET))(this);
	}

	::System::Void set_WorldLevelRequire(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_SET_WORLDLEVELREQUIRE_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayerLevelRequire()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_GET_PLAYERLEVELREQUIRE_OFFSET))(this);
	}

	::System::Void set_PlayerLevelRequire(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_SET_PLAYERLEVELREQUIRE_OFFSET))(this, a1);
	}

	::Struct_2_6FD410D66A5A40AF get_PropertyValues()
	{
		return ((::Struct_2_6FD410D66A5A40AF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_GET_PROPERTYVALUES_OFFSET))(this);
	}

	::System::Void set_PropertyValues(::Struct_2_6FD410D66A5A40AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6FD410D66A5A40AF))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_SET_PROPERTYVALUES_OFFSET))(this, a1);
	}

	::System::ValueTuple_4<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_4D0C00C67836AE79(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::ValueTuple_4<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_1E2BCC44350175D1_METHOD_1_4D0C00C67836AE79_OFFSET))(this, a1);
	}
};
