#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_162.h"

class Class_1_075C34D03AFA1215_19;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GETADDEDMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1AA95F10)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GET_DECAYIDLIST_OFFSET UNITYSDK_OFFSET(0x1AA96050)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_SET_DECAYIDLIST_OFFSET UNITYSDK_OFFSET(0x1AA96060)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA94FE0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1AA95E20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellDecayData_TypeDefinitionIndex = 63928;

	class ChessRogueBoardCellDecayData : public ::Class_1_43BD383C98B4C0C5_162
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DecayIDList_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_075C34D03AFA1215_19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _SyncExtraInfo(::Class_1_075C34D03AFA1215_19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAddedMazeBuffIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GETADDEDMAZEBUFFIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DecayIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GET_DECAYIDLIST_OFFSET))(this);
		}

		::System::Void set_DecayIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_SET_DECAYIDLIST_OFFSET))(this, a1);
		}
	};
}
