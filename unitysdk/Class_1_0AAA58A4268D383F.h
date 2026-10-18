#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F.h"
#include "unitysdk/RPG/GameCore/AnimGroupTransitState.h"
#include "unitysdk/System/Object.h"

class Class_1_31530FC809C9EE2A;
class Class_1_4DC0F7F7ECA1595A;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimGroupEventEntry; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0AAA58A4268D383F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15802400)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_15CC44AFAABC799E_OFFSET UNITYSDK_OFFSET(0x15802670)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_18718272753E3628_OFFSET UNITYSDK_OFFSET(0x15804090)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_1B6A99DFAFA12D52_OFFSET UNITYSDK_OFFSET(0x15804010)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_2233617A6194F273_OFFSET UNITYSDK_OFFSET(0x15802E60)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_4239F9BF3FBDEA95_OFFSET UNITYSDK_OFFSET(0x158037F0)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_4253C935DD4A9D49_OFFSET UNITYSDK_OFFSET(0x15804270)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_58C0901B5D9A901A_OFFSET UNITYSDK_OFFSET(0x15804E50)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x15802510)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_7134173339A04A8A_OFFSET UNITYSDK_OFFSET(0x15804330)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_7CA5AC2F0885F9B0_OFFSET UNITYSDK_OFFSET(0x15804630)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_83E7666638E2D7C4_OFFSET UNITYSDK_OFFSET(0x15803140)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_92C369837D95C392_OFFSET UNITYSDK_OFFSET(0x15804950)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_A042872D54AA5212_OFFSET UNITYSDK_OFFSET(0x15804800)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_EC2FF9133A4B694F_OFFSET UNITYSDK_OFFSET(0x15803000)
#define CLASS_1_0AAA58A4268D383F_METHOD_1_ED4934D443ED57DD_OFFSET UNITYSDK_OFFSET(0x15804170)
#define CLASS_1_0AAA58A4268D383F__CTOR_OFFSET UNITYSDK_OFFSET(0x15802360)

inline static constexpr unsigned int Class_1_0AAA58A4268D383F_TypeDefinitionIndex = 55908;

class Class_1_0AAA58A4268D383F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F>*>* IIIINOJFCJK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_31530FC809C9EE2A*>* EPEIALPNBOG; // 0x18
	::System::UInt64 EDKLKPCKJCL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_15CC44AFAABC799E(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a2, ::RPG::GameCore::TaskContext* a3, ::Class_1_4DC0F7F7ECA1595A* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::RPG::GameCore::TaskContext*, ::Class_1_4DC0F7F7ECA1595A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_15CC44AFAABC799E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_83E7666638E2D7C4(::Class_1_4DC0F7F7ECA1595A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC0F7F7ECA1595A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_83E7666638E2D7C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4239F9BF3FBDEA95(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_4239F9BF3FBDEA95_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Func_2<::System::String*, ::System::String*>* Method_1_2233617A6194F273(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>* a2)
	{
		return ((::System::Func_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_2233617A6194F273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CA5AC2F0885F9B0(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_7CA5AC2F0885F9B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_92C369837D95C392(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4, ::RPG::GameCore::AnimGroupTransitState a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Int32, ::RPG::GameCore::AnimGroupTransitState))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_92C369837D95C392_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F>* Method_1_58C0901B5D9A901A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_58C0901B5D9A901A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F>* Method_1_EC2FF9133A4B694F(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_EC2FF9133A4B694F_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_A042872D54AA5212(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_A042872D54AA5212_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Method_1_1B6A99DFAFA12D52(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_1B6A99DFAFA12D52_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ED4934D443ED57DD(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_ED4934D443ED57DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4253C935DD4A9D49(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_4253C935DD4A9D49_OFFSET))(this, a1);
	}

	::System::Void Method_1_7134173339A04A8A(::System::Int32 a1, ::System::Single a2, ::RPG::GameCore::AnimGroupTransitState a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::System::UInt64 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::GameCore::AnimGroupTransitState, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_7134173339A04A8A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_18718272753E3628(::Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::Class_1_0AAA58A4268D383F_Struct_2_D931D398900FC44F, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA58A4268D383F_METHOD_1_18718272753E3628_OFFSET))(a1, a2);
	}
};
