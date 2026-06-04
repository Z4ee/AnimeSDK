#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_80F1C435D9978BF7_3;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETCOSTENERGY_OFFSET UNITYSDK_OFFSET(0xC87B160)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xC87B360)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xC87B310)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_CURENERGY_OFFSET UNITYSDK_OFFSET(0xC87B500)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xC87B520)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC87B3A0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REFRESH_OFFSET UNITYSDK_OFFSET(0xC87AF70)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REPORTBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0xC87B230)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_CURENERGY_OFFSET UNITYSDK_OFFSET(0xC87B510)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xC87B530)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xC87ABC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchEnhanceBuff_TypeDefinitionIndex = 62989;

	class RogueWorkBenchEnhanceBuff : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueBuffCategory, ::System::UInt32>* _CostData; // 0x10
		::System::UInt32 _FuncID; // 0x18
		::System::UInt32 _CurEnergy_k__BackingField; // 0x1C
		::System::UInt32 _MaxEnergy_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_80F1C435D9978BF7_3* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_80F1C435D9978BF7_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchEnhanceBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchEnhanceBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 GetCostEnergy(::RPG::GameCore::RogueBuffCategory a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueBuffCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETCOSTENERGY_OFFSET))(this, a1);
		}

		::System::Void ReportBuffSelection(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REPORTBUFFSELECTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_CURENERGY_OFFSET))(this);
		}

		::System::Void set_CurEnergy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_CURENERGY_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_MAXENERGY_OFFSET))(this);
		}

		::System::Void set_MaxEnergy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_MAXENERGY_OFFSET))(this, a1);
		}
	};
}
