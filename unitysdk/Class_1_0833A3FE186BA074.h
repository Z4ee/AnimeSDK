#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_409;
class Class_1_064B1A3CD66F9E89;
class Class_1_526C2C5F58C0A6C2;
class Class_1_649B7D3FAC2110AE;
class Class_1_BECD8CCB07AF9CB3;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveData; }
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }
namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }
namespace RPGTools::Timeline { class CharacterStoryMoveStopData; }
namespace UnityEngine { class Animator; }

#define CLASS_1_0833A3FE186BA074_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13951570)
#define CLASS_1_0833A3FE186BA074_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x13950A50)
#define CLASS_1_0833A3FE186BA074_METHOD_1_0D3911A122ED3959_OFFSET UNITYSDK_OFFSET(0x13950E50)
#define CLASS_1_0833A3FE186BA074_METHOD_1_11B36F15BBFE78DA_OFFSET UNITYSDK_OFFSET(0x13951330)
#define CLASS_1_0833A3FE186BA074_METHOD_1_35565CD9C6FB6400_OFFSET UNITYSDK_OFFSET(0x13951C30)
#define CLASS_1_0833A3FE186BA074_METHOD_1_3F03CE06D6F0B151_OFFSET UNITYSDK_OFFSET(0x13950A70)
#define CLASS_1_0833A3FE186BA074_METHOD_1_43904F79FE24A79C_OFFSET UNITYSDK_OFFSET(0x139510B0)
#define CLASS_1_0833A3FE186BA074_METHOD_1_9DCF3550EA1947E7_OFFSET UNITYSDK_OFFSET(0x13950FD0)
#define CLASS_1_0833A3FE186BA074_METHOD_1_A5E077B8DDABB633_OFFSET UNITYSDK_OFFSET(0x13951730)
#define CLASS_1_0833A3FE186BA074_METHOD_1_D2BAA168A0792E89_OFFSET UNITYSDK_OFFSET(0x139512B0)
#define CLASS_1_0833A3FE186BA074_METHOD_1_E5E53384AAFBF184_OFFSET UNITYSDK_OFFSET(0x139514B0)
#define CLASS_1_0833A3FE186BA074_METHOD_1_EB6A0187C2E55A74_OFFSET UNITYSDK_OFFSET(0x13950D90)
#define CLASS_1_0833A3FE186BA074_METHOD_1_EEB7AD9AD74B5FBF_OFFSET UNITYSDK_OFFSET(0x13950CA0)
#define CLASS_1_0833A3FE186BA074_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x13951650)
#define CLASS_1_0833A3FE186BA074_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x13950A60)
#define CLASS_1_0833A3FE186BA074__CTOR_OFFSET UNITYSDK_OFFSET(0x13951D90)

inline static constexpr unsigned int Class_1_0833A3FE186BA074_TypeDefinitionIndex = 50057;

class Class_1_0833A3FE186BA074 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_409* Field_1_0; // 0x10
	::System::Boolean _Active_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Active()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_GET_ACTIVE_OFFSET))(this);
	}

	::System::Void set_Active(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_SET_ACTIVE_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F03CE06D6F0B151(::RPGTools::Timeline::CharacterStoryMoveData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_3F03CE06D6F0B151_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0D3911A122ED3959(::RPGTools::Timeline::CharacterStoryMoveSequenceData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveSequenceData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_0D3911A122ED3959_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_43904F79FE24A79C(::RPGTools::Timeline::CharacterStoryMoveStartData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStartData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_43904F79FE24A79C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_11B36F15BBFE78DA(::RPGTools::Timeline::CharacterStoryMoveStopData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStopData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_11B36F15BBFE78DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_EEB7AD9AD74B5FBF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_EEB7AD9AD74B5FBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5E077B8DDABB633(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_A5E077B8DDABB633_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_35565CD9C6FB6400(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_35565CD9C6FB6400_OFFSET))(this, a1, a2);
	}

	::Class_1_BECD8CCB07AF9CB3* Method_1_EB6A0187C2E55A74(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode a3)
	{
		return ((::Class_1_BECD8CCB07AF9CB3*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_EB6A0187C2E55A74_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_526C2C5F58C0A6C2* Method_1_9DCF3550EA1947E7(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::Class_1_526C2C5F58C0A6C2*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_9DCF3550EA1947E7_OFFSET))(this, a1, a2);
	}

	::Class_1_064B1A3CD66F9E89* Method_1_D2BAA168A0792E89(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode a3)
	{
		return ((::Class_1_064B1A3CD66F9E89*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_D2BAA168A0792E89_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_649B7D3FAC2110AE* Method_1_E5E53384AAFBF184(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::Class_1_649B7D3FAC2110AE*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_0833A3FE186BA074_METHOD_1_E5E53384AAFBF184_OFFSET))(this, a1, a2);
	}
};
