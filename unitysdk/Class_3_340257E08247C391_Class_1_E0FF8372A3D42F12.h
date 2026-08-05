#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_3_340257E08247C391_CLASS_1_E0FF8372A3D42F12_METHOD_1_319F2519F79E8A72_OFFSET UNITYSDK_OFFSET(0x17EA3C70)
#define CLASS_3_340257E08247C391_CLASS_1_E0FF8372A3D42F12_METHOD_1_B22AB50CBFF80D12_OFFSET UNITYSDK_OFFSET(0x17EA3F20)
#define CLASS_3_340257E08247C391_CLASS_1_E0FF8372A3D42F12__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA3C60)

inline static constexpr unsigned int Class_3_340257E08247C391_Class_1_E0FF8372A3D42F12_TypeDefinitionIndex = 86561;

class Class_3_340257E08247C391_Class_1_E0FF8372A3D42F12 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_8; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_6; // 0x1C
	::System::Boolean Field_1_4; // 0x20
	::System::Boolean Field_1_11; // 0x21
	::System::Boolean Field_1_9; // 0x22
	::System::Boolean Field_1_10; // 0x23
	::UnityEngine::Vector3 Field_1_0; // 0x24
	::System::Single Field_1_7; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_340257E08247C391_CLASS_1_E0FF8372A3D42F12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_319F2519F79E8A72(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_340257E08247C391_CLASS_1_E0FF8372A3D42F12_METHOD_1_319F2519F79E8A72_OFFSET))(this, a1);
	}

	::System::Void Method_1_B22AB50CBFF80D12(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_3_340257E08247C391_CLASS_1_E0FF8372A3D42F12_METHOD_1_B22AB50CBFF80D12_OFFSET))(this, a1, a2);
	}
};
