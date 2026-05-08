#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3009C19AEBDD237A.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define CLASS_2_AD95DD998F7AF291_7_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x10378A70)
#define CLASS_2_AD95DD998F7AF291_7_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x10378B60)
#define CLASS_2_AD95DD998F7AF291_7__CTOR_OFFSET UNITYSDK_OFFSET(0x10378A10)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_7_TypeDefinitionIndex = 61166;

class Class_2_AD95DD998F7AF291_7 : public ::Class_1_3009C19AEBDD237A
{
public:
	static ::Class_2_AD95DD998F7AF291_7** StaticGet_Field_2_0()
	{
		return (::Class_2_AD95DD998F7AF291_7**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AD95DD998F7AF291_7_TypeDefinitionIndex)->GetStaticField(0x45310);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_7__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_AD95DD998F7AF291_7* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_AD95DD998F7AF291_7*(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_7_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::System::Void Method_2_58BA0C8308C8127F(::Class_2_AD95DD998F7AF291_7* a1)
	{
		return ((::System::Void(*)(::Class_2_AD95DD998F7AF291_7*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_7_METHOD_2_58BA0C8308C8127F_OFFSET))(a1);
	}
};
