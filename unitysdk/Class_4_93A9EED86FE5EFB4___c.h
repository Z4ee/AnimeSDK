#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_93A9EED86FE5EFB4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFACD40)
#define CLASS_4_93A9EED86FE5EFB4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFACD80)
#define CLASS_4_93A9EED86FE5EFB4___C__SELECTENTITYIDS_B__4_0_OFFSET UNITYSDK_OFFSET(0xBFACD90)
#define CLASS_4_93A9EED86FE5EFB4___C__SELECTENTITYIDS_B__4_1_OFFSET UNITYSDK_OFFSET(0xBFACDB0)
#define CLASS_4_93A9EED86FE5EFB4___C__SELECTENTITYIDS_B__4_3_OFFSET UNITYSDK_OFFSET(0xBFACDD0)

inline static constexpr unsigned int Class_4_93A9EED86FE5EFB4___c_TypeDefinitionIndex = 77644;

class Class_4_93A9EED86FE5EFB4___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>** StaticGet___9__4_3()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_93A9EED86FE5EFB4___c_TypeDefinitionIndex)->GetStaticField(0x64CF0);
	}
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_93A9EED86FE5EFB4___c_TypeDefinitionIndex)->GetStaticField(0x64CF8);
	}
	static ::Class_4_93A9EED86FE5EFB4___c** StaticGet___9()
	{
		return (::Class_4_93A9EED86FE5EFB4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_93A9EED86FE5EFB4___c_TypeDefinitionIndex)->GetStaticField(0x64D00);
	}
	static ::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_93A9EED86FE5EFB4___c_TypeDefinitionIndex)->GetStaticField(0x64D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_93A9EED86FE5EFB4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_93A9EED86FE5EFB4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectEntityIDs_b__4_0(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_93A9EED86FE5EFB4___C__SELECTENTITYIDS_B__4_0_OFFSET))(this, a1);
	}

	::System::Int32 _SelectEntityIDs_b__4_1(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_93A9EED86FE5EFB4___C__SELECTENTITYIDS_B__4_1_OFFSET))(this, a1);
	}

	::System::Int32 _SelectEntityIDs_b__4_3(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_93A9EED86FE5EFB4___C__SELECTENTITYIDS_B__4_3_OFFSET))(this, a1);
	}
};
