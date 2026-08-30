#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_68C34B5C1C40C2FF_2_METHOD_2_95BA474848C12124_OFFSET UNITYSDK_OFFSET(0x1D0DA290)
#define CLASS_2_68C34B5C1C40C2FF_2_METHOD_2_F66407A2967445E8_OFFSET UNITYSDK_OFFSET(0x1D0DA0C0)
#define CLASS_2_68C34B5C1C40C2FF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DA2F0)

inline static constexpr unsigned int Class_2_68C34B5C1C40C2FF_2_TypeDefinitionIndex = 23071;

class Class_2_68C34B5C1C40C2FF_2 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_F66407A2967445E8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_68C34B5C1C40C2FF_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_68C34B5C1C40C2FF_2*&))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_2_METHOD_2_F66407A2967445E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_95BA474848C12124(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_68C34B5C1C40C2FF_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_68C34B5C1C40C2FF_2*))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_2_METHOD_2_95BA474848C12124_OFFSET))(a1, a2);
	}
};
