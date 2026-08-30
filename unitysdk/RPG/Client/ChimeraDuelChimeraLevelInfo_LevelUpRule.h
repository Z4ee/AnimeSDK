#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_CONVERTEXPTOLEVEL_OFFSET UNITYSDK_OFFSET(0x1C1C4590)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_CONVERTLEVELTOEXP_OFFSET UNITYSDK_OFFSET(0x1C1C44B0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_CREATEWITHCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x1C1C2DA0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_GETLEVELUPREQUIREDEXP_OFFSET UNITYSDK_OFFSET(0x1C1C4640)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_GET_MAXGAINEDEXP_OFFSET UNITYSDK_OFFSET(0x1C1C4460)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1C1C4450)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_READCONSTVALUEOFEXPBEFORELEVELUP_OFFSET UNITYSDK_OFFSET(0x1C1C3780)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C3A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_LevelUpRule_TypeDefinitionIndex = 63413;

	class ChimeraDuelChimeraLevelInfo_LevelUpRule : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _TotalExpAtLevel; // 0x10
		::System::Int32 _MaxLevel_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_MaxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Int32 get_MaxGainedExp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_GET_MAXGAINEDEXP_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ReadConstValueOfExpBeforeLevelUp(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_READCONSTVALUEOFEXPBEFORELEVELUP_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule* CreateWithConstValues(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_CREATEWITHCONSTVALUES_OFFSET))(a1, a2);
		}

		::System::Int32 ConvertExpToLevel(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_CONVERTEXPTOLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 ConvertLevelToExp(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_CONVERTLEVELTOEXP_OFFSET))(this, a1);
		}

		::System::Int32 GetLevelUpRequiredExp(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE_GETLEVELUPREQUIREDEXP_OFFSET))(this, a1);
		}
	};
}
