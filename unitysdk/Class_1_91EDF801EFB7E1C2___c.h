#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D901FCC8D1C685B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_91EDF801EFB7E1C2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC71A380)
#define CLASS_1_91EDF801EFB7E1C2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC71A3C0)
#define CLASS_1_91EDF801EFB7E1C2___C__ISALLREWARDCLAIMED_B__10_0_OFFSET UNITYSDK_OFFSET(0xC71A3D0)

inline static constexpr unsigned int Class_1_91EDF801EFB7E1C2___c_TypeDefinitionIndex = 56633;

class Class_1_91EDF801EFB7E1C2___c : public ::System::Object
{
public:
	static ::Class_1_91EDF801EFB7E1C2___c** StaticGet___9()
	{
		return (::Class_1_91EDF801EFB7E1C2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91EDF801EFB7E1C2___c_TypeDefinitionIndex)->GetStaticField(0x6AD70);
	}
	static ::System::Func_2<::Class_2_6D901FCC8D1C685B*, ::System::Boolean>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::Class_2_6D901FCC8D1C685B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91EDF801EFB7E1C2___c_TypeDefinitionIndex)->GetStaticField(0x6AD78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsAllRewardClaimed_b__10_0(::Class_2_6D901FCC8D1C685B* r)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6D901FCC8D1C685B*))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2___C__ISALLREWARDCLAIMED_B__10_0_OFFSET))(this, r);
	}
};
