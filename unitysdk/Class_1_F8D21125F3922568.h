#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_8276302FFC710853.h"
#include "unitysdk/Struct_2_EDE247AF05B200CA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_F8D21125F3922568_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x12AF4690)
#define CLASS_1_F8D21125F3922568_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x12AF46D0)
#define CLASS_1_F8D21125F3922568_GET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0x12AF4710)
#define CLASS_1_F8D21125F3922568_GET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0x12AF46B0)
#define CLASS_1_F8D21125F3922568_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x12AF4730)
#define CLASS_1_F8D21125F3922568_GET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0x12AF46F0)
#define CLASS_1_F8D21125F3922568_METHOD_1_4D0C00C67836AE79_OFFSET UNITYSDK_OFFSET(0x12AF4770)
#define CLASS_1_F8D21125F3922568_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x12AF46E0)
#define CLASS_1_F8D21125F3922568_SET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0x12AF4720)
#define CLASS_1_F8D21125F3922568_SET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0x12AF46C0)
#define CLASS_1_F8D21125F3922568_SET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x12AF4750)
#define CLASS_1_F8D21125F3922568_SET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0x12AF4700)
#define CLASS_1_F8D21125F3922568__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF4760)

inline static constexpr unsigned int Class_1_F8D21125F3922568_TypeDefinitionIndex = 47959;

class Class_1_F8D21125F3922568 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _PromotionCostList_k__BackingField; // 0x10
	::Struct_2_EDE247AF05B200CA _Identifier_k__BackingField; // 0x18
	::System::UInt32 _WorldLevelRequire_k__BackingField; // 0x24
	::Struct_2_8276302FFC710853 _PropertyValues_k__BackingField; // 0x28
	::System::UInt32 _MaxLevel_k__BackingField; // 0xE8
	::System::UInt32 _PlayerLevelRequire_k__BackingField; // 0xEC

	::System::Void _ctor(::Struct_2_EDE247AF05B200CA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EDE247AF05B200CA))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_EDE247AF05B200CA get_Identifier()
	{
		return ((::Struct_2_EDE247AF05B200CA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_GET_IDENTIFIER_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_PromotionCostList()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_GET_PROMOTIONCOSTLIST_OFFSET))(this);
	}

	::System::Void set_PromotionCostList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_SET_PROMOTIONCOSTLIST_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_SET_MAXLEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_WorldLevelRequire()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_GET_WORLDLEVELREQUIRE_OFFSET))(this);
	}

	::System::Void set_WorldLevelRequire(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_SET_WORLDLEVELREQUIRE_OFFSET))(this, value);
	}

	::System::UInt32 get_PlayerLevelRequire()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_GET_PLAYERLEVELREQUIRE_OFFSET))(this);
	}

	::System::Void set_PlayerLevelRequire(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_SET_PLAYERLEVELREQUIRE_OFFSET))(this, value);
	}

	::Struct_2_8276302FFC710853 get_PropertyValues()
	{
		return ((::Struct_2_8276302FFC710853(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_GET_PROPERTYVALUES_OFFSET))(this);
	}

	::System::Void set_PropertyValues(::Struct_2_8276302FFC710853 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8276302FFC710853))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_SET_PROPERTYVALUES_OFFSET))(this, value);
	}

	::System::ValueTuple_4<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_4D0C00C67836AE79(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::ValueTuple_4<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F8D21125F3922568_METHOD_1_4D0C00C67836AE79_OFFSET))(this, a1);
	}
};
