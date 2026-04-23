#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyMapMoveType.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_44;
class Class_1_66C20D6C355B068E_4;
class Class_1_A4F0FA6F81B0B135;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYMOVEPATHDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAAB1C50)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA_GET_PATHLIST_OFFSET UNITYSDK_OFFSET(0xAABBA40)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA_SET_PATHLIST_OFFSET UNITYSDK_OFFSET(0xAABBA50)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAABB7C0)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA__GETMOVETYPE_OFFSET UNITYSDK_OFFSET(0xAABB7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyMovePathData_TypeDefinitionIndex = 61039;

	class MonopolyMovePathData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>* _PathList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyMovePathData* Create(::Class_1_4BC858D7C27E10ED_44* rsp)
		{
			return ((::RPG::Client::MonopolyMovePathData*(*)(::Class_1_4BC858D7C27E10ED_44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA_CREATE_OFFSET))(rsp);
		}

		static ::RPG::GameCore::MonopolyMapMoveType _GetMoveType(::Class_1_66C20D6C355B068E_4* prev, ::Class_1_66C20D6C355B068E_4* next)
		{
			return ((::RPG::GameCore::MonopolyMapMoveType(*)(::Class_1_66C20D6C355B068E_4*, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA__GETMOVETYPE_OFFSET))(prev, next);
		}

		::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>* get_PathList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA_GET_PATHLIST_OFFSET))(this);
		}

		::System::Void set_PathList(::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA_SET_PATHLIST_OFFSET))(this, value);
		}
	};
}
