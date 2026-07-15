#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_FA3DB7B30E78C0CA_METHOD_3_2FCBD790A23870D3_OFFSET UNITYSDK_OFFSET(0xBAF32B0)
#define CLASS_3_FA3DB7B30E78C0CA_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0xBAF3380)
#define CLASS_3_FA3DB7B30E78C0CA__CTOR_OFFSET UNITYSDK_OFFSET(0xBAF3370)

inline static constexpr unsigned int Class_3_FA3DB7B30E78C0CA_TypeDefinitionIndex = 9897;

class Class_3_FA3DB7B30E78C0CA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA3DB7B30E78C0CA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2FCBD790A23870D3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FA3DB7B30E78C0CA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FA3DB7B30E78C0CA*&))((::PBYTE)hIl2Cpp + CLASS_3_FA3DB7B30E78C0CA_METHOD_3_2FCBD790A23870D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FA3DB7B30E78C0CA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FA3DB7B30E78C0CA*))((::PBYTE)hIl2Cpp + CLASS_3_FA3DB7B30E78C0CA_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
