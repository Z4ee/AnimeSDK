#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_2;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_ED2BCBC36469767D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x166BB370)
#define CLASS_1_ED2BCBC36469767D_METHOD_1_147FCE0F047B77D8_OFFSET UNITYSDK_OFFSET(0x166BB6C0)
#define CLASS_1_ED2BCBC36469767D_METHOD_1_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x166BB4D0)
#define CLASS_1_ED2BCBC36469767D__CTOR_OFFSET UNITYSDK_OFFSET(0x166BB1C0)

inline static constexpr unsigned int Class_1_ED2BCBC36469767D_TypeDefinitionIndex = 29096;

class Class_1_ED2BCBC36469767D : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>* Field_1_3; // 0x10
	::Class_2_099B78418029B3B1_2* Field_1_0; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x20
	::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>* Field_1_2; // 0x28
	::System::Int32 Field_1_4; // 0x30

	::System::Void _ctor(::Class_2_099B78418029B3B1_2* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_099B78418029B3B1_2*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_ED2BCBC36469767D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2BCBC36469767D_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2BCBC36469767D_METHOD_1_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void Method_1_147FCE0F047B77D8(::Class_2_3ABA989E5AECB261* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*))((::PBYTE)hIl2Cpp + CLASS_1_ED2BCBC36469767D_METHOD_1_147FCE0F047B77D8_OFFSET))(this, a1);
	}
};
