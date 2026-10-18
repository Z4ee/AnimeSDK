#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9BBB3EBE2028834A_4;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_64C42D6E3CFAFC1F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA0BD90)
#define CLASS_2_64C42D6E3CFAFC1F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0BDD0)
#define CLASS_2_64C42D6E3CFAFC1F___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET UNITYSDK_OFFSET(0xBA0BDE0)

inline static constexpr unsigned int Class_2_64C42D6E3CFAFC1F___c_TypeDefinitionIndex = 81649;

class Class_2_64C42D6E3CFAFC1F___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_9BBB3EBE2028834A_4*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_9BBB3EBE2028834A_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_64C42D6E3CFAFC1F___c_TypeDefinitionIndex)->GetStaticField(0x13820);
	}
	static ::Class_2_64C42D6E3CFAFC1F___c** StaticGet___9()
	{
		return (::Class_2_64C42D6E3CFAFC1F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_64C42D6E3CFAFC1F___c_TypeDefinitionIndex)->GetStaticField(0x13828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_64C42D6E3CFAFC1F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64C42D6E3CFAFC1F___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendTrainCakeCatchCatGodInteractCsReq_b__2_0(::Class_1_9BBB3EBE2028834A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BBB3EBE2028834A_4*))((::PBYTE)hIl2Cpp + CLASS_2_64C42D6E3CFAFC1F___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET))(this, a1);
	}
};
