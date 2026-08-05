#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_25290555339097B0.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_1_BE29B49AC03370B6;
class Class_2_208CC9941471731A_171;
class Class_4_1B03886724BD4CD7;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_1B03886724BD4CD7_CLASS_1_79F9EF212C1F69EE_METHOD_1_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x167CF220)
#define CLASS_4_1B03886724BD4CD7_CLASS_1_79F9EF212C1F69EE_METHOD_1_C0ECC1760D242EA5_OFFSET UNITYSDK_OFFSET(0x167CEEB0)
#define CLASS_4_1B03886724BD4CD7_CLASS_1_79F9EF212C1F69EE__CTOR_OFFSET UNITYSDK_OFFSET(0x167CEEA0)

inline static constexpr unsigned int Class_4_1B03886724BD4CD7_Class_1_79F9EF212C1F69EE_TypeDefinitionIndex = 74185;

class Class_4_1B03886724BD4CD7_Class_1_79F9EF212C1F69EE : public ::System::Object
{
public:
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_10; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::Class_2_208CC9941471731A_171* Field_1_7; // 0x20
	::Class_4_1B03886724BD4CD7* Field_1_6; // 0x28
	::Struct_2_FE9BD044832BC9C3 Field_1_11; // 0x30
	::Struct_2_25290555339097B0 Field_1_4; // 0x60
	::System::Int32 Field_1_5; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B03886724BD4CD7_CLASS_1_79F9EF212C1F69EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C0ECC1760D242EA5(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_1B03886724BD4CD7_CLASS_1_79F9EF212C1F69EE_METHOD_1_C0ECC1760D242EA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_2943CB55423DBA35(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_4_1B03886724BD4CD7_CLASS_1_79F9EF212C1F69EE_METHOD_1_2943CB55423DBA35_OFFSET))(this, a1);
	}
};
