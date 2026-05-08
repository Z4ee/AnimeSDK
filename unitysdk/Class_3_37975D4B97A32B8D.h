#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_37975D4B97A32B8D_Enum_3_01E26C57B6422167.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_757A5862D4BBEE41;
class Class_3_883E597458B91E77;
class Class_3_AB70F28E05C9F5C5;
class Class_3_BA709FB56ED5FAC4;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_37975D4B97A32B8D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12DC78D0)
#define CLASS_3_37975D4B97A32B8D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12DC7CA0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_0452A295FE653F33_OFFSET UNITYSDK_OFFSET(0x12DCACA0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_0A74BB6B0427F4BB_OFFSET UNITYSDK_OFFSET(0x12DCB2D0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_0FF755CF0787BB5E_OFFSET UNITYSDK_OFFSET(0x12DC9B40)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_187CF17ADC55E89F_OFFSET UNITYSDK_OFFSET(0x12DC8F50)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_1AD73DF78C716BAC_OFFSET UNITYSDK_OFFSET(0x12DCB6B0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_20E903521A30139B_OFFSET UNITYSDK_OFFSET(0x12DC83B0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_39CE1821FE4C4506_OFFSET UNITYSDK_OFFSET(0x12DC9350)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_488ACBB39B5E6D73_OFFSET UNITYSDK_OFFSET(0x12DC9F90)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_572C872A7AC127C9_OFFSET UNITYSDK_OFFSET(0x12DCA2F0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_5FFF477DE12718CC_1_OFFSET UNITYSDK_OFFSET(0x12DCB1E0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x12DC7E90)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_6149DBD2316B59ED_OFFSET UNITYSDK_OFFSET(0x12DCB530)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_69F9975CDFA0163D_OFFSET UNITYSDK_OFFSET(0x12DCAFD0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_6B2BC02998B71E49_OFFSET UNITYSDK_OFFSET(0x12DCA590)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_9A56E9B05E5A1CF2_OFFSET UNITYSDK_OFFSET(0x12DCA720)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12DCB4A0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_C1D823BE89AD517A_OFFSET UNITYSDK_OFFSET(0x12DC8A90)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12DCBF20)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12DCAF40)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_CB17984F91355A2A_OFFSET UNITYSDK_OFFSET(0x12DC7F80)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_CCD3A3CB31F37578_OFFSET UNITYSDK_OFFSET(0x12DCBFB0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_D0BCC415DC40C016_OFFSET UNITYSDK_OFFSET(0x12DC84F0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_D653D08E1B95EA18_OFFSET UNITYSDK_OFFSET(0x12DC8920)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_DFCE6E55F18FF1DC_OFFSET UNITYSDK_OFFSET(0x12DC96A0)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_E33F53EB083F6486_OFFSET UNITYSDK_OFFSET(0x12DC9600)
#define CLASS_3_37975D4B97A32B8D_METHOD_3_FE75F91C465EB83A_OFFSET UNITYSDK_OFFSET(0x12DC8C80)
#define CLASS_3_37975D4B97A32B8D_UPDATE_OFFSET UNITYSDK_OFFSET(0x12DC7B00)
#define CLASS_3_37975D4B97A32B8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DC7E70)
#define CLASS_3_37975D4B97A32B8D__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC7E20)

inline static constexpr unsigned int Class_3_37975D4B97A32B8D_TypeDefinitionIndex = 65920;

class Class_3_37975D4B97A32B8D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_37975D4B97A32B8D_Enum_3_01E26C57B6422167* StaticGet_Field_3_3()
	{
		return (::Class_3_37975D4B97A32B8D_Enum_3_01E26C57B6422167*)Il2CppClass::FromTypeDefinitionIndex(Class_3_37975D4B97A32B8D_TypeDefinitionIndex)->GetStaticField(0xE450);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_37975D4B97A32B8D_TypeDefinitionIndex)->GetStaticField(0xE451);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_37975D4B97A32B8D_TypeDefinitionIndex)->GetStaticField(0xE452);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_37975D4B97A32B8D_TypeDefinitionIndex)->GetStaticField(0xE454);
	}
	::Nap::NapECS::EcsFilter* Field_3_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_5FFF477DE12718CC(::Class_3_BA709FB56ED5FAC4* a1)
	{
		return ((::System::Void(*)(::Class_3_BA709FB56ED5FAC4*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_5FFF477DE12718CC_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_CB17984F91355A2A(::Class_3_AB70F28E05C9F5C5* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::MoleMole::Config::RunStateType a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::Class_3_AB70F28E05C9F5C5*, ::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::Config::RunStateType, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_CB17984F91355A2A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_3_20E903521A30139B(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::String*(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_20E903521A30139B_OFFSET))(a1);
	}

	static ::System::Void Method_3_D0BCC415DC40C016(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_D0BCC415DC40C016_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_C1D823BE89AD517A(::Class_3_AB70F28E05C9F5C5* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::Class_3_AB70F28E05C9F5C5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_C1D823BE89AD517A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_D653D08E1B95EA18(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2)
	{
		return ((::System::String*(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_D653D08E1B95EA18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_187CF17ADC55E89F(::Class_3_AB70F28E05C9F5C5* a1, ::Class_3_BA709FB56ED5FAC4* a2, ::Class_3_883E597458B91E77* a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::Class_3_BA709FB56ED5FAC4*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_187CF17ADC55E89F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DFCE6E55F18FF1DC(::Class_3_AB70F28E05C9F5C5* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_DFCE6E55F18FF1DC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0FF755CF0787BB5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_0FF755CF0787BB5E_OFFSET))(a1);
	}

	static ::System::Void Method_3_FE75F91C465EB83A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_FE75F91C465EB83A_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_488ACBB39B5E6D73(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_488ACBB39B5E6D73_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_572C872A7AC127C9(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_572C872A7AC127C9_OFFSET))(a1);
	}

	static ::System::Single Method_3_39CE1821FE4C4506(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Single a2, ::Class_3_AB70F28E05C9F5C5* a3)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_39CE1821FE4C4506_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9A56E9B05E5A1CF2(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_AB70F28E05C9F5C5* a2, ::Class_3_757A5862D4BBEE41* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_AB70F28E05C9F5C5*, ::Class_3_757A5862D4BBEE41*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_9A56E9B05E5A1CF2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0452A295FE653F33(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_0452A295FE653F33_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_69F9975CDFA0163D(::Class_3_AB70F28E05C9F5C5* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_69F9975CDFA0163D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5FFF477DE12718CC_1(::Class_3_BA709FB56ED5FAC4* a1)
	{
		return ((::System::Void(*)(::Class_3_BA709FB56ED5FAC4*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_5FFF477DE12718CC_1_OFFSET))(a1);
	}

	::System::Void Method_3_0A74BB6B0427F4BB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_0A74BB6B0427F4BB_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_6149DBD2316B59ED(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_6149DBD2316B59ED_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E33F53EB083F6486(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_E33F53EB083F6486_OFFSET))(a1);
	}

	static ::System::Void Method_3_1AD73DF78C716BAC(::System::Boolean a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_1AD73DF78C716BAC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_6B2BC02998B71E49(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Boolean(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_6B2BC02998B71E49_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_CCD3A3CB31F37578(::Class_3_AB70F28E05C9F5C5* a1, ::Class_3_F33F9DC5F4112336* a2)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_37975D4B97A32B8D_METHOD_3_CCD3A3CB31F37578_OFFSET))(a1, a2);
	}
};
