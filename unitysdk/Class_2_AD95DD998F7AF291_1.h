#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46238E85D5A33D06.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define CLASS_2_AD95DD998F7AF291_1_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x127F5F40)
#define CLASS_2_AD95DD998F7AF291_1_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x127F6030)
#define CLASS_2_AD95DD998F7AF291_1__CTOR_OFFSET UNITYSDK_OFFSET(0x127F5EE0)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_1_TypeDefinitionIndex = 41969;

class Class_2_AD95DD998F7AF291_1 : public ::Class_1_46238E85D5A33D06
{
public:
	static ::Class_2_AD95DD998F7AF291_1** StaticGet_Field_2_0()
	{
		return (::Class_2_AD95DD998F7AF291_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AD95DD998F7AF291_1_TypeDefinitionIndex)->GetStaticField(0x2F8C0);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_AD95DD998F7AF291_1* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_AD95DD998F7AF291_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::System::Void Method_2_58BA0C8308C8127F(::Class_2_AD95DD998F7AF291_1* a1)
	{
		return ((::System::Void(*)(::Class_2_AD95DD998F7AF291_1*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_1_METHOD_2_58BA0C8308C8127F_OFFSET))(a1);
	}
};
