#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_41E8D8AC94A3CEEA;
class Class_1_E87825DEC8ADB719;
namespace RPG::Client::Prop { class SnowballPuzzleBlockItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA15E0E0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA15E180)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0xA15E370)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA15E940)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xA15F0B0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xA15F670)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0xA15F2C0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_8AFAC1382B331885_OFFSET UNITYSDK_OFFSET(0xA15F250)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_9E4A588007EADEEC_OFFSET UNITYSDK_OFFSET(0xA15FAD0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA15F0A0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA15E830)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA15E990)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA15F880)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA15F8B0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA15F8C0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA15F9C0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA15F960)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA15FA60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SnowballPuzzleBoard_TypeDefinitionIndex = 64315;

	class SnowballPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		::System::String* PushSnowballTextID; // 0x68
		::System::Int32 MaxSnowballSize; // 0x70
		::System::Single SnowballMoveDuration; // 0x74
		::Class_1_41E8D8AC94A3CEEA* Field_7_3; // 0x78
		::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* Field_7_4; // 0x80
		::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* Field_7_5; // 0x88
		::Class_1_E87825DEC8ADB719* Field_7_6; // 0x90
		::UnityEngine::Vector2Int Field_7_7; // 0x98
		::RPG::Client::Prop::BlockPuzzleLogicFourDirection Field_7_8; // 0xA0
		::System::Int32 Field_7_9; // 0xA4
		::UnityEngine::Vector2Int Field_7_10; // 0xA8
		::System::Single Field_7_11; // 0xB0
		::UnityEngine::Vector3 Field_7_12; // 0xB4
		::UnityEngine::Vector3 Field_7_13; // 0xC0
		::System::Boolean Field_7_14; // 0xCC

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

		::System::Void Method_7_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_33E2FA8E6403B93D_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}

		::System::Boolean Method_7_9E4A588007EADEEC(::UnityEngine::Vector2Int P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_METHOD_7_9E4A588007EADEEC_OFFSET))(this, P0);
		}
	};
}
