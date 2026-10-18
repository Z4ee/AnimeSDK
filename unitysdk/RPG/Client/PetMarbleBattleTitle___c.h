#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PETMARBLEBATTLETITLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAEC470)
#define RPG_CLIENT_PETMARBLEBATTLETITLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEC4B0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE___C___COMBINEUSINGSELECTMANY_B__1_0_OFFSET UNITYSDK_OFFSET(0xDAEC4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBattleTitle___c_TypeDefinitionIndex = 65817;

	class PetMarbleBattleTitle___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PetMarbleBattleTitle___c** StaticGet___9()
		{
			return (::RPG::Client::PetMarbleBattleTitle___c**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleBattleTitle___c_TypeDefinitionIndex)->GetStaticField(0x1BAA0);
		}
		static ::System::Func_2<::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleBattleTitle___c_TypeDefinitionIndex)->GetStaticField(0x1BAA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* __CombineUsingSelectMany_b__1_0(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE___C___COMBINEUSINGSELECTMANY_B__1_0_OFFSET))(this, a1);
		}
	};
}
