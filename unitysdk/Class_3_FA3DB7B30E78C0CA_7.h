#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_FA3DB7B30E78C0CA_7_METHOD_3_2FCBD790A23870D3_OFFSET UNITYSDK_OFFSET(0x16F37230)
#define CLASS_3_FA3DB7B30E78C0CA_7_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x16F37300)
#define CLASS_3_FA3DB7B30E78C0CA_7__CTOR_OFFSET UNITYSDK_OFFSET(0x16F372F0)

inline static constexpr unsigned int Class_3_FA3DB7B30E78C0CA_7_TypeDefinitionIndex = 10236;

class Class_3_FA3DB7B30E78C0CA_7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA3DB7B30E78C0CA_7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2FCBD790A23870D3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FA3DB7B30E78C0CA_7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FA3DB7B30E78C0CA_7*&))((::PBYTE)hIl2Cpp + CLASS_3_FA3DB7B30E78C0CA_7_METHOD_3_2FCBD790A23870D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FA3DB7B30E78C0CA_7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FA3DB7B30E78C0CA_7*))((::PBYTE)hIl2Cpp + CLASS_3_FA3DB7B30E78C0CA_7_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
