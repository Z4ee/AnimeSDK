#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_68C07AD0EA256AFA;

#define CLASS_1_68C07AD0EA256AFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A943530)
#define CLASS_1_68C07AD0EA256AFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A943570)
#define CLASS_1_68C07AD0EA256AFA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A943580)

inline static constexpr unsigned int Class_1_68C07AD0EA256AFA___c_TypeDefinitionIndex = 27646;

class Class_1_68C07AD0EA256AFA___c : public ::System::Object
{
public:
	static ::Class_1_68C07AD0EA256AFA___c** StaticGet___9()
	{
		return (::Class_1_68C07AD0EA256AFA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68C07AD0EA256AFA___c_TypeDefinitionIndex)->GetStaticField(0x1BB40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68C07AD0EA256AFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C07AD0EA256AFA___C__CTOR_OFFSET))(this);
	}

	::Class_1_68C07AD0EA256AFA* __cctor_b__38_0()
	{
		return ((::Class_1_68C07AD0EA256AFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C07AD0EA256AFA___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
