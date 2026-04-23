#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C84A84118567060F;

#define CLASS_1_4D2DA7CD2E59DEF1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x11B5B690)
#define CLASS_1_4D2DA7CD2E59DEF1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B5B7E0)
#define CLASS_1_4D2DA7CD2E59DEF1_EQUALS_OFFSET UNITYSDK_OFFSET(0x11B5B790)
#define CLASS_1_4D2DA7CD2E59DEF1_METHOD_1_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x11B5B870)
#define CLASS_1_4D2DA7CD2E59DEF1_METHOD_1_3F07BC3CECBC67EF_OFFSET UNITYSDK_OFFSET(0x11B5B930)
#define CLASS_1_4D2DA7CD2E59DEF1_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x11B5B630)
#define CLASS_1_4D2DA7CD2E59DEF1__CTOR_OFFSET UNITYSDK_OFFSET(0x11B5B670)

inline static constexpr unsigned int Class_1_4D2DA7CD2E59DEF1_TypeDefinitionIndex = 45576;

class Class_1_4D2DA7CD2E59DEF1 : public ::System::Object
{
public:
	::Class_1_4D2DA7CD2E59DEF1* Field_1_2; // 0x10
	::Struct_2_23A3535C3AD26D5F Field_1_4; // 0x18
	::System::Single Field_1_0; // 0x28
	::System::Single Field_1_1; // 0x2C
	::UnityEngine::Vector3 Field_1_3; // 0x30

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::Struct_2_23A3535C3AD26D5F a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_4D2DA7CD2E59DEF1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_C84A84118567060F* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_C84A84118567060F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D2DA7CD2E59DEF1_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_4D2DA7CD2E59DEF1* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_1_4D2DA7CD2E59DEF1_COMPARETO_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_1_4D2DA7CD2E59DEF1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_1_4D2DA7CD2E59DEF1_EQUALS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D2DA7CD2E59DEF1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_18ABA27B5DEF4779(::Class_1_4D2DA7CD2E59DEF1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_1_4D2DA7CD2E59DEF1_METHOD_1_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Single Method_1_3F07BC3CECBC67EF(::Class_1_4D2DA7CD2E59DEF1* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_1_4D2DA7CD2E59DEF1_METHOD_1_3F07BC3CECBC67EF_OFFSET))(this, a1);
	}
};
