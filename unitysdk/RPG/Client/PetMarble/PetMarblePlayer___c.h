#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F487A56015EDF324_1;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAE7A80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE7AC0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__GET_ISOWNMASTERTITLE_B__43_0_OFFSET UNITYSDK_OFFSET(0xDAE7AD0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarblePlayer___c_TypeDefinitionIndex = 74701;

	class PetMarblePlayer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PetMarble::PetMarblePlayer___c** StaticGet___9()
		{
			return (::RPG::Client::PetMarble::PetMarblePlayer___c**)Il2CppClass::FromTypeDefinitionIndex(PetMarblePlayer___c_TypeDefinitionIndex)->GetStaticField(0x1B6C0);
		}
		static ::System::Predicate_1<::Class_1_F487A56015EDF324_1*>** StaticGet___9__43_0()
		{
			return (::System::Predicate_1<::Class_1_F487A56015EDF324_1*>**)Il2CppClass::FromTypeDefinitionIndex(PetMarblePlayer___c_TypeDefinitionIndex)->GetStaticField(0x1B6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsOwnMasterTitle_b__43_0(::Class_1_F487A56015EDF324_1* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F487A56015EDF324_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__GET_ISOWNMASTERTITLE_B__43_0_OFFSET))(this, a1);
		}
	};
}
