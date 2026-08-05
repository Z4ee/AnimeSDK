#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_1_OFFSET UNITYSDK_OFFSET(0x115662C0)
#define CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_2_OFFSET UNITYSDK_OFFSET(0x11566330)
#define CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_3_OFFSET UNITYSDK_OFFSET(0x115663A0)
#define CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_OFFSET UNITYSDK_OFFSET(0x11566250)
#define CLASS_2_945F852A8B481F54___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11566200)
#define CLASS_2_945F852A8B481F54___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11566240)

inline static constexpr unsigned int Class_2_945F852A8B481F54___c_TypeDefinitionIndex = 48538;

class Class_2_945F852A8B481F54___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__63_1()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_945F852A8B481F54___c_TypeDefinitionIndex)->GetStaticField(0x35AC0);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__63_0()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_945F852A8B481F54___c_TypeDefinitionIndex)->GetStaticField(0x35AC8);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__64_1()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_945F852A8B481F54___c_TypeDefinitionIndex)->GetStaticField(0x35AD0);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__64_0()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_945F852A8B481F54___c_TypeDefinitionIndex)->GetStaticField(0x35AD8);
	}
	static ::Class_2_945F852A8B481F54___c** StaticGet___9()
	{
		return (::Class_2_945F852A8B481F54___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_945F852A8B481F54___c_TypeDefinitionIndex)->GetStaticField(0x35AE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8A429F16678BB711(::Nap::NapECS::EcsComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A429F16678BB711_1(::Nap::NapECS::EcsComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A429F16678BB711_2(::Nap::NapECS::EcsComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A429F16678BB711_3(::Nap::NapECS::EcsComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54___C_METHOD_1_8A429F16678BB711_3_OFFSET))(this, a1);
	}
};
