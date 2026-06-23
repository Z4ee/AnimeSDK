#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1A4ED5CB1A221EF5_1;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_1_BA49A6DEBAD64771_METHOD_1_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0x155A4DB0)
#define CLASS_1_BA49A6DEBAD64771_METHOD_1_69B5998585B952C1_OFFSET UNITYSDK_OFFSET(0x155A5080)
#define CLASS_1_BA49A6DEBAD64771_METHOD_1_B2FF5476317D49B7_OFFSET UNITYSDK_OFFSET(0x155A4F50)

inline static constexpr unsigned int Class_1_BA49A6DEBAD64771_TypeDefinitionIndex = 44220;

class Class_1_BA49A6DEBAD64771 : public ::System::Object
{
public:
	static ::System::Void Method_1_4BDCD8817E21E5A1(::Class_3_1A4ED5CB1A221EF5_1* a1)
	{
		return ((::System::Void(*)(::Class_3_1A4ED5CB1A221EF5_1*))((::PBYTE)hIl2Cpp + CLASS_1_BA49A6DEBAD64771_METHOD_1_4BDCD8817E21E5A1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B2FF5476317D49B7(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_1_BA49A6DEBAD64771_METHOD_1_B2FF5476317D49B7_OFFSET))(a1);
	}

	static ::Nap::NapECS::EcsFilter* Method_1_69B5998585B952C1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_1_BA49A6DEBAD64771_METHOD_1_69B5998585B952C1_OFFSET))(a1);
	}
};
