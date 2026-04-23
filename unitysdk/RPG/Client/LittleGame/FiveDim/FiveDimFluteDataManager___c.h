#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteDataGroup; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6A8D30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A8D70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__GETUNLOCKFIVEDIMFLUTEDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xA6A8D80)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteDataManager___c_TypeDefinitionIndex = 70918;

	class FiveDimFluteDataManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataManager___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataManager___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimFluteDataManager___c_TypeDefinitionIndex)->GetStaticField(0x2E8A0);
		}
		static ::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimFluteDataManager___c_TypeDefinitionIndex)->GetStaticField(0x2E8A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetUnlockFiveDimFluteData_b__5_0(::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup* a, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__GETUNLOCKFIVEDIMFLUTEDATA_B__5_0_OFFSET))(this, a, b);
		}
	};
}
