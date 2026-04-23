#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9FB7963A4040E4D;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8CAAB3EB14D5C9CA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124BEEA0)
#define CLASS_2_8CAAB3EB14D5C9CA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124BEEE0)
#define CLASS_2_8CAAB3EB14D5C9CA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET UNITYSDK_OFFSET(0x124BEEF0)

inline static constexpr unsigned int Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex = 68484;

class Class_2_8CAAB3EB14D5C9CA___c : public ::System::Object
{
public:
	static ::Class_2_8CAAB3EB14D5C9CA___c** StaticGet___9()
	{
		return (::Class_2_8CAAB3EB14D5C9CA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex)->GetStaticField(0x60060);
	}
	static ::System::Action_1<::Class_1_E9FB7963A4040E4D*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_E9FB7963A4040E4D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex)->GetStaticField(0x60068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendTrainCakeCatchCatGodInteractCsReq_b__2_0(::Class_1_E9FB7963A4040E4D* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9FB7963A4040E4D*))((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET))(this, rsp);
	}
};
