#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FA4B5D207B35C9F5.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define CLASS_2_AD95DD998F7AF291_5_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x137C3FA0)
#define CLASS_2_AD95DD998F7AF291_5_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x137C4090)
#define CLASS_2_AD95DD998F7AF291_5__CTOR_OFFSET UNITYSDK_OFFSET(0x137C3F40)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_5_TypeDefinitionIndex = 75929;

class Class_2_AD95DD998F7AF291_5 : public ::Class_1_FA4B5D207B35C9F5
{
public:
	static ::Class_2_AD95DD998F7AF291_5** StaticGet_Field_2_0()
	{
		return (::Class_2_AD95DD998F7AF291_5**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AD95DD998F7AF291_5_TypeDefinitionIndex)->GetStaticField(0x31490);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_5__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_AD95DD998F7AF291_5* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_AD95DD998F7AF291_5*(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_5_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::System::Void Method_2_58BA0C8308C8127F(::Class_2_AD95DD998F7AF291_5* a1)
	{
		return ((::System::Void(*)(::Class_2_AD95DD998F7AF291_5*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_5_METHOD_2_58BA0C8308C8127F_OFFSET))(a1);
	}
};
