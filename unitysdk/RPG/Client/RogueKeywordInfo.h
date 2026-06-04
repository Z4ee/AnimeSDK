#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DD471F282DD1D78;
class Class_1_D17272E82AE804C2_828;
class Class_1_D17272E82AE804C2_829;
namespace RPG::Client { class RogueKeywordData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEKEYWORDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7977C0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYBUFFID_OFFSET UNITYSDK_OFFSET(0xC797A10)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYFORMULAID_OFFSET UNITYSDK_OFFSET(0xC798010)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYBUFFID_OFFSET UNITYSDK_OFFSET(0xC797830)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYFORMULAID_OFFSET UNITYSDK_OFFSET(0xC797E30)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETROGUEKEYWORDDATA_OFFSET UNITYSDK_OFFSET(0xC797440)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_ACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0xC7984E0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_ISKEYOPEN_OFFSET UNITYSDK_OFFSET(0xC798430)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_KEYWORDDATALIST_OFFSET UNITYSDK_OFFSET(0xC7971C0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNCACTIVATE_OFFSET UNITYSDK_OFFSET(0xC797570)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNCDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xC797760)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC796D70)
#define RPG_CLIENT_ROGUEKEYWORDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC798700)
#define RPG_CLIENT_ROGUEKEYWORDINFO__SORT_OFFSET UNITYSDK_OFFSET(0xC797230)
#define RPG_CLIENT_ROGUEKEYWORDINFO__UPDATEACTIVATE_OFFSET UNITYSDK_OFFSET(0xC7975D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueKeywordInfo_TypeDefinitionIndex = 62901;

	class RogueKeywordInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* _KeywordDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_3DD471F282DD1D78* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3DD471F282DD1D78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::RogueKeywordData* GetRogueKeywordData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETROGUEKEYWORDDATA_OFFSET))(this, a1);
		}

		::System::Void SyncActivate(::Class_1_D17272E82AE804C2_828* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_828*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNCACTIVATE_OFFSET))(this, a1);
		}

		::System::Void SyncDeactivate(::Class_1_D17272E82AE804C2_829* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_829*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNCDEACTIVATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetKeywordExtraEffectIDListByBuffID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYBUFFID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetKeywordExtraEffectIDListByFormulaID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYFORMULAID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* GetKeywordDataListByBuffID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYBUFFID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* GetKeywordDataListByFormulaID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYFORMULAID_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateActivate(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO__UPDATEACTIVATE_OFFSET))(this, a1, a2);
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
