#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_73D621BDD90E61A7;
class Class_1_BD800F5B29A08E1F;
class Class_1_D808E3F47C1941B7;
class Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1;
namespace RPG::GameCore { class ComplexSkillAIAxis; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_0CE847FF527A969C_OFFSET UNITYSDK_OFFSET(0x1197B740)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_279440535C853CAD_OFFSET UNITYSDK_OFFSET(0x1197C570)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x1197C350)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x1197CE80)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_55357EED91DD300A_OFFSET UNITYSDK_OFFSET(0x1197C760)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_594B16EC13924620_OFFSET UNITYSDK_OFFSET(0x1197C680)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_5F36FBA0CEB01BDA_OFFSET UNITYSDK_OFFSET(0x1197BDA0)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_6E86C88227CAEC87_OFFSET UNITYSDK_OFFSET(0x1197BBC0)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_85E114E28900A294_OFFSET UNITYSDK_OFFSET(0x1197A990)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_8CB50F10CC7BDC16_OFFSET UNITYSDK_OFFSET(0x1197C7E0)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_8D184BB701D4E177_OFFSET UNITYSDK_OFFSET(0x1197BA60)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_A2991B2333810309_OFFSET UNITYSDK_OFFSET(0x1197BE90)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_CB7312DC9E225D46_OFFSET UNITYSDK_OFFSET(0x1197C4D0)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_DC02F8DDF293C069_OFFSET UNITYSDK_OFFSET(0x1197A3C0)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_E6DED97BAB787986_OFFSET UNITYSDK_OFFSET(0x1197CDA0)
#define CLASS_2_E1F0F77725E0ADF0_METHOD_2_FA43237884AAD3A9_OFFSET UNITYSDK_OFFSET(0x1197ABC0)
#define CLASS_2_E1F0F77725E0ADF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1197A320)

inline static constexpr unsigned int Class_2_E1F0F77725E0ADF0_TypeDefinitionIndex = 43460;

class Class_2_E1F0F77725E0ADF0 : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	::Class_1_73D621BDD90E61A7* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1*>* Field_2_0; // 0x20
	::RPG::GameCore::ComplexSkillAIAxis* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::ComplexSkillAIAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_DC02F8DDF293C069()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_DC02F8DDF293C069_OFFSET))(this);
	}

	static ::System::Int32 Method_2_CB7312DC9E225D46(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_CB7312DC9E225D46_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_2_594B16EC13924620(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_594B16EC13924620_OFFSET))(a1);
	}

	::System::Boolean Method_2_0CE847FF527A969C(::Class_1_BD800F5B29A08E1F* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_0CE847FF527A969C_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_85E114E28900A294(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_85E114E28900A294_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_2_8D184BB701D4E177(::System::Int32 a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_8D184BB701D4E177_OFFSET))(this, a1, a2);
	}

	::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* Method_2_6E86C88227CAEC87(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Class_1_BD800F5B29A08E1F* a3)
	{
		return ((::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_6E86C88227CAEC87_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_47680E2642F37A1B_OFFSET))(this);
	}

	static ::RPG::GameCore::ComplexSkillAIConfig* Method_2_E6DED97BAB787986(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::ComplexSkillAIConfig*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_E6DED97BAB787986_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_279440535C853CAD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_279440535C853CAD_OFFSET))(a1);
	}

	static ::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A Method_2_A2991B2333810309(::Class_1_BD800F5B29A08E1F* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* a6, ::Class_1_73D621BDD90E61A7* a7)
	{
		return ((::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A(*)(::Class_1_BD800F5B29A08E1F*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1*, ::Class_1_73D621BDD90E61A7*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_A2991B2333810309_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_FA43237884AAD3A9(::Class_1_BD800F5B29A08E1F* a1, ::Class_1_73D621BDD90E61A7* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::Class_1_73D621BDD90E61A7*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_FA43237884AAD3A9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5F36FBA0CEB01BDA(::Class_1_BD800F5B29A08E1F* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_5F36FBA0CEB01BDA_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint> Method_2_8CB50F10CC7BDC16(::Class_1_BD800F5B29A08E1F* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_8CB50F10CC7BDC16_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D808E3F47C1941B7* Method_2_55357EED91DD300A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_D808E3F47C1941B7*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_55357EED91DD300A_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
