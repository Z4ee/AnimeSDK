#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBaseSelector_1.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceCoreRectTrapSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_BF9DF9D2DDDA635F_METHOD_3_915027A9903DAF9C_OFFSET UNITYSDK_OFFSET(0x17DD8BE0)
#define CLASS_3_BF9DF9D2DDDA635F_METHOD_3_C56278DE475F1EF6_OFFSET UNITYSDK_OFFSET(0x17DD8CB0)
#define CLASS_3_BF9DF9D2DDDA635F__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD8C80)

inline static constexpr unsigned int Class_3_BF9DF9D2DDDA635F_TypeDefinitionIndex = 34814;

class Class_3_BF9DF9D2DDDA635F : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBaseSelector_1<::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*>
{
public:
	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BF9DF9D2DDDA635F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_BF9DF9D2DDDA635F* Method_3_915027A9903DAF9C(::System::Int32 a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_3_BF9DF9D2DDDA635F*(*)(::System::Int32, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BF9DF9D2DDDA635F_METHOD_3_915027A9903DAF9C_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>* Method_3_C56278DE475F1EF6()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF9DF9D2DDDA635F_METHOD_3_C56278DE475F1EF6_OFFSET))(this);
	}
};
