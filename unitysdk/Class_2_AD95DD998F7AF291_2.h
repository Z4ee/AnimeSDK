#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FA4B5D207B35C9F5.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define CLASS_2_AD95DD998F7AF291_2_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x18267A10)
#define CLASS_2_AD95DD998F7AF291_2_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x18267A00)
#define CLASS_2_AD95DD998F7AF291_2__CTOR_OFFSET UNITYSDK_OFFSET(0x182679A0)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_2_TypeDefinitionIndex = 47087;

class Class_2_AD95DD998F7AF291_2 : public ::Class_1_FA4B5D207B35C9F5
{
public:
	static ::Class_2_AD95DD998F7AF291_2** StaticGet_Field_2_0()
	{
		return (::Class_2_AD95DD998F7AF291_2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AD95DD998F7AF291_2_TypeDefinitionIndex)->GetStaticField(0x4EFD0);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_2__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_58BA0C8308C8127F(::Class_2_AD95DD998F7AF291_2* a1)
	{
		return ((::System::Void(*)(::Class_2_AD95DD998F7AF291_2*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_2_METHOD_2_58BA0C8308C8127F_OFFSET))(a1);
	}

	static ::Class_2_AD95DD998F7AF291_2* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_AD95DD998F7AF291_2*(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_2_METHOD_2_08A44229CA25E941_OFFSET))();
	}
};
