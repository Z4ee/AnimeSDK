#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_508C95C113FD1632;
class Class_1_FA4F4A67B1C04320_753;
class Class_1_FA4F4A67B1C04320_754;
namespace RPG::Client { class RogueKeywordData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEKEYWORDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA312E60)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYBUFFID_OFFSET UNITYSDK_OFFSET(0xA313040)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYFORMULAID_OFFSET UNITYSDK_OFFSET(0xA313570)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYBUFFID_OFFSET UNITYSDK_OFFSET(0xA312ED0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYFORMULAID_OFFSET UNITYSDK_OFFSET(0xA313400)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETROGUEKEYWORDDATA_OFFSET UNITYSDK_OFFSET(0xA312B40)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_ACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0xA3139E0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_ISKEYOPEN_OFFSET UNITYSDK_OFFSET(0xA313930)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_KEYWORDDATALIST_OFFSET UNITYSDK_OFFSET(0xA3128F0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNCACTIVATE_OFFSET UNITYSDK_OFFSET(0xA312C60)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNCDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xA312E00)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA3124B0)
#define RPG_CLIENT_ROGUEKEYWORDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA313BE0)
#define RPG_CLIENT_ROGUEKEYWORDINFO__SORT_OFFSET UNITYSDK_OFFSET(0xA312960)
#define RPG_CLIENT_ROGUEKEYWORDINFO__UPDATEACTIVATE_OFFSET UNITYSDK_OFFSET(0xA312CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueKeywordInfo_TypeDefinitionIndex = 54780;

	class RogueKeywordInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* _KeywordDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_508C95C113FD1632* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_508C95C113FD1632*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::RogueKeywordData* GetRogueKeywordData(::System::UInt32 id)
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETROGUEKEYWORDDATA_OFFSET))(this, id);
		}

		::System::Void SyncActivate(::Class_1_FA4F4A67B1C04320_753* activateResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_753*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNCACTIVATE_OFFSET))(this, activateResult);
		}

		::System::Void SyncDeactivate(::Class_1_FA4F4A67B1C04320_754* deactivateResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_754*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNCDEACTIVATE_OFFSET))(this, deactivateResult);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetKeywordExtraEffectIDListByBuffID(::System::UInt32 buffId, ::System::Boolean isCheckActivate)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYBUFFID_OFFSET))(this, buffId, isCheckActivate);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetKeywordExtraEffectIDListByFormulaID(::System::UInt32 formulaId, ::System::Boolean isCheckActivate)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYFORMULAID_OFFSET))(this, formulaId, isCheckActivate);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* GetKeywordDataListByBuffID(::System::UInt32 buffId, ::System::Boolean isCheckActivate)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYBUFFID_OFFSET))(this, buffId, isCheckActivate);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* GetKeywordDataListByFormulaID(::System::UInt32 formulaId, ::System::Boolean isCheckActivate)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYFORMULAID_OFFSET))(this, formulaId, isCheckActivate);
		}

		::System::Void _UpdateActivate(::System::UInt32 id, ::System::Boolean isActivate)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO__UPDATEACTIVATE_OFFSET))(this, id, isActivate);
		}

		::System::Void _Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO__SORT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* get_KeywordDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GET_KEYWORDDATALIST_OFFSET))(this);
		}

		::System::Boolean get_IsKeyOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GET_ISKEYOPEN_OFFSET))(this);
		}

		::System::UInt32 get_ActivateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GET_ACTIVATECOUNT_OFFSET))(this);
		}
	};
}
