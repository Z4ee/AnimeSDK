#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_2_8AC1E618F6014D69_METHOD_2_6475A02AD37A8BE6_OFFSET UNITYSDK_OFFSET(0x1D297D70)
#define CLASS_2_8AC1E618F6014D69_METHOD_2_73A5AD30183CEFAD_OFFSET UNITYSDK_OFFSET(0x1D297F30)
#define CLASS_2_8AC1E618F6014D69__CTOR_OFFSET UNITYSDK_OFFSET(0x1D297FD0)

inline static constexpr unsigned int Class_2_8AC1E618F6014D69_TypeDefinitionIndex = 23066;

class Class_2_8AC1E618F6014D69 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::TargetEvaluator* CLBOONHBCLJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1E618F6014D69__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_6475A02AD37A8BE6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_8AC1E618F6014D69*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_8AC1E618F6014D69*&))((::PBYTE)hIl2Cpp + CLASS_2_8AC1E618F6014D69_METHOD_2_6475A02AD37A8BE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_73A5AD30183CEFAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_8AC1E618F6014D69* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_8AC1E618F6014D69*))((::PBYTE)hIl2Cpp + CLASS_2_8AC1E618F6014D69_METHOD_2_73A5AD30183CEFAD_OFFSET))(a1, a2);
	}
};
