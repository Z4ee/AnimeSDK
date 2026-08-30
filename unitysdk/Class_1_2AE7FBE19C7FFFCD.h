#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickControlType.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickDirectionType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2AE7FBE19C7FFFCD_GET_BRICKCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xBDD43F0)
#define CLASS_1_2AE7FBE19C7FFFCD_GET_BRICKDIRECTIONMODE_OFFSET UNITYSDK_OFFSET(0xBDD4410)
#define CLASS_1_2AE7FBE19C7FFFCD_GET_KEYBOARDUSEWROTATE_OFFSET UNITYSDK_OFFSET(0xBDD4450)
#define CLASS_1_2AE7FBE19C7FFFCD_GET_MOBILEUSEBTNROTATE_OFFSET UNITYSDK_OFFSET(0xBDD4430)
#define CLASS_1_2AE7FBE19C7FFFCD_SET_BRICKCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xBDD4400)
#define CLASS_1_2AE7FBE19C7FFFCD_SET_BRICKDIRECTIONMODE_OFFSET UNITYSDK_OFFSET(0xBDD4420)
#define CLASS_1_2AE7FBE19C7FFFCD_SET_KEYBOARDUSEWROTATE_OFFSET UNITYSDK_OFFSET(0xBDD4460)
#define CLASS_1_2AE7FBE19C7FFFCD_SET_MOBILEUSEBTNROTATE_OFFSET UNITYSDK_OFFSET(0xBDD4440)
#define CLASS_1_2AE7FBE19C7FFFCD__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD4470)

inline static constexpr unsigned int Class_1_2AE7FBE19C7FFFCD_TypeDefinitionIndex = 78554;

class Class_1_2AE7FBE19C7FFFCD : public ::System::Object
{
public:
	::RPG::Client::TeamTowers::BrickDirectionType _BrickDirectionMode_k__BackingField; // 0x10
	::RPG::Client::TeamTowers::BrickControlType _BrickControlMode_k__BackingField; // 0x14
	::System::Boolean _MobileUseBtnRotate_k__BackingField; // 0x18
	::System::Boolean _KeyBoardUseWRotate_k__BackingField; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD__CTOR_OFFSET))(this);
	}

	::RPG::Client::TeamTowers::BrickControlType get_BrickControlMode()
	{
		return ((::RPG::Client::TeamTowers::BrickControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_GET_BRICKCONTROLMODE_OFFSET))(this);
	}

	::System::Void set_BrickControlMode(::RPG::Client::TeamTowers::BrickControlType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::BrickControlType))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_SET_BRICKCONTROLMODE_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::BrickDirectionType get_BrickDirectionMode()
	{
		return ((::RPG::Client::TeamTowers::BrickDirectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_GET_BRICKDIRECTIONMODE_OFFSET))(this);
	}

	::System::Void set_BrickDirectionMode(::RPG::Client::TeamTowers::BrickDirectionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::BrickDirectionType))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_SET_BRICKDIRECTIONMODE_OFFSET))(this, a1);
	}

	::System::Boolean get_MobileUseBtnRotate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_GET_MOBILEUSEBTNROTATE_OFFSET))(this);
	}

	::System::Void set_MobileUseBtnRotate(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_SET_MOBILEUSEBTNROTATE_OFFSET))(this, a1);
	}

	::System::Boolean get_KeyBoardUseWRotate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_GET_KEYBOARDUSEWROTATE_OFFSET))(this);
	}

	::System::Void set_KeyBoardUseWRotate(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2AE7FBE19C7FFFCD_SET_KEYBOARDUSEWROTATE_OFFSET))(this, a1);
	}
};
