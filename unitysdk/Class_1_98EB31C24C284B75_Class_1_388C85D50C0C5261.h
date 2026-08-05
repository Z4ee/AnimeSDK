#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_98EB31C24C284B75;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_98EB31C24C284B75_CLASS_1_388C85D50C0C5261_METHOD_1_5376525AEB509153_OFFSET UNITYSDK_OFFSET(0xE52D240)
#define CLASS_1_98EB31C24C284B75_CLASS_1_388C85D50C0C5261__CTOR_OFFSET UNITYSDK_OFFSET(0xE52D230)

inline static constexpr unsigned int Class_1_98EB31C24C284B75_Class_1_388C85D50C0C5261_TypeDefinitionIndex = 64041;

class Class_1_98EB31C24C284B75_Class_1_388C85D50C0C5261 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_0; // 0x10
	::Class_1_98EB31C24C284B75* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_1_388C85D50C0C5261__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5376525AEB509153(::System::Boolean a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_1_388C85D50C0C5261_METHOD_1_5376525AEB509153_OFFSET))(this, a1, a2);
	}
};
