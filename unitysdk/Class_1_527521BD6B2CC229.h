#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_527521BD6B2CC229_Class_3_AB3DCCDB3276A220;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_527521BD6B2CC229_METHOD_1_0B8A9F249531F691_OFFSET UNITYSDK_OFFSET(0x1C1CC1B0)
#define CLASS_1_527521BD6B2CC229_METHOD_1_48EE2C144A861A9B_OFFSET UNITYSDK_OFFSET(0x1C1C0010)
#define CLASS_1_527521BD6B2CC229__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1CC390)

inline static constexpr unsigned int Class_1_527521BD6B2CC229_TypeDefinitionIndex = 36720;

class Class_1_527521BD6B2CC229 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_527521BD6B2CC229_Class_3_AB3DCCDB3276A220*>** StaticGet_IMKPIEFOLHB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_527521BD6B2CC229_Class_3_AB3DCCDB3276A220*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_527521BD6B2CC229_TypeDefinitionIndex)->GetStaticField(0x17FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_527521BD6B2CC229__CCTOR_OFFSET))();
	}

	static ::Class_1_43BD383C98B4C0C5_19* Method_1_48EE2C144A861A9B(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_19*(*)(::RPG::GameCore::CakeRaceBasePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_527521BD6B2CC229_METHOD_1_48EE2C144A861A9B_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_19*>* Method_1_0B8A9F249531F691(::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_19*>*(*)(::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_527521BD6B2CC229_METHOD_1_0B8A9F249531F691_OFFSET))(a1, a2);
	}
};
