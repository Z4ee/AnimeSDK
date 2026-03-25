#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_06CA57680E115A32_5_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x16BCAE80)
#define CLASS_3_06CA57680E115A32_5_METHOD_3_B45DC2E8B8DF29CA_OFFSET UNITYSDK_OFFSET(0x16BCAD70)
#define CLASS_3_06CA57680E115A32_5__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCAE50)

inline static constexpr unsigned int Class_3_06CA57680E115A32_5_TypeDefinitionIndex = 19451;

class Class_3_06CA57680E115A32_5 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B45DC2E8B8DF29CA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_06CA57680E115A32_5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_06CA57680E115A32_5*&))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_5_METHOD_3_B45DC2E8B8DF29CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_06CA57680E115A32_5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_06CA57680E115A32_5*))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_5_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
