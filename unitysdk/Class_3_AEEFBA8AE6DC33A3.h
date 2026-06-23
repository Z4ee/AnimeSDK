#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0925989BAE43F3CB;
class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_6754EC02980DFFA0_OFFSET UNITYSDK_OFFSET(0x1883DAE0)
#define CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_6CEDADFD6EF362F0_OFFSET UNITYSDK_OFFSET(0x1883DFE0)
#define CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1883D820)
#define CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1883E6A0)
#define CLASS_3_AEEFBA8AE6DC33A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1883E460)

inline static constexpr unsigned int Class_3_AEEFBA8AE6DC33A3_TypeDefinitionIndex = 65579;

class Class_3_AEEFBA8AE6DC33A3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_CF43FA1E89397A1C* Field_3_6; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x30
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_3; // 0x38
	::Class_3_B537A0AA78803363* Field_3_5; // 0x40
	::Class_4_B51FB35349ACD175<::UnityEngine::Vector3>* Field_3_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEEFBA8AE6DC33A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_6754EC02980DFFA0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_6754EC02980DFFA0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_0925989BAE43F3CB* Method_3_6CEDADFD6EF362F0(::MoleMole::EntityHandle a1)
	{
		return ((::Class_2_0925989BAE43F3CB*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_AEEFBA8AE6DC33A3_METHOD_3_6CEDADFD6EF362F0_OFFSET))(a1);
	}
};
