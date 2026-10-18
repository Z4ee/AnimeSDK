#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0C6BC77542F8B8A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158F1D50)
#define CLASS_1_0C6BC77542F8B8A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158F1D90)
#define CLASS_1_0C6BC77542F8B8A3___C___REFRESHACTORSTATES_B__74_1_OFFSET UNITYSDK_OFFSET(0x158F1DA0)

inline static constexpr unsigned int Class_1_0C6BC77542F8B8A3___c_TypeDefinitionIndex = 79760;

class Class_1_0C6BC77542F8B8A3___c : public ::System::Object
{
public:
	static ::Class_1_0C6BC77542F8B8A3___c** StaticGet___9()
	{
		return (::Class_1_0C6BC77542F8B8A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C6BC77542F8B8A3___c_TypeDefinitionIndex)->GetStaticField(0x5B5B0);
	}
	static ::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Boolean>** StaticGet___9__74_1()
	{
		return (::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C6BC77542F8B8A3___c_TypeDefinitionIndex)->GetStaticField(0x5B5B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshActorStates_b__74_1(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3___C___REFRESHACTORSTATES_B__74_1_OFFSET))(this, a1);
	}
};
