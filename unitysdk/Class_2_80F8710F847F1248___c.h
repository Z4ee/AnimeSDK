#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_80F8710F847F1248___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181E2670)
#define CLASS_2_80F8710F847F1248___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181E26B0)
#define CLASS_2_80F8710F847F1248___C___CTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x181E26C0)
#define CLASS_2_80F8710F847F1248___C___CTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x181E26F0)

inline static constexpr unsigned int Class_2_80F8710F847F1248___c_TypeDefinitionIndex = 40630;

class Class_2_80F8710F847F1248___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__23_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_80F8710F847F1248___c_TypeDefinitionIndex)->GetStaticField(0x5A170);
	}
	static ::System::Func_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>** StaticGet___9__23_1()
	{
		return (::System::Func_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_80F8710F847F1248___c_TypeDefinitionIndex)->GetStaticField(0x5A178);
	}
	static ::Class_2_80F8710F847F1248___c** StaticGet___9()
	{
		return (::Class_2_80F8710F847F1248___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_80F8710F847F1248___c_TypeDefinitionIndex)->GetStaticField(0x5A180);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__23_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248___C___CTOR_B__23_0_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* __ctor_b__23_1()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248___C___CTOR_B__23_1_OFFSET))(this);
	}
};
