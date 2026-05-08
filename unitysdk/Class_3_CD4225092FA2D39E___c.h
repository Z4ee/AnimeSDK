#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0D4C1A014C7CC9DE;
namespace MoleMole::Config { class AttackCDUpdateData; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_CD4225092FA2D39E___C_METHOD_1_1AB6224EE8D198DF_OFFSET UNITYSDK_OFFSET(0x16B0BA60)
#define CLASS_3_CD4225092FA2D39E___C_METHOD_1_B448F051E9278666_OFFSET UNITYSDK_OFFSET(0x16B0BA90)
#define CLASS_3_CD4225092FA2D39E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B0BA10)
#define CLASS_3_CD4225092FA2D39E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0BA50)

inline static constexpr unsigned int Class_3_CD4225092FA2D39E___c_TypeDefinitionIndex = 56866;

class Class_3_CD4225092FA2D39E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::Config::AttackCDUpdateData*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::MoleMole::Config::AttackCDUpdateData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CD4225092FA2D39E___c_TypeDefinitionIndex)->GetStaticField(0x44FF0);
	}
	static ::System::Action_1<::Class_3_0D4C1A014C7CC9DE*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_0D4C1A014C7CC9DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CD4225092FA2D39E___c_TypeDefinitionIndex)->GetStaticField(0x44FF8);
	}
	static ::Class_3_CD4225092FA2D39E___c** StaticGet___9()
	{
		return (::Class_3_CD4225092FA2D39E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CD4225092FA2D39E___c_TypeDefinitionIndex)->GetStaticField(0x45000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CD4225092FA2D39E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD4225092FA2D39E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_1AB6224EE8D198DF(::MoleMole::Config::AttackCDUpdateData* a1, ::MoleMole::Config::AttackCDUpdateData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AttackCDUpdateData*, ::MoleMole::Config::AttackCDUpdateData*))((::PBYTE)hIl2Cpp + CLASS_3_CD4225092FA2D39E___C_METHOD_1_1AB6224EE8D198DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B448F051E9278666(::Class_3_0D4C1A014C7CC9DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0D4C1A014C7CC9DE*))((::PBYTE)hIl2Cpp + CLASS_3_CD4225092FA2D39E___C_METHOD_1_B448F051E9278666_OFFSET))(this, a1);
	}
};
