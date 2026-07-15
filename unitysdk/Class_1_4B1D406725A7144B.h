#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_4B1D406725A7144B_METHOD_1_76CE385B21223156_OFFSET UNITYSDK_OFFSET(0x1B3E5920)
#define CLASS_1_4B1D406725A7144B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E5A60)

inline static constexpr unsigned int Class_1_4B1D406725A7144B_TypeDefinitionIndex = 11217;

class Class_1_4B1D406725A7144B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::HipplenGameGradeType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1D406725A7144B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_76CE385B21223156(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4B1D406725A7144B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4B1D406725A7144B*&))((::PBYTE)hIl2Cpp + CLASS_1_4B1D406725A7144B_METHOD_1_76CE385B21223156_OFFSET))(a1, a2);
	}
};
