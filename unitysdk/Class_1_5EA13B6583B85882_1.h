#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_1_5EA13B6583B85882_1_METHOD_1_69B5998585B952C1_OFFSET UNITYSDK_OFFSET(0x94F1CB0)
#define CLASS_1_5EA13B6583B85882_1_METHOD_1_B2FF5476317D49B7_OFFSET UNITYSDK_OFFSET(0x94F1B80)

inline static constexpr unsigned int Class_1_5EA13B6583B85882_1_TypeDefinitionIndex = 67193;

class Class_1_5EA13B6583B85882_1 : public ::System::Object
{
public:
	static ::System::Void Method_1_B2FF5476317D49B7(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_1_5EA13B6583B85882_1_METHOD_1_B2FF5476317D49B7_OFFSET))(a1);
	}

	static ::Nap::NapECS::EcsFilter* Method_1_69B5998585B952C1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_1_5EA13B6583B85882_1_METHOD_1_69B5998585B952C1_OFFSET))(a1);
	}
};
