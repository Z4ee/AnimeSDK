#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_EACHLAYERDATA_GETCENTERS_OFFSET UNITYSDK_OFFSET(0x144DC840)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_EACHLAYERDATA_GET_COLUMNNUM_OFFSET UNITYSDK_OFFSET(0x144DC820)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_EACHLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x144DCB10)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoBangbooPartyDemoPara_EachLayerData_TypeDefinitionIndex = 52004;

	class MonoBangbooPartyDemoPara_EachLayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* layerBlockNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_EACHLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_columnNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_EACHLAYERDATA_GET_COLUMNNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetCenters()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_EACHLAYERDATA_GETCENTERS_OFFSET))(this);
		}
	};
}
