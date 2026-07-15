#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_C320CF7265193ED8;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchCost; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCID_OFFSET UNITYSDK_OFFSET(0x184DF390)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x184DF340)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETIFCOMPOSEVALIDBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x184DF2C0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x184DF530)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x184DF3D0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_REFRESH_OFFSET UNITYSDK_OFFSET(0x184DF250)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x184DF540)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184DECF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchComposeMiracle_TypeDefinitionIndex = 64358;

	class RogueWorkBenchComposeMiracle : public ::System::Object
	{
	public:
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMiracleCategory, ::System::Boolean>* _ValidMap; // 0x18
		::System::UInt32 _FuncID; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_C320CF7265193ED8* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C320CF7265193ED8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchComposeMiracle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchComposeMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_REFRESH_OFFSET))(this, a1);
		}

		::System::Boolean GetIfComposeValidByCategory(::RPG::GameCore::RogueMiracleCategory a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueMiracleCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETIFCOMPOSEVALIDBYCATEGORY_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_SET_COSTDATA_OFFSET))(this, a1);
		}
	};
}
