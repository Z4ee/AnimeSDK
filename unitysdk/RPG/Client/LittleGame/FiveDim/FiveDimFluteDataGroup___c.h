#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC44CA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC44CE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__GETFLUTEDATALIST_B__9_0_OFFSET UNITYSDK_OFFSET(0x1AC44CF0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteDataGroup___c_TypeDefinitionIndex = 76741;

	class FiveDimFluteDataGroup___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimFluteDataGroup___c_TypeDefinitionIndex)->GetStaticField(0x60590);
		}
		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimFluteDataGroup___c_TypeDefinitionIndex)->GetStaticField(0x60598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFluteDataList_b__9_0(::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__GETFLUTEDATALIST_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
