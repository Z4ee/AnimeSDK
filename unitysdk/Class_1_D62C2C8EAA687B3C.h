#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CruiseOrbitBGCurvePlugin;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_306FF05D4DB1C493_OFFSET UNITYSDK_OFFSET(0x18219B60)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_348F043B754F8925_OFFSET UNITYSDK_OFFSET(0x1821A0C0)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x1821A200)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1821A180)
#define CLASS_1_D62C2C8EAA687B3C_METHOD_1_CEAAAB7C9D47D35C_OFFSET UNITYSDK_OFFSET(0x18219C90)
#define CLASS_1_D62C2C8EAA687B3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1821A250)

inline static constexpr unsigned int Class_1_D62C2C8EAA687B3C_TypeDefinitionIndex = 55074;

class Class_1_D62C2C8EAA687B3C : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::CruiseOrbitBGCurvePlugin*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_306FF05D4DB1C493(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_306FF05D4DB1C493_OFFSET))(this, a1);
	}

	::CruiseOrbitBGCurvePlugin* Method_1_CEAAAB7C9D47D35C(::System::String* a1, ::System::String* a2)
	{
		return ((::CruiseOrbitBGCurvePlugin*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_CEAAAB7C9D47D35C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_348F043B754F8925(::CruiseOrbitBGCurvePlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CruiseOrbitBGCurvePlugin*))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_348F043B754F8925_OFFSET))(this, a1);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D62C2C8EAA687B3C_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}
};
