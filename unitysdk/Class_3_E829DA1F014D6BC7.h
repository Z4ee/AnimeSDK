#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_5DA2E7556103D5A3_204;
class Class_3_3522289DFBB97479;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_E829DA1F014D6BC7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x151C6AA0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_180AB596178ABB61_OFFSET UNITYSDK_OFFSET(0x151C7650)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_331C06475E3F6942_OFFSET UNITYSDK_OFFSET(0x151C8620)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_4057D796AB024FE2_OFFSET UNITYSDK_OFFSET(0x151C6FF0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_40A429291FCE60C7_OFFSET UNITYSDK_OFFSET(0x151C8270)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_41C149BE8D128EA8_OFFSET UNITYSDK_OFFSET(0x151C80B0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_589E29C1AB317BCA_OFFSET UNITYSDK_OFFSET(0x151C7AC0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0x151C6E50)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x151C7B60)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_9F01B448AD7A04F2_OFFSET UNITYSDK_OFFSET(0x151C8D10)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_B6A1BBF297E35785_OFFSET UNITYSDK_OFFSET(0x151C8580)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x151C84F0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_1_OFFSET UNITYSDK_OFFSET(0x151C87D0)
#define CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_OFFSET UNITYSDK_OFFSET(0x151C7BA0)
#define CLASS_3_E829DA1F014D6BC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x151C6E40)
#define CLASS_3_E829DA1F014D6BC7__CTOR_OFFSET UNITYSDK_OFFSET(0x151C6DF0)

inline static constexpr unsigned int Class_3_E829DA1F014D6BC7_TypeDefinitionIndex = 47108;

class Class_3_E829DA1F014D6BC7 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::MoleMole::Battle::Entity** StaticGet_Field_3_2()
	{
		return (::MoleMole::Battle::Entity**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E829DA1F014D6BC7_TypeDefinitionIndex)->GetStaticField(0x491E0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_7EE99EE6AA394745_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_180AB596178ABB61(::Class_1_5DA2E7556103D5A3_204* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_204*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_180AB596178ABB61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_589E29C1AB317BCA(::MoleMole::Battle::Entity* a1, ::Class_3_3522289DFBB97479* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_3522289DFBB97479*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_589E29C1AB317BCA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_EC2F00CC40178728(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_OFFSET))(a1);
	}

	static ::System::Void Method_3_40A429291FCE60C7(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_40A429291FCE60C7_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B6A1BBF297E35785(::Class_3_3522289DFBB97479* a1, ::Class_1_5DA2E7556103D5A3_204* a2)
	{
		return ((::System::Void(*)(::Class_3_3522289DFBB97479*, ::Class_1_5DA2E7556103D5A3_204*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_B6A1BBF297E35785_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4057D796AB024FE2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_4057D796AB024FE2_OFFSET))(a1);
	}

	static ::System::Void Method_3_EC2F00CC40178728_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_EC2F00CC40178728_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_9F01B448AD7A04F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_9F01B448AD7A04F2_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_41C149BE8D128EA8(::Class_1_5DA2E7556103D5A3_204* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_204*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_41C149BE8D128EA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_331C06475E3F6942(::MoleMole::Battle::Entity* a1, ::Class_1_5DA2E7556103D5A3_204* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_5DA2E7556103D5A3_204*))((::PBYTE)hIl2Cpp + CLASS_3_E829DA1F014D6BC7_METHOD_3_331C06475E3F6942_OFFSET))(a1, a2);
	}
};
