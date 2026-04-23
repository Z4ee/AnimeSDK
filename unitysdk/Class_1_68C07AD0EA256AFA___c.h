#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_68C07AD0EA256AFA;

#define CLASS_1_68C07AD0EA256AFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1951BA80)
#define CLASS_1_68C07AD0EA256AFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1951BAC0)
#define CLASS_1_68C07AD0EA256AFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1951BAD0)

inline static constexpr unsigned int Class_1_68C07AD0EA256AFA___c_TypeDefinitionIndex = 30540;

class Class_1_68C07AD0EA256AFA___c : public ::System::Object
{
public:
	static ::Class_1_68C07AD0EA256AFA___c** StaticGet___9()
	{
		return (::Class_1_68C07AD0EA256AFA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68C07AD0EA256AFA___c_TypeDefinitionIndex)->GetStaticField(0x45770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68C07AD0EA256AFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C07AD0EA256AFA___C__CTOR_OFFSET))(this);
	}

	::Class_1_68C07AD0EA256AFA* __cctor_b__33_0()
	{
		return ((::Class_1_68C07AD0EA256AFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C07AD0EA256AFA___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
