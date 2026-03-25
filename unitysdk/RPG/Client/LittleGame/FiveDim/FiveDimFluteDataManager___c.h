#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteDataGroup; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x99FE5C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99FE600)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__GETUNLOCKFIVEDIMFLUTEDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0x99FE610)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteDataManager___c_TypeDefinitionIndex = 62879;

	class FiveDimFluteDataManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataManager___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataManager___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimFluteDataManager___c_TypeDefinitionIndex)->GetStaticField(0x24C80);
		}
		static ::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimFluteDataManager___c_TypeDefinitionIndex)->GetStaticField(0x24C88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetUnlockFiveDimFluteData_b__3_0(::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup* a, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAMANAGER___C__GETUNLOCKFIVEDIMFLUTEDATA_B__3_0_OFFSET))(this, a, b);
		}
	};
}
