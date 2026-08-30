#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4B9DE6693E86B2D4;
class Class_1_B346E41ADE670252;
namespace RPG::Client::Prop { class SnowballPuzzleBlockItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD2EA10)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD2EAB0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0xDD2EC90)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD2F200)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xDD2F960)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0xDD2FB60)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_8AFAC1382B331885_OFFSET UNITYSDK_OFFSET(0xDD2FAF0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xDD2FEB0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDD2F950)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD2F0F0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD2F250)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDD300A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SnowballPuzzleBoard_TypeDefinitionIndex = 78395;

	class SnowballPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		::System::String* PushSnowballTextID; // 0x68
		::System::Int32 MaxSnowballSize; // 0x70
		::System::Single SnowballMoveDuration; // 0x74
		::Class_1_4B9DE6693E86B2D4* PLNGIGDCFNC; // 0x78
		::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* NPGCHMPOLDP; // 0x80
		::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* CDDGLMLDCBI; // 0x88
		::Class_1_B346E41ADE670252* CPJCBKAIGPM; // 0x90
		::UnityEngine::Vector2Int IOOAHOBADCL; // 0x98
		::RPG::Client::Prop::BlockPuzzleLogicFourDirection AMLIEEFCOFC; // 0xA0
		::System::Int32 DOKCCOIBCKH; // 0xA4
		::UnityEngine::Vector2Int FBNHEFELKCI; // 0xA8
		::System::Single PEBDLEECBEE; // 0xB0
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0xB4
		::UnityEngine::Vector3 FCAOOKFEOHC; // 0xC0
		::System::Boolean JDPGFIBLFOP; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INIT_OFFSET))(this);
		}

		::System::Boolean Method_7_8AFAC1382B331885(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_8AFAC1382B331885_OFFSET))(this, a1);
		}

		::System::Void Method_7_394F35BBA0EE596A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_394F35BBA0EE596A_OFFSET))(this);
		}

		::System::Void Method_7_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_7_C706B1EC6D2E1C64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_C706B1EC6D2E1C64_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
