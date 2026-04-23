#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_80F1C435D9978BF7_3;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETCOSTENERGY_OFFSET UNITYSDK_OFFSET(0xB127070)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xB127230)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xB1271E0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_CURENERGY_OFFSET UNITYSDK_OFFSET(0xB127410)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xB127430)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xB127270)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REFRESH_OFFSET UNITYSDK_OFFSET(0xB126E40)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REPORTBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0xB127150)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_CURENERGY_OFFSET UNITYSDK_OFFSET(0xB127420)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xB127440)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xB126A90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchEnhanceBuff_TypeDefinitionIndex = 62056;

	class RogueWorkBenchEnhanceBuff : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueBuffCategory, ::System::UInt32>* _CostData; // 0x10
		::System::UInt32 _FuncID; // 0x18
		::System::UInt32 _MaxEnergy_k__BackingField; // 0x1C
		::System::UInt32 _CurEnergy_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_80F1C435D9978BF7_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_80F1C435D9978BF7_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchEnhanceBuff* detail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchEnhanceBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REFRESH_OFFSET))(this, detail);
		}

		::System::UInt32 GetCostEnergy(::RPG::GameCore::RogueBuffCategory buffCategory)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueBuffCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETCOSTENERGY_OFFSET))(this, buffCategory);
		}

		::System::Void ReportBuffSelection(::RPG::Client::RogueBuffData* selectedBuffData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REPORTBUFFSELECTION_OFFSET))(this, selectedBuffData);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::UInt32 get_CurEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_CURENERGY_OFFSET))(this);
		}

		::System::Void set_CurEnergy(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_CURENERGY_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_MAXENERGY_OFFSET))(this);
		}

		::System::Void set_MaxEnergy(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_MAXENERGY_OFFSET))(this, value);
		}
	};
}
