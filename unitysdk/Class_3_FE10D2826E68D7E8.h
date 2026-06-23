#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_FE10D2826E68D7E8_Enum_3_01E26C57B6422167.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_3B42BC0680587011;
class Class_3_757A5862D4BBEE41;
class Class_3_883E597458B91E77;
class Class_3_AB70F28E05C9F5C5;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FE10D2826E68D7E8_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1305EC40)
#define CLASS_3_FE10D2826E68D7E8_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1305F020)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_0452A295FE653F33_OFFSET UNITYSDK_OFFSET(0x13063350)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_0A74BB6B0427F4BB_OFFSET UNITYSDK_OFFSET(0x13061760)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_0AD137D635C0F795_OFFSET UNITYSDK_OFFSET(0x13062180)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_0FF755CF0787BB5E_OFFSET UNITYSDK_OFFSET(0x13061090)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_20E903521A30139B_OFFSET UNITYSDK_OFFSET(0x1305F420)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_39CE1821FE4C4506_OFFSET UNITYSDK_OFFSET(0x13060DE0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_3B43A20F73A5F8E3_OFFSET UNITYSDK_OFFSET(0x1305F830)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_488ACBB39B5E6D73_OFFSET UNITYSDK_OFFSET(0x13062950)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_572C872A7AC127C9_OFFSET UNITYSDK_OFFSET(0x130623B0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_5FFF477DE12718CC_1_OFFSET UNITYSDK_OFFSET(0x13062860)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x13060580)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_6149DBD2316B59ED_OFFSET UNITYSDK_OFFSET(0x130626E0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_69F9975CDFA0163D_OFFSET UNITYSDK_OFFSET(0x1305F210)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_6B2BC02998B71E49_OFFSET UNITYSDK_OFFSET(0x13060BC0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_913BB00A166CA35B_OFFSET UNITYSDK_OFFSET(0x13061D60)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_997C6E809EFBF87B_OFFSET UNITYSDK_OFFSET(0x13060670)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13062650)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_C1D823BE89AD517A_OFFSET UNITYSDK_OFFSET(0x13063160)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13060D50)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x130604F0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_CB17984F91355A2A_OFFSET UNITYSDK_OFFSET(0x130600B0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_CCD3A3CB31F37578_OFFSET UNITYSDK_OFFSET(0x130614E0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_D0BCC415DC40C016_OFFSET UNITYSDK_OFFSET(0x13061930)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_D653D08E1B95EA18_OFFSET UNITYSDK_OFFSET(0x13062240)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_DFCE6E55F18FF1DC_OFFSET UNITYSDK_OFFSET(0x13062CB0)
#define CLASS_3_FE10D2826E68D7E8_METHOD_3_FE75F91C465EB83A_OFFSET UNITYSDK_OFFSET(0x1305F560)
#define CLASS_3_FE10D2826E68D7E8_UPDATE_OFFSET UNITYSDK_OFFSET(0x1305EE80)
#define CLASS_3_FE10D2826E68D7E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1305F1F0)
#define CLASS_3_FE10D2826E68D7E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1305F1A0)

inline static constexpr unsigned int Class_3_FE10D2826E68D7E8_TypeDefinitionIndex = 44267;

class Class_3_FE10D2826E68D7E8 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE10D2826E68D7E8_TypeDefinitionIndex)->GetStaticField(0xE8C0);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE10D2826E68D7E8_TypeDefinitionIndex)->GetStaticField(0xE8C1);
	}
	static ::Class_3_FE10D2826E68D7E8_Enum_3_01E26C57B6422167* StaticGet_Field_3_3()
	{
		return (::Class_3_FE10D2826E68D7E8_Enum_3_01E26C57B6422167*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE10D2826E68D7E8_TypeDefinitionIndex)->GetStaticField(0xE8C2);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE10D2826E68D7E8_TypeDefinitionIndex)->GetStaticField(0xE8C4);
	}
	::Nap::NapECS::EcsFilter* Field_3_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_69F9975CDFA0163D(::Class_3_AB70F28E05C9F5C5* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_69F9975CDFA0163D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3B43A20F73A5F8E3(::System::Boolean a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_3B43A20F73A5F8E3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_CB17984F91355A2A(::Class_3_AB70F28E05C9F5C5* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::MoleMole::Config::RunStateType a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::Class_3_AB70F28E05C9F5C5*, ::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::Config::RunStateType, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_CB17984F91355A2A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_3_20E903521A30139B(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::String*(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_20E903521A30139B_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_5FFF477DE12718CC(::Class_3_3B42BC0680587011* a1)
	{
		return ((::System::Void(*)(::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_5FFF477DE12718CC_OFFSET))(a1);
	}

	static ::System::Void Method_3_997C6E809EFBF87B(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_AB70F28E05C9F5C5* a2, ::Class_3_757A5862D4BBEE41* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_AB70F28E05C9F5C5*, ::Class_3_757A5862D4BBEE41*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_997C6E809EFBF87B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FE75F91C465EB83A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_FE75F91C465EB83A_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6B2BC02998B71E49(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Boolean(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_6B2BC02998B71E49_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Single Method_3_39CE1821FE4C4506(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Single a2, ::Class_3_AB70F28E05C9F5C5* a3)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_39CE1821FE4C4506_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0FF755CF0787BB5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_0FF755CF0787BB5E_OFFSET))(a1);
	}

	static ::System::Void Method_3_CCD3A3CB31F37578(::Class_3_AB70F28E05C9F5C5* a1, ::Class_3_F33F9DC5F4112336* a2)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_CCD3A3CB31F37578_OFFSET))(a1, a2);
	}

	::System::Void Method_3_0A74BB6B0427F4BB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_0A74BB6B0427F4BB_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_913BB00A166CA35B(::Class_3_AB70F28E05C9F5C5* a1, ::Class_3_3B42BC0680587011* a2, ::Class_3_883E597458B91E77* a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::Class_3_3B42BC0680587011*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_913BB00A166CA35B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D0BCC415DC40C016(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_D0BCC415DC40C016_OFFSET))(a1);
	}

	static ::System::Void Method_3_0AD137D635C0F795(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_0AD137D635C0F795_OFFSET))(a1);
	}

	static ::System::Void Method_3_572C872A7AC127C9(::Class_3_AB70F28E05C9F5C5* a1)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_572C872A7AC127C9_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_6149DBD2316B59ED(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_6149DBD2316B59ED_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_488ACBB39B5E6D73(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_488ACBB39B5E6D73_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_3_D653D08E1B95EA18(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2)
	{
		return ((::System::String*(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_D653D08E1B95EA18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DFCE6E55F18FF1DC(::Class_3_AB70F28E05C9F5C5* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_DFCE6E55F18FF1DC_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_C1D823BE89AD517A(::Class_3_AB70F28E05C9F5C5* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::Class_3_AB70F28E05C9F5C5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_C1D823BE89AD517A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0452A295FE653F33(::Class_3_AB70F28E05C9F5C5* a1, ::MoleMole::Config::AnimMoveState a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_AB70F28E05C9F5C5*, ::MoleMole::Config::AnimMoveState, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_0452A295FE653F33_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5FFF477DE12718CC_1(::Class_3_3B42BC0680587011* a1)
	{
		return ((::System::Void(*)(::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_3_FE10D2826E68D7E8_METHOD_3_5FFF477DE12718CC_1_OFFSET))(a1);
	}
};
