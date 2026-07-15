#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_22A7296BC2301A4D_Struct_2_BBD456EBC9087BC2_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_22A7296BC2301A4D_Class_1_80714773511AC362;
class Class_1_22A7296BC2301A4D_Class_1_EB7A19B104A7CE05;
class Class_1_43B0AF86156D9901;
class Class_2_BEF04BB3FD6CC9EE;
namespace RPG::GameCore { class StageBattleEventConfig; }
namespace RPG::GameCore { class StageBattleEventRow; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22A7296BC2301A4D_METHOD_1_30C7880C7424D85D_OFFSET UNITYSDK_OFFSET(0x146C35D0)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_35C9477C5A5DB1E4_OFFSET UNITYSDK_OFFSET(0x146C25C0)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x146C3920)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_5B814E0B66463EE9_OFFSET UNITYSDK_OFFSET(0x146C2DF0)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_66F55731884AC4B2_OFFSET UNITYSDK_OFFSET(0x146C22A0)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_8D6ED0B57406E5F2_OFFSET UNITYSDK_OFFSET(0x146C2A30)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x146C2510)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x146C32A0)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x146C21C0)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x146C2170)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_EA6C18445CB4E654_OFFSET UNITYSDK_OFFSET(0x146C2C70)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_ED7CF579689BEC5E_OFFSET UNITYSDK_OFFSET(0x146C3020)
#define CLASS_1_22A7296BC2301A4D_METHOD_1_EE5D71FBB4261BF2_OFFSET UNITYSDK_OFFSET(0x146C3910)
#define CLASS_1_22A7296BC2301A4D__CTOR_OFFSET UNITYSDK_OFFSET(0x146C2110)

inline static constexpr unsigned int Class_1_22A7296BC2301A4D_TypeDefinitionIndex = 53669;

class Class_1_22A7296BC2301A4D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x14; // 0x0
	::RPG::GameCore::TurnBasedGameMode* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_22A7296BC2301A4D_Class_1_EB7A19B104A7CE05*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_22A7296BC2301A4D_Class_1_80714773511AC362*>* Field_1_3; // 0x20
	::Class_2_BEF04BB3FD6CC9EE* Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_66F55731884AC4B2(::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_66F55731884AC4B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_35C9477C5A5DB1E4(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_35C9477C5A5DB1E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EA6C18445CB4E654(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_EA6C18445CB4E654_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B814E0B66463EE9(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_5B814E0B66463EE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_1_8D6ED0B57406E5F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_8D6ED0B57406E5F2_OFFSET))(this);
	}

	::System::Void Method_1_ED7CF579689BEC5E(::RPG::GameCore::StageBattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_ED7CF579689BEC5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_1_30C7880C7424D85D(::Class_1_22A7296BC2301A4D_Struct_2_BBD456EBC9087BC2_4& a1, ::Class_1_43B0AF86156D9901* a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::GameCore::FixPoint a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22A7296BC2301A4D_Struct_2_BBD456EBC9087BC2_4&, ::Class_1_43B0AF86156D9901*, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_30C7880C7424D85D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::Class_1_22A7296BC2301A4D_Class_1_EB7A19B104A7CE05*>* Method_1_EE5D71FBB4261BF2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_22A7296BC2301A4D_Class_1_EB7A19B104A7CE05*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_EE5D71FBB4261BF2_OFFSET))(this);
	}

	::Class_2_BEF04BB3FD6CC9EE* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_BEF04BB3FD6CC9EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}
};
