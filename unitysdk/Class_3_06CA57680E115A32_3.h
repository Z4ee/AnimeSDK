#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_06CA57680E115A32_3_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x187B3B60)
#define CLASS_3_06CA57680E115A32_3_METHOD_3_B45DC2E8B8DF29CA_OFFSET UNITYSDK_OFFSET(0x187B3A80)
#define CLASS_3_06CA57680E115A32_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18957B70)

inline static constexpr unsigned int Class_3_06CA57680E115A32_3_TypeDefinitionIndex = 10083;

class Class_3_06CA57680E115A32_3 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B45DC2E8B8DF29CA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_06CA57680E115A32_3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_06CA57680E115A32_3*&))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_3_METHOD_3_B45DC2E8B8DF29CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_06CA57680E115A32_3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_06CA57680E115A32_3*))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_3_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
