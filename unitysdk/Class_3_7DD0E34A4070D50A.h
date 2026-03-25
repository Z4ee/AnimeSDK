#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBaseSelector_1.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceNearRowsSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7DD0E34A4070D50A_METHOD_3_5953A09C023DFEF3_OFFSET UNITYSDK_OFFSET(0x16712730)
#define CLASS_3_7DD0E34A4070D50A_METHOD_3_E3E88E8D7661F936_OFFSET UNITYSDK_OFFSET(0x16712880)
#define CLASS_3_7DD0E34A4070D50A__CTOR_OFFSET UNITYSDK_OFFSET(0x167127D0)

inline static constexpr unsigned int Class_3_7DD0E34A4070D50A_TypeDefinitionIndex = 29087;

class Class_3_7DD0E34A4070D50A : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBaseSelector_1<::RPG::GameCore::CakeRaceNearRowsSelectorConfig*>
{
public:
	::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* Field_3_0; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DD0E34A4070D50A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_7DD0E34A4070D50A* Method_3_5953A09C023DFEF3(::System::Int32 a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_3_7DD0E34A4070D50A*(*)(::System::Int32, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DD0E34A4070D50A_METHOD_3_5953A09C023DFEF3_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>* Method_3_E3E88E8D7661F936()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DD0E34A4070D50A_METHOD_3_E3E88E8D7661F936_OFFSET))(this);
	}
};
