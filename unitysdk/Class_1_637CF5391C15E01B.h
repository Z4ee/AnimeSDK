#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_637CF5391C15E01B_METHOD_1_76CE385B21223156_OFFSET UNITYSDK_OFFSET(0x1C760840)
#define CLASS_1_637CF5391C15E01B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C760980)

inline static constexpr unsigned int Class_1_637CF5391C15E01B_TypeDefinitionIndex = 11609;

class Class_1_637CF5391C15E01B : public ::System::Object
{
public:
	::System::String* NNACKOBKFGE; // 0x10
	::RPG::GameCore::HipplenConditionType GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_637CF5391C15E01B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_76CE385B21223156(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_637CF5391C15E01B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_637CF5391C15E01B*&))((::PBYTE)hIl2Cpp + CLASS_1_637CF5391C15E01B_METHOD_1_76CE385B21223156_OFFSET))(a1, a2);
	}
};
