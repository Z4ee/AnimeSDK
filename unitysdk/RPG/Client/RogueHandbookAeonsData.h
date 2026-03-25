#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_6;
namespace RPG::GameCore { class RogueAeonDisplayRow; }
namespace RPG::GameCore { class RogueAeonListConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xA309320)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA309270)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_REDDOTLIST_OFFSET UNITYSDK_OFFSET(0xA308080)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA309210)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xA309280)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_INITROGUEHANDBOOKAEON_OFFSET UNITYSDK_OFFSET(0xA308360)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_ONDOCCLICKED_OFFSET UNITYSDK_OFFSET(0xA308C50)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xA308550)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3082A0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA__INITREDDOT_OFFSET UNITYSDK_OFFSET(0xA3090C0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xA308910)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookAeonsData_TypeDefinitionIndex = 54882;

	class RogueHandbookAeonsData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DocKeys; // 0x18
		::System::Collections::Generic::List_1<::System::Boolean>* DocUnlockStatus; // 0x20
		::System::UInt32 _RogueAeonHandbookID; // 0x28
		::System::Boolean IsUnLocked; // 0x2C

		::System::Void _ctor(::RPG::GameCore::RogueAeonListConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAeonListConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void UpdateByServer(::Class_1_53763D498DB8321D_6* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_UPDATEBYSERVER_OFFSET))(this, data);
		}

		::System::Void OnDocClicked(::System::UInt32 docID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_ONDOCCLICKED_OFFSET))(this, docID);
		}

		::System::Void InitRogueHandbookAeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_INITROGUEHANDBOOKAEON_OFFSET))(this);
		}

		::System::Void _InitRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA__INITREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateRedDot(::System::UInt32 currentDoc)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA__UPDATEREDDOT_OFFSET))(this, currentDoc);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_REDDOTLIST_OFFSET))(this);
		}

		::RPG::GameCore::RogueAeonListConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RogueAeonListConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_SORTID_OFFSET))(this);
		}

		::RPG::GameCore::RogueAeonDisplayRow* get_DisplayRow()
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA_GET_DISPLAYROW_OFFSET))(this);
		}
	};
}
