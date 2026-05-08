#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_342C7D4C609BE6E5;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_1811539CDB290271_OFFSET UNITYSDK_OFFSET(0xE4D4BE0)
#define CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xE4D5070)
#define CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D4BD0)

inline static constexpr unsigned int Class_1_9AD74D4CD48E713E_Class_1_FBAC5365E48B1189_TypeDefinitionIndex = 52548;

class Class_1_9AD74D4CD48E713E_Class_1_FBAC5365E48B1189 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_2; // 0x10
	::Class_1_342C7D4C609BE6E5* Field_1_3; // 0x18
	::MonoUITableScrollV2* Field_1_4; // 0x20
	::UnityEngine::RectTransform* Field_1_0; // 0x28
	::System::Int32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1811539CDB290271(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_1811539CDB290271_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_CLASS_1_FBAC5365E48B1189_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
