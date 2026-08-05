#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_97A2460014FB0282_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15B96D80)
#define CLASS_4_97A2460014FB0282_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x15B96370)
#define CLASS_4_97A2460014FB0282_METHOD_4_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0x15B96640)
#define CLASS_4_97A2460014FB0282__CTOR_OFFSET UNITYSDK_OFFSET(0x15B96B60)

inline static constexpr unsigned int Class_4_97A2460014FB0282_TypeDefinitionIndex = 55871;

class Class_4_97A2460014FB0282 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_4_7; // 0x28
	::Class_4_8D3E479B491881B3<::System::Single>* Field_4_4; // 0x30
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_5; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x40
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_6; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x50
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97A2460014FB0282__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97A2460014FB0282_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_A32C34C28EBFFA29(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_97A2460014FB0282_METHOD_4_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97A2460014FB0282_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
