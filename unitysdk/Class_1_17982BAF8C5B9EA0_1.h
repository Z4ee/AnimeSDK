#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1A4ED5CB1A221EF5_1;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_2ADB3EA11AFF2F61_OFFSET UNITYSDK_OFFSET(0x131D9DC0)
#define CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_33E9ABA21333C8DD_OFFSET UNITYSDK_OFFSET(0x131D9CC0)
#define CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_776CAFFC1E759A6B_OFFSET UNITYSDK_OFFSET(0x131DAA50)
#define CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x131DA430)
#define CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_B2FF5476317D49B7_OFFSET UNITYSDK_OFFSET(0x131D9B90)
#define CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_D038EA8E86EC5AE1_OFFSET UNITYSDK_OFFSET(0x131DA0A0)

inline static constexpr unsigned int Class_1_17982BAF8C5B9EA0_1_TypeDefinitionIndex = 66672;

class Class_1_17982BAF8C5B9EA0_1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17982BAF8C5B9EA0_1_TypeDefinitionIndex)->GetStaticField(0x477F0);
	}

	static ::System::Void Method_1_B2FF5476317D49B7(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_B2FF5476317D49B7_OFFSET))(a1);
	}

	static ::Nap::NapECS::EcsFilter* Method_1_33E9ABA21333C8DD(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_33E9ABA21333C8DD_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_1_2ADB3EA11AFF2F61(::System::UInt32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_2ADB3EA11AFF2F61_OFFSET))(a1);
	}

	static ::System::Void Method_1_D038EA8E86EC5AE1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_D038EA8E86EC5AE1_OFFSET))(a1);
	}

	static ::System::Void Method_1_9AF91962BC6E178A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_9AF91962BC6E178A_OFFSET))();
	}

	static ::System::Void Method_1_776CAFFC1E759A6B(::Class_3_1A4ED5CB1A221EF5_1* a1)
	{
		return ((::System::Void(*)(::Class_3_1A4ED5CB1A221EF5_1*))((::PBYTE)hIl2Cpp + CLASS_1_17982BAF8C5B9EA0_1_METHOD_1_776CAFFC1E759A6B_OFFSET))(a1);
	}
};
