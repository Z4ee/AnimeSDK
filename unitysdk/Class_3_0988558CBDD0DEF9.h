#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Struct_2_BBA9BFFCB5AD7C3C.h"

class Class_1_2D6677C73EA0C455;
class Class_1_B76E080EF26C938D;
class Class_1_F61BB49F70F7407A;
class Class_3_247B97EFF95C09A1;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_0988558CBDD0DEF9_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x141A9F70)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_1ED8E2DF895CCE00_OFFSET UNITYSDK_OFFSET(0x141AA260)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_2E7302E9A4D64BF2_OFFSET UNITYSDK_OFFSET(0x141AB7A0)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_36B3213827884734_OFFSET UNITYSDK_OFFSET(0x141ABEB0)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_672FCEC5050BF579_OFFSET UNITYSDK_OFFSET(0x141ABD70)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_754748ACD747E361_OFFSET UNITYSDK_OFFSET(0x141AA4C0)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_7B0937CF905FF793_OFFSET UNITYSDK_OFFSET(0x141AB650)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_89C1ED7C23F46F12_OFFSET UNITYSDK_OFFSET(0x141ABCD0)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_936A7A9DE7170526_OFFSET UNITYSDK_OFFSET(0x141ABE00)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x141ABC80)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x141AC000)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x141AC040)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141ABBF0)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_EEFE53142ECD1A0B_OFFSET UNITYSDK_OFFSET(0x141AC0D0)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_F5BFAF1A29EE831A_OFFSET UNITYSDK_OFFSET(0x141AB9B0)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_F69C255E99C39C55_1_OFFSET UNITYSDK_OFFSET(0x141AC170)
#define CLASS_3_0988558CBDD0DEF9_METHOD_3_F69C255E99C39C55_OFFSET UNITYSDK_OFFSET(0x141ABB60)
#define CLASS_3_0988558CBDD0DEF9_UPDATE_OFFSET UNITYSDK_OFFSET(0x141AA1D0)
#define CLASS_3_0988558CBDD0DEF9__CTOR_OFFSET UNITYSDK_OFFSET(0x141AA210)

inline static constexpr unsigned int Class_3_0988558CBDD0DEF9_TypeDefinitionIndex = 38486;

class Class_3_0988558CBDD0DEF9 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_1ED8E2DF895CCE00(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_1ED8E2DF895CCE00_OFFSET))(this, a1);
	}

	::System::Void Method_3_7B0937CF905FF793(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_7B0937CF905FF793_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2E7302E9A4D64BF2(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_2E7302E9A4D64BF2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_754748ACD747E361(::Class_3_247B97EFF95C09A1* a1)
	{
		return ((::System::Void(*)(::Class_3_247B97EFF95C09A1*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_754748ACD747E361_OFFSET))(a1);
	}

	static ::System::Void Method_3_F69C255E99C39C55(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_F69C255E99C39C55_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_B76E080EF26C938D* Method_3_672FCEC5050BF579(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_1_B76E080EF26C938D*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_672FCEC5050BF579_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_936A7A9DE7170526(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::Struct_2_BBA9BFFCB5AD7C3C& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::Struct_2_BBA9BFFCB5AD7C3C&))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_936A7A9DE7170526_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_3_36B3213827884734(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_36B3213827884734_OFFSET))(a1);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_247B97EFF95C09A1* a1)
	{
		return ((::System::Void(*)(::Class_3_247B97EFF95C09A1*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_F5BFAF1A29EE831A(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::Class_1_2D6677C73EA0C455*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::Class_1_2D6677C73EA0C455*&))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_F5BFAF1A29EE831A_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_EEFE53142ECD1A0B(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_EEFE53142ECD1A0B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_89C1ED7C23F46F12(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::Class_1_F61BB49F70F7407A*& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::Class_1_F61BB49F70F7407A*&))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_89C1ED7C23F46F12_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_F69C255E99C39C55_1(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_0988558CBDD0DEF9_METHOD_3_F69C255E99C39C55_1_OFFSET))(a1, a2, a3, a4);
	}
};
