#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_45BB92167AED63A0_26;
class Class_1_99D6920D1B087AFE;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_BE316F2570FA4FE3;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelItemData; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewMutationEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_75B65B88FAFB3689_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAD3FAB0)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_3AECDB0879CF530C_OFFSET UNITYSDK_OFFSET(0xAD3E4E0)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_6A1857DED3D7CA92_OFFSET UNITYSDK_OFFSET(0xAD3F7D0)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_73A16A876A874842_OFFSET UNITYSDK_OFFSET(0xAD3EA20)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_8540E7DC340FE6E5_OFFSET UNITYSDK_OFFSET(0xAD3F870)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_87F4DD1168CD685D_OFFSET UNITYSDK_OFFSET(0xAD3ECD0)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_96537F492F552173_OFFSET UNITYSDK_OFFSET(0xAD3E680)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_FBCBC4BDC4F4AD7C_OFFSET UNITYSDK_OFFSET(0xAD3E730)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_FD569A8A6ED963D7_OFFSET UNITYSDK_OFFSET(0xAD3F760)
#define CLASS_1_75B65B88FAFB3689_METHOD_1_FFF9D361BBEF296A_OFFSET UNITYSDK_OFFSET(0xAD3E160)
#define CLASS_1_75B65B88FAFB3689_TICK_OFFSET UNITYSDK_OFFSET(0xAD3FC80)
#define CLASS_1_75B65B88FAFB3689__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3E720)

inline static constexpr unsigned int Class_1_75B65B88FAFB3689_TypeDefinitionIndex = 72864;

class Class_1_75B65B88FAFB3689 : public ::System::Object
{
public:
	::Class_1_3F1549C2A53A3A5B* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_75B65B88FAFB3689* Method_1_FFF9D361BBEF296A(::Class_1_99D6920D1B087AFE* a1)
	{
		return ((::Class_1_75B65B88FAFB3689*(*)(::Class_1_99D6920D1B087AFE*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_FFF9D361BBEF296A_OFFSET))(a1);
	}

	static ::Class_1_75B65B88FAFB3689* Method_1_FBCBC4BDC4F4AD7C(::System::UInt32 a1, ::RPG::Client::ChimeraDuelItemData* a2)
	{
		return ((::Class_1_75B65B88FAFB3689*(*)(::System::UInt32, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_FBCBC4BDC4F4AD7C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3AECDB0879CF530C(::Class_1_99D6920D1B087AFE* a1, ::RPG::Client::IChimeraDuelSkillData*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_99D6920D1B087AFE*, ::RPG::Client::IChimeraDuelSkillData*&))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_3AECDB0879CF530C_OFFSET))(a1, a2);
	}

	static ::Class_2_BE316F2570FA4FE3* Method_1_96537F492F552173(::Class_1_99D6920D1B087AFE* a1)
	{
		return ((::Class_2_BE316F2570FA4FE3*(*)(::Class_1_99D6920D1B087AFE*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_96537F492F552173_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*>* Method_1_73A16A876A874842(::Class_1_99D6920D1B087AFE* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*>*(*)(::Class_1_99D6920D1B087AFE*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_73A16A876A874842_OFFSET))(a1);
	}

	static ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* Method_1_87F4DD1168CD685D(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::Class_1_99D6920D1B087AFE* a2, ::Class_1_11B5C6B3FA66CD5A* a3)
	{
		return ((::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::Class_1_99D6920D1B087AFE*, ::Class_1_11B5C6B3FA66CD5A*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_87F4DD1168CD685D_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* Method_1_FD569A8A6ED963D7(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_FD569A8A6ED963D7_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* Method_1_8540E7DC340FE6E5(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::Class_1_45BB92167AED63A0_26* a2, ::Class_1_11B5C6B3FA66CD5A* a3)
	{
		return ((::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::Class_1_45BB92167AED63A0_26*, ::Class_1_11B5C6B3FA66CD5A*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_8540E7DC340FE6E5_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::Prop::ChimeraDuelShopViewMutationEffect* Method_1_6A1857DED3D7CA92(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::RPG::Client::Prop::ChimeraDuelShopViewMutationEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_METHOD_1_6A1857DED3D7CA92_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689_TICK_OFFSET))(this, a1);
	}
};
