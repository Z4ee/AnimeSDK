#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9E209684D69E6FCD;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client::Prop { class AlchemyItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE31C70)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_GETSCALEBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1AE31070)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0x1AE32050)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1AE31F90)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1AE32850)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_2BFCE9C99CAEB90F_OFFSET UNITYSDK_OFFSET(0x1AE32A00)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1AE31E20)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1AE32480)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_907E8AD43F95E68A_OFFSET UNITYSDK_OFFSET(0x1AE33050)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x1AE328A0)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_ONITEMANIMEND_OFFSET UNITYSDK_OFFSET(0x1AE31AB0)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_QUITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1AE32940)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_RECORDDEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x1AE30D80)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x1AE325F0)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1AE32400)
#define RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE331F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AlchemyPuzzleBoard_TypeDefinitionIndex = 77734;

	class AlchemyPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::UnityEngine::Color Color1; // 0x48
		::UnityEngine::Color Color2; // 0x58
		::UnityEngine::Color ColorMix; // 0x68
		::System::String* ErrorToastTextID; // 0x78
		::System::Single BlockSize; // 0x80
		::System::Single AnimDuration; // 0x84
		::System::Boolean EAGLICIAOGP; // 0x88
		::System::Int32 MAMBEJLBODK; // 0x8C
		::System::Single LMBAGKBAEJE; // 0x90
		::UnityEngine::Vector3 EHEPPMDHLCC; // 0x94
		::System::Int32 AKDCJBENLEF; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>* DEIIIFPHIMO; // 0xA8
		::Class_1_9E209684D69E6FCD* MENMFMCLOBH; // 0xB0
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0xB8
		::System::Boolean KOIBFKMANPG; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void RecordDefaultSize(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_RECORDDEFAULTSIZE_OFFSET))(this, a1, a2);
		}

		::System::Single GetScaleBlockSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_GETSCALEBLOCKSIZE_OFFSET))(this);
		}

		::System::Void OnItemAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_ONITEMANIMEND_OFFSET))(this);
		}

		::System::Void QuitPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_QUITPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_EBAF10BBA97B82DD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_EBAF10BBA97B82DD_OFFSET))(this);
		}

		::System::Void Method_6_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_6_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_6_2BFCE9C99CAEB90F(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_2BFCE9C99CAEB90F_OFFSET))(this, a1);
		}

		::System::Void Method_6_907E8AD43F95E68A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLEBOARD_METHOD_6_907E8AD43F95E68A_OFFSET))(this, a1);
		}
	};
}
