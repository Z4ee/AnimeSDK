#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_3D007FD80807661A_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x193A9240)
#define CLASS_3_3D007FD80807661A_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x193A9230)
#define CLASS_3_3D007FD80807661A_METHOD_3_8EAD23D09983506F_OFFSET UNITYSDK_OFFSET(0x193A9250)
#define CLASS_3_3D007FD80807661A_METHOD_3_C6E8029EE3AA8548_OFFSET UNITYSDK_OFFSET(0x193A8F10)
#define CLASS_3_3D007FD80807661A_METHOD_3_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x193A8BC0)
#define CLASS_3_3D007FD80807661A_ONDETACH_OFFSET UNITYSDK_OFFSET(0x193A8B70)
#define CLASS_3_3D007FD80807661A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x193A8E80)
#define CLASS_3_3D007FD80807661A__CTOR_OFFSET UNITYSDK_OFFSET(0x193A8ED0)

inline static constexpr unsigned int Class_3_3D007FD80807661A_TypeDefinitionIndex = 65795;

class Class_3_3D007FD80807661A : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_3D007FD80807661A*>
{
public:
	::UnityEngine::GameObject* Field_3_1; // 0x20
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A__CTOR_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A_ONRECYCLE_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_C6E8029EE3AA8548()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A_METHOD_3_C6E8029EE3AA8548_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_8EAD23D09983506F()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A_METHOD_3_8EAD23D09983506F_OFFSET))(this);
	}

	::System::Void Method_3_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D007FD80807661A_METHOD_3_C7BF9C1E6A78DCAB_OFFSET))(this);
	}
};
