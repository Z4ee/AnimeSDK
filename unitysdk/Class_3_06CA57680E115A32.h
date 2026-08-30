#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_06CA57680E115A32_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x1CB58460)
#define CLASS_3_06CA57680E115A32_METHOD_3_782CF4EB124365DC_OFFSET UNITYSDK_OFFSET(0x1CB58400)
#define CLASS_3_06CA57680E115A32__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB58450)

inline static constexpr unsigned int Class_3_06CA57680E115A32_TypeDefinitionIndex = 23108;

class Class_3_06CA57680E115A32 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_782CF4EB124365DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_06CA57680E115A32*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_06CA57680E115A32*&))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_METHOD_3_782CF4EB124365DC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_06CA57680E115A32* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_06CA57680E115A32*))((::PBYTE)hIl2Cpp + CLASS_3_06CA57680E115A32_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
