#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8CC61AD64FF9091_32;

#define CLASS_1_D8CC61AD64FF9091_32___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0AC7F0)
#define CLASS_1_D8CC61AD64FF9091_32___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AC820)
#define CLASS_1_D8CC61AD64FF9091_32___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1D0AC830)

inline static constexpr unsigned int Class_1_D8CC61AD64FF9091_32___c_TypeDefinitionIndex = 31809;

class Class_1_D8CC61AD64FF9091_32___c : public ::System::Object
{
public:
	static ::Class_1_D8CC61AD64FF9091_32___c** StaticGet___9()
	{
		return (::Class_1_D8CC61AD64FF9091_32___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8CC61AD64FF9091_32___c_TypeDefinitionIndex)->GetStaticField(0x3F9F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_32___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_32___C__CTOR_OFFSET))(this);
	}

	::Class_1_D8CC61AD64FF9091_32* __cctor_b__28_0()
	{
		return ((::Class_1_D8CC61AD64FF9091_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_32___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
