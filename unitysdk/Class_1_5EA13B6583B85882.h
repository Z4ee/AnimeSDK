#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1A4ED5CB1A221EF5;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_1_5EA13B6583B85882_METHOD_1_69B5998585B952C1_OFFSET UNITYSDK_OFFSET(0xF116010)
#define CLASS_1_5EA13B6583B85882_METHOD_1_B2FF5476317D49B7_OFFSET UNITYSDK_OFFSET(0xF116180)
#define CLASS_1_5EA13B6583B85882_METHOD_1_C9E97FC53E874ADF_OFFSET UNITYSDK_OFFSET(0xF115E70)

inline static constexpr unsigned int Class_1_5EA13B6583B85882_TypeDefinitionIndex = 43519;

class Class_1_5EA13B6583B85882 : public ::System::Object
{
public:
	static ::System::Void Method_1_C9E97FC53E874ADF(::Class_3_1A4ED5CB1A221EF5* a1)
	{
		return ((::System::Void(*)(::Class_3_1A4ED5CB1A221EF5*))((::PBYTE)hIl2Cpp + CLASS_1_5EA13B6583B85882_METHOD_1_C9E97FC53E874ADF_OFFSET))(a1);
	}

	static ::Nap::NapECS::EcsFilter* Method_1_69B5998585B952C1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_1_5EA13B6583B85882_METHOD_1_69B5998585B952C1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B2FF5476317D49B7(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_1_5EA13B6583B85882_METHOD_1_B2FF5476317D49B7_OFFSET))(a1);
	}
};
