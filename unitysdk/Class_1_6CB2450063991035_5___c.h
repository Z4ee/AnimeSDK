#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CB2450063991035_5;

#define CLASS_1_6CB2450063991035_5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D94FC00)
#define CLASS_1_6CB2450063991035_5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D94FC40)
#define CLASS_1_6CB2450063991035_5___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1D94FC50)

inline static constexpr unsigned int Class_1_6CB2450063991035_5___c_TypeDefinitionIndex = 28230;

class Class_1_6CB2450063991035_5___c : public ::System::Object
{
public:
	static ::Class_1_6CB2450063991035_5___c** StaticGet___9()
	{
		return (::Class_1_6CB2450063991035_5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035_5___c_TypeDefinitionIndex)->GetStaticField(0xA280);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_5___C__CTOR_OFFSET))(this);
	}

	::Class_1_6CB2450063991035_5* __cctor_b__33_0()
	{
		return ((::Class_1_6CB2450063991035_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_5___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
