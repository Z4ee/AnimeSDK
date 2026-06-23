#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_F969215F73192D65;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define CLASS_1_84354C691676A522_CLASS_1_B33678FA24F1797C_METHOD_1_EF8903E24790ABBD_OFFSET UNITYSDK_OFFSET(0x13A5FA90)
#define CLASS_1_84354C691676A522_CLASS_1_B33678FA24F1797C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5FA80)

inline static constexpr unsigned int Class_1_84354C691676A522_Class_1_B33678FA24F1797C_TypeDefinitionIndex = 77187;

class Class_1_84354C691676A522_Class_1_B33678FA24F1797C : public ::System::Object
{
public:
	::Class_1_F969215F73192D65* Field_1_1; // 0x10
	::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_F969215F73192D65*>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_CLASS_1_B33678FA24F1797C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF8903E24790ABBD(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_CLASS_1_B33678FA24F1797C_METHOD_1_EF8903E24790ABBD_OFFSET))(this, a1, a2);
	}
};
