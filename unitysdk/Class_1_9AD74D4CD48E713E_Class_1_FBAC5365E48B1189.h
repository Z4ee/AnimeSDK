#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_342C7D4C609BE6E5;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_1811539CDB290271_OFFSET UNITYSDK_OFFSET(0x12C69460)
#define CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_E0B410E360302D1D_OFFSET UNITYSDK_OFFSET(0x12C698F0)
#define CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189__CTOR_OFFSET UNITYSDK_OFFSET(0x12C69450)

inline static constexpr unsigned int Class_1_9AD74D4CD48E713E_Class_1_FBAC5365E48B1189_TypeDefinitionIndex = 44891;

class Class_1_9AD74D4CD48E713E_Class_1_FBAC5365E48B1189 : public ::System::Object
{
public:
	::MonoUITableScrollV2* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_7; // 0x18
	::Class_1_342C7D4C609BE6E5* Field_1_6; // 0x20
	::UnityEngine::RectTransform* Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1811539CDB290271(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_1811539CDB290271_OFFSET))(this, a1);
	}

	::System::Void Method_1_E0B410E360302D1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_E0B410E360302D1D_OFFSET))(this);
	}
};
