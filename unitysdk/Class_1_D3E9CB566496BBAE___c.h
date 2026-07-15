#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_D3E9CB566496BBAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1630E170)
#define CLASS_1_D3E9CB566496BBAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1630E1B0)
#define CLASS_1_D3E9CB566496BBAE___C___CLONEANDUPDATEPOSITIONING_B__15_0_OFFSET UNITYSDK_OFFSET(0x1630E1C0)
#define CLASS_1_D3E9CB566496BBAE___C___CLONEANDUPDATEPOSITIONING_B__15_1_OFFSET UNITYSDK_OFFSET(0x1630E1D0)
#define CLASS_1_D3E9CB566496BBAE___C___CLONEANDUPDATEPOSITIONING_B__15_2_OFFSET UNITYSDK_OFFSET(0x1630E200)

inline static constexpr unsigned int Class_1_D3E9CB566496BBAE___c_TypeDefinitionIndex = 60522;

class Class_1_D3E9CB566496BBAE___c : public ::System::Object
{
public:
	static ::Class_1_D3E9CB566496BBAE___c** StaticGet___9()
	{
		return (::Class_1_D3E9CB566496BBAE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3E9CB566496BBAE___c_TypeDefinitionIndex)->GetStaticField(0x40C60);
	}
	static ::System::Comparison_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>** StaticGet___9__15_2()
	{
		return (::System::Comparison_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3E9CB566496BBAE___c_TypeDefinitionIndex)->GetStaticField(0x40C68);
	}
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>** StaticGet___9__15_1()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3E9CB566496BBAE___c_TypeDefinitionIndex)->GetStaticField(0x40C70);
	}
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3E9CB566496BBAE___c_TypeDefinitionIndex)->GetStaticField(0x40C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CloneAndUpdatePositioning_b__15_0(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE___C___CLONEANDUPDATEPOSITIONING_B__15_0_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* __CloneAndUpdatePositioning_b__15_1(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE___C___CLONEANDUPDATEPOSITIONING_B__15_1_OFFSET))(this, a1);
	}

	::System::Int32 __CloneAndUpdatePositioning_b__15_2(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE___C___CLONEANDUPDATEPOSITIONING_B__15_2_OFFSET))(this, a1, a2);
	}
};
