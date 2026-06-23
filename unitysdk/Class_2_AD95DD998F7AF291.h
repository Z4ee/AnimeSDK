#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46238E85D5A33D06.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define CLASS_2_AD95DD998F7AF291_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0xE818500)
#define CLASS_2_AD95DD998F7AF291_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0xE8185F0)
#define CLASS_2_AD95DD998F7AF291__CTOR_OFFSET UNITYSDK_OFFSET(0xE8184A0)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_TypeDefinitionIndex = 40452;

class Class_2_AD95DD998F7AF291 : public ::Class_1_46238E85D5A33D06
{
public:
	static ::Class_2_AD95DD998F7AF291** StaticGet_Field_2_0()
	{
		return (::Class_2_AD95DD998F7AF291**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AD95DD998F7AF291_TypeDefinitionIndex)->GetStaticField(0x45E60);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_AD95DD998F7AF291* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_AD95DD998F7AF291*(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::System::Void Method_2_58BA0C8308C8127F(::Class_2_AD95DD998F7AF291* a1)
	{
		return ((::System::Void(*)(::Class_2_AD95DD998F7AF291*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_METHOD_2_58BA0C8308C8127F_OFFSET))(a1);
	}
};
