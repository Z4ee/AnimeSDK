#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2D33D4E16DA6E537;
class Class_1_D5D8B81C5F91714F;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client::Prop { class DestroyRootPuzzleChess; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class WaitForSeconds; }

#define CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x172C3F90)
#define CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172C4D50)
#define CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172C4DB0)
#define CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x172C4D60)
#define CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172C3F70)
#define CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x172C3550)

inline static constexpr unsigned int Class_1_D5D8B81C5F91714F__ActiveLauncherView_d__10_TypeDefinitionIndex = 78068;

class Class_1_D5D8B81C5F91714F__ActiveLauncherView_d__10 : public ::System::Object
{
public:
	::Class_1_D5D8B81C5F91714F* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::RPG::Client::Prop::DestroyRootPuzzleChess* _lastChess_5__3; // 0x20
	::RPG::Client::MonoEffectManager* _monoEffectManager_5__10; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>* chessDetectInfos; // 0x30
	::Class_1_2D33D4E16DA6E537* _curDetectInfo_5__2; // 0x38
	::UnityEngine::WaitForSeconds* waitSecond; // 0x40
	::RPG::Client::Prop::DestroyRootPuzzleChess* _chess_5__4; // 0x48
	::System::Int32 _i_5__6; // 0x50
	::System::Int32 _j_5__7; // 0x54
	::UnityEngine::Vector3 _chessPosition_5__9; // 0x58
	::UnityEngine::Vector3 _lastDirection_5__5; // 0x64
	::UnityEngine::Vector3 _lastChessPosition_5__8; // 0x70
	::System::Int32 __1__state; // 0x7C
	::System::Boolean result; // 0x80

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
