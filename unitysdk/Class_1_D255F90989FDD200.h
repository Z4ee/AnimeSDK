#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D255F90989FDD200_Class_3_F45D8B7BFE072517;
class Class_1_E559374AC4E5AD13;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D255F90989FDD200_METHOD_1_3795EDACEC2535CD_OFFSET UNITYSDK_OFFSET(0x1C184800)
#define CLASS_1_D255F90989FDD200__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C184900)

inline static constexpr unsigned int Class_1_D255F90989FDD200_TypeDefinitionIndex = 36681;

class Class_1_D255F90989FDD200 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_D255F90989FDD200_Class_3_F45D8B7BFE072517*>** StaticGet_BJCJKJMCDHO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_D255F90989FDD200_Class_3_F45D8B7BFE072517*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D255F90989FDD200_TypeDefinitionIndex)->GetStaticField(0x13BB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D255F90989FDD200__CCTOR_OFFSET))();
	}

	static ::Class_1_E559374AC4E5AD13* Method_1_3795EDACEC2535CD(::RPG::GameCore::CakeRaceActionBase* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_1_E559374AC4E5AD13*(*)(::RPG::GameCore::CakeRaceActionBase*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_D255F90989FDD200_METHOD_1_3795EDACEC2535CD_OFFSET))(a1, a2);
	}
};
