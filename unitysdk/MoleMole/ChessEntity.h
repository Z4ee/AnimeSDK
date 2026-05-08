#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"

class Class_5_AF65C3A968E836D2;
namespace MoleMole { class ConfigChessEntity; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSENTITY_CREATEHOLLOWENTITY_OFFSET UNITYSDK_OFFSET(0x17D0BB60)
#define MOLEMOLE_CHESSENTITY_GETCUSTOMDATAFLOAT_OFFSET UNITYSDK_OFFSET(0x17D0BF00)
#define MOLEMOLE_CHESSENTITY_GETCUSTOMDATASTRING_OFFSET UNITYSDK_OFFSET(0x17D0C0B0)
#define MOLEMOLE_CHESSENTITY_GET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0x17D0C1A0)
#define MOLEMOLE_CHESSENTITY_GET_CHESSBOARD_OFFSET UNITYSDK_OFFSET(0x17D0AD80)
#define MOLEMOLE_CHESSENTITY_GET_HOLLOWENTITY_OFFSET UNITYSDK_OFFSET(0x17D0A770)
#define MOLEMOLE_CHESSENTITY_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x17D0A960)
#define MOLEMOLE_CHESSENTITY_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x17D0A6C0)
#define MOLEMOLE_CHESSENTITY_GET_VECTOR2POSITION_OFFSET UNITYSDK_OFFSET(0x17D0ACD0)
#define MOLEMOLE_CHESSENTITY_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x17D0BCD0)
#define MOLEMOLE_CHESSENTITY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17D0B9D0)
#define MOLEMOLE_CHESSENTITY_MOVE_1_OFFSET UNITYSDK_OFFSET(0x17D0B190)
#define MOLEMOLE_CHESSENTITY_MOVE_OFFSET UNITYSDK_OFFSET(0x17D0ADA0)
#define MOLEMOLE_CHESSENTITY_ONADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x17D0BD70)
#define MOLEMOLE_CHESSENTITY_ONADD_OFFSET UNITYSDK_OFFSET(0x17D0BBD0)
#define MOLEMOLE_CHESSENTITY_ONINITINTERNAL_OFFSET UNITYSDK_OFFSET(0x17D0BD20)
#define MOLEMOLE_CHESSENTITY_ONINIT_OFFSET UNITYSDK_OFFSET(0x17D0BA50)
#define MOLEMOLE_CHESSENTITY_ONMOVE_OFFSET UNITYSDK_OFFSET(0x17D0B420)
#define MOLEMOLE_CHESSENTITY_ONREMOVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17D0BDB0)
#define MOLEMOLE_CHESSENTITY_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x17D0BC50)
#define MOLEMOLE_CHESSENTITY_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17D0BDF0)
#define MOLEMOLE_CHESSENTITY_PLAYMOVEANIM_OFFSET UNITYSDK_OFFSET(0x17D0B460)
#define MOLEMOLE_CHESSENTITY_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17D0BA10)
#define MOLEMOLE_CHESSENTITY_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17D0B990)
#define MOLEMOLE_CHESSENTITY_SETCUSTOMDATA_1_OFFSET UNITYSDK_OFFSET(0x17D0BFF0)
#define MOLEMOLE_CHESSENTITY_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x17D0BE30)
#define MOLEMOLE_CHESSENTITY_SET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0x17D0C1B0)
#define MOLEMOLE_CHESSENTITY_SET_CHESSBOARD_OFFSET UNITYSDK_OFFSET(0x17D0AD90)
#define MOLEMOLE_CHESSENTITY_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x17D0AB40)
#define MOLEMOLE_CHESSENTITY_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x17D0A8C0)
#define MOLEMOLE_CHESSENTITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x17D0B940)
#define MOLEMOLE_CHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0A5C0)

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntity_TypeDefinitionIndex = 76208;

	class ChessEntity : public ::System::Object
	{
	public:
		::Class_5_AF65C3A968E836D2* _Chessboard_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* customDataFloat; // 0x18
		::MoleMole::ConfigChessEntity* config; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* customDataString; // 0x28
		::System::UInt32 _BindEntity_k__BackingField; // 0x30
		::System::Int32 _runtimeID; // 0x34
		::System::Boolean isToBeRemoved; // 0x38
		::System::Boolean isRemoved; // 0x39
		::System::Boolean removed; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_runtimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_runtimeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_SET_RUNTIMEID_OFFSET))(this, value);
		}

		::MoleMole::HollowChessboard::HollowCell get_Position()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::MoleMole::HollowChessboard::HollowCell value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_SET_POSITION_OFFSET))(this, value);
		}

		::MoleMole::Vector2Int get_Vector2Position()
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GET_VECTOR2POSITION_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowEntity* get_HollowEntity()
		{
			return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GET_HOLLOWENTITY_OFFSET))(this);
		}

		::Class_5_AF65C3A968E836D2* get_Chessboard()
		{
			return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GET_CHESSBOARD_OFFSET))(this);
		}

		::System::Void set_Chessboard(::Class_5_AF65C3A968E836D2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_SET_CHESSBOARD_OFFSET))(this, value);
		}

		::System::Boolean Move(::Share::GridDir dir)
		{
			return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_MOVE_OFFSET))(this, dir);
		}

		::System::Void Move_1(::Share::GridDir dir, ::MoleMole::HollowChessboard::HollowCell newPosition)
		{
			return ((::System::Void(*)(::PVOID, ::Share::GridDir, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_MOVE_1_OFFSET))(this, dir, newPosition);
		}

		::System::Void PlayMoveAnim(::Share::GridDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_PLAYMOVEANIM_OFFSET))(this, dir);
		}

		::System::Void OnMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONMOVE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_UPDATE_OFFSET))(this);
		}

		::System::Void PreLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_PRELATEUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnInit(::MoleMole::ConfigChessEntity* configChessEntity, ::MoleMole::HollowChessboard::HollowCell chessIndex, ::Class_5_AF65C3A968E836D2* currentChessboard)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigChessEntity*, ::MoleMole::HollowChessboard::HollowCell, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONINIT_OFFSET))(this, configChessEntity, chessIndex, currentChessboard);
		}

		::System::Void OnAdd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONADD_OFFSET))(this);
		}

		::System::Void OnRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONREMOVE_OFFSET))(this);
		}

		::System::Void HandleEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_HANDLEEVENT_OFFSET))(this, eventName);
		}

		::System::Void OnInitInternal(::MoleMole::ConfigChessEntity* configChessEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONINITINTERNAL_OFFSET))(this, configChessEntity);
		}

		::System::Void OnAddInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONADDINTERNAL_OFFSET))(this);
		}

		::System::Void OnRemoveInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONREMOVEINTERNAL_OFFSET))(this);
		}

		::System::Void OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_ONUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void SetCustomData(::System::String* key, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_SETCUSTOMDATA_OFFSET))(this, key, value);
		}

		::System::Single GetCustomDataFloat(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GETCUSTOMDATAFLOAT_OFFSET))(this, key);
		}

		::System::Void SetCustomData_1(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_SETCUSTOMDATA_1_OFFSET))(this, key, value);
		}

		::System::String* GetCustomDataString(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GETCUSTOMDATASTRING_OFFSET))(this, key);
		}

		::MoleMole::HollowChessboard::HollowEntity* CreateHollowEntity()
		{
			return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_CREATEHOLLOWENTITY_OFFSET))(this);
		}

		::System::UInt32 get_BindEntity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_GET_BINDENTITY_OFFSET))(this);
		}

		::System::Void set_BindEntity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITY_SET_BINDENTITY_OFFSET))(this, value);
		}
	};
}
