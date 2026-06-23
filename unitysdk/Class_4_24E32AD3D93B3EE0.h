#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_24E32AD3D93B3EE0_METHOD_4_25B9FA7D8C5654B1_OFFSET UNITYSDK_OFFSET(0x1340F540)
#define CLASS_4_24E32AD3D93B3EE0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1340F7C0)
#define CLASS_4_24E32AD3D93B3EE0_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1340F390)
#define CLASS_4_24E32AD3D93B3EE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1340F660)

inline static constexpr unsigned int Class_4_24E32AD3D93B3EE0_TypeDefinitionIndex = 68485;

class Class_4_24E32AD3D93B3EE0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_3; // 0x28
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_0; // 0x30
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_1; // 0x38
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24E32AD3D93B3EE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24E32AD3D93B3EE0_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_25B9FA7D8C5654B1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_24E32AD3D93B3EE0_METHOD_4_25B9FA7D8C5654B1_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24E32AD3D93B3EE0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
