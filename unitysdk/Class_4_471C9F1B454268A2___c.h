#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_471C9F1B454268A2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xACE8D30)
#define CLASS_4_471C9F1B454268A2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xACE8D70)
#define CLASS_4_471C9F1B454268A2___C__SELECTENTITYIDS_B__4_0_OFFSET UNITYSDK_OFFSET(0xACE8D80)
#define CLASS_4_471C9F1B454268A2___C__SELECTENTITYIDS_B__4_1_OFFSET UNITYSDK_OFFSET(0xACE8DA0)
#define CLASS_4_471C9F1B454268A2___C__SELECTENTITYIDS_B__4_3_OFFSET UNITYSDK_OFFSET(0xACE8DC0)

inline static constexpr unsigned int Class_4_471C9F1B454268A2___c_TypeDefinitionIndex = 72164;

class Class_4_471C9F1B454268A2___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_471C9F1B454268A2___c_TypeDefinitionIndex)->GetStaticField(0x1A630);
	}
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>** StaticGet___9__4_3()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_471C9F1B454268A2___c_TypeDefinitionIndex)->GetStaticField(0x1A638);
	}
	static ::Class_4_471C9F1B454268A2___c** StaticGet___9()
	{
		return (::Class_4_471C9F1B454268A2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_471C9F1B454268A2___c_TypeDefinitionIndex)->GetStaticField(0x1A640);
	}
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_471C9F1B454268A2___c_TypeDefinitionIndex)->GetStaticField(0x1A648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectEntityIDs_b__4_0(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2___C__SELECTENTITYIDS_B__4_0_OFFSET))(this, a1);
	}

	::System::Int32 _SelectEntityIDs_b__4_1(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2___C__SELECTENTITYIDS_B__4_1_OFFSET))(this, a1);
	}

	::System::Int32 _SelectEntityIDs_b__4_3(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2___C__SELECTENTITYIDS_B__4_3_OFFSET))(this, a1);
	}
};
