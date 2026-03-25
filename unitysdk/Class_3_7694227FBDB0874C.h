#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBaseSelector_1.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceTopRankedCatSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_7694227FBDB0874C_METHOD_3_66F8220DF4B56032_OFFSET UNITYSDK_OFFSET(0x16694A90)
#define CLASS_3_7694227FBDB0874C_METHOD_3_CE00AE2448C95464_OFFSET UNITYSDK_OFFSET(0x166C83C0)
#define CLASS_3_7694227FBDB0874C__CTOR_OFFSET UNITYSDK_OFFSET(0x166C8390)

inline static constexpr unsigned int Class_3_7694227FBDB0874C_TypeDefinitionIndex = 29086;

class Class_3_7694227FBDB0874C : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBaseSelector_1<::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*>
{
public:
	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7694227FBDB0874C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_7694227FBDB0874C* Method_3_66F8220DF4B56032(::System::Int32 a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_3_7694227FBDB0874C*(*)(::System::Int32, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7694227FBDB0874C_METHOD_3_66F8220DF4B56032_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>* Method_3_CE00AE2448C95464()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7694227FBDB0874C_METHOD_3_CE00AE2448C95464_OFFSET))(this);
	}
};
