#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_2C1B0DD8490568C2_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x18791430)
#define CLASS_3_2C1B0DD8490568C2_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x187914B0)
#define CLASS_3_2C1B0DD8490568C2__CTOR_OFFSET UNITYSDK_OFFSET(0x18791480)

inline static constexpr unsigned int Class_3_2C1B0DD8490568C2_TypeDefinitionIndex = 21751;

class Class_3_2C1B0DD8490568C2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_3; // 0x20
	::System::String* Field_3_1; // 0x28
	::System::Boolean Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C1B0DD8490568C2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2C1B0DD8490568C2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2C1B0DD8490568C2*&))((::PBYTE)hIl2Cpp + CLASS_3_2C1B0DD8490568C2_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2C1B0DD8490568C2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2C1B0DD8490568C2*))((::PBYTE)hIl2Cpp + CLASS_3_2C1B0DD8490568C2_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
