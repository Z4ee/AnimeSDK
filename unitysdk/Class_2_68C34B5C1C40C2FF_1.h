#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_68C34B5C1C40C2FF_1_METHOD_2_95BA474848C12124_OFFSET UNITYSDK_OFFSET(0x1CA9A1E0)
#define CLASS_2_68C34B5C1C40C2FF_1_METHOD_2_BABF40084C97A8D9_OFFSET UNITYSDK_OFFSET(0x1CA99FA0)
#define CLASS_2_68C34B5C1C40C2FF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9A240)

inline static constexpr unsigned int Class_2_68C34B5C1C40C2FF_1_TypeDefinitionIndex = 21156;

class Class_2_68C34B5C1C40C2FF_1 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_BABF40084C97A8D9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_68C34B5C1C40C2FF_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_68C34B5C1C40C2FF_1*&))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_1_METHOD_2_BABF40084C97A8D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_95BA474848C12124(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_68C34B5C1C40C2FF_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_68C34B5C1C40C2FF_1*))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_1_METHOD_2_95BA474848C12124_OFFSET))(a1, a2);
	}
};
