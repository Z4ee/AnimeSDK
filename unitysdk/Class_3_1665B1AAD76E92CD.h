#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBaseSelector_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceCatIdListSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_1665B1AAD76E92CD_METHOD_3_0128925DFD3059AD_OFFSET UNITYSDK_OFFSET(0x1C0A5AF0)
#define CLASS_3_1665B1AAD76E92CD_METHOD_3_5C553F197E195395_OFFSET UNITYSDK_OFFSET(0x1C0AA450)
#define CLASS_3_1665B1AAD76E92CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AA420)

inline static constexpr unsigned int Class_3_1665B1AAD76E92CD_TypeDefinitionIndex = 36735;

class Class_3_1665B1AAD76E92CD : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBaseSelector_1<::RPG::GameCore::CakeRaceCatIdListSelectorConfig*>
{
public:
	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1665B1AAD76E92CD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_1665B1AAD76E92CD* Method_3_0128925DFD3059AD(::System::Int32 a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_3_1665B1AAD76E92CD*(*)(::System::Int32, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1665B1AAD76E92CD_METHOD_3_0128925DFD3059AD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>* Method_3_5C553F197E195395()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1665B1AAD76E92CD_METHOD_3_5C553F197E195395_OFFSET))(this);
	}
};
