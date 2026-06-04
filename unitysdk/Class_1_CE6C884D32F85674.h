#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournBuffRow; }
namespace System { class String; }

#define CLASS_1_CE6C884D32F85674_GETAEONCROSSICON_OFFSET UNITYSDK_OFFSET(0x13BC99F0)
#define CLASS_1_CE6C884D32F85674_GETBATTLEEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x13BC9A40)
#define CLASS_1_CE6C884D32F85674_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0x13BC98F0)
#define CLASS_1_CE6C884D32F85674_GETMAZEBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x13BC97A0)
#define CLASS_1_CE6C884D32F85674_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0x13BC9950)
#define CLASS_1_CE6C884D32F85674_GETROGUEBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0x13BC98A0)
#define CLASS_1_CE6C884D32F85674_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0x13BC9840)
#define CLASS_1_CE6C884D32F85674_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0x13BC99A0)
#define CLASS_1_CE6C884D32F85674_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x13BC97F0)
#define CLASS_1_CE6C884D32F85674_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x13BC9750)
#define CLASS_1_CE6C884D32F85674_ISVALID_OFFSET UNITYSDK_OFFSET(0x13BC9700)
#define CLASS_1_CE6C884D32F85674__CTOR_OFFSET UNITYSDK_OFFSET(0x13BC96C0)

inline static constexpr unsigned int Class_1_CE6C884D32F85674_TypeDefinitionIndex = 62837;

class Class_1_CE6C884D32F85674 : public ::System::Object
{
public:
	::RPG::GameCore::RogueTournBuffRow* Field_1_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_MazeBuffID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GET_MAZEBUFFID_OFFSET))(this);
	}

	::System::UInt32 GetMazeBuffLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETMAZEBUFFLEVEL_OFFSET))(this);
	}

	::System::UInt32 GetRogueBuffType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETROGUEBUFFTYPE_OFFSET))(this);
	}

	::System::UInt32 GetRogueBuffRarity()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETROGUEBUFFRARITY_OFFSET))(this);
	}

	::RPG::GameCore::RogueBuffCategory GetRogueBuffCategory()
	{
		return ((::RPG::GameCore::RogueBuffCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETROGUEBUFFCATEGORY_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* GetExtraEffectRowIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETEXTRAEFFECTROWIDS_OFFSET))(this);
	}

	::System::UInt32 GetRogueAeonID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETROGUEAEONID_OFFSET))(this);
	}

	::System::UInt32 GetRogueBuffTag()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETROGUEBUFFTAG_OFFSET))(this);
	}

	::System::String* GetAeonCrossIcon()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETAEONCROSSICON_OFFSET))(this);
	}

	::RPG::GameCore::RogueBuffAeonType GetBattleEventBuff()
	{
		return ((::RPG::GameCore::RogueBuffAeonType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6C884D32F85674_GETBATTLEEVENTBUFF_OFFSET))(this);
	}
};
