#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FAF146B3D74C3C3F_METHOD_1_107B313D17FCB4F7_OFFSET UNITYSDK_OFFSET(0x163E5230)
#define CLASS_1_FAF146B3D74C3C3F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163E51C0)
#define CLASS_1_FAF146B3D74C3C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x163E51B0)

inline static constexpr unsigned int Class_1_FAF146B3D74C3C3F_TypeDefinitionIndex = 80916;

class Class_1_FAF146B3D74C3C3F : public ::System::Object
{
public:
	::System::String* BOOJMDODFBI; // 0x10
	::System::Int32 CJCCLNEDGKB; // 0x18
	::System::Int32 HDCADKFBLPF; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FAF146B3D74C3C3F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAF146B3D74C3C3F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_107B313D17FCB4F7(::Class_1_FAF146B3D74C3C3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAF146B3D74C3C3F*))((::PBYTE)hIl2Cpp + CLASS_1_FAF146B3D74C3C3F_METHOD_1_107B313D17FCB4F7_OFFSET))(this, a1);
	}
};
