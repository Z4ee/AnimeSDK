#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_AABF507270405409_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1443F160)
#define CLASS_3_AABF507270405409_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1443F150)
#define CLASS_3_AABF507270405409_METHOD_3_8EAD23D09983506F_OFFSET UNITYSDK_OFFSET(0x1443ECC0)
#define CLASS_3_AABF507270405409_METHOD_3_C6E8029EE3AA8548_OFFSET UNITYSDK_OFFSET(0x1443EE30)
#define CLASS_3_AABF507270405409_METHOD_3_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1443E920)
#define CLASS_3_AABF507270405409_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1443E8D0)
#define CLASS_3_AABF507270405409_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1443EBE0)
#define CLASS_3_AABF507270405409__CTOR_OFFSET UNITYSDK_OFFSET(0x1443EC30)

inline static constexpr unsigned int Class_3_AABF507270405409_TypeDefinitionIndex = 87416;

class Class_3_AABF507270405409 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_AABF507270405409*>
{
public:
	::UnityEngine::GameObject* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409__CTOR_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409_ONRECYCLE_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_8EAD23D09983506F()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409_METHOD_3_8EAD23D09983506F_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409_METHOD_3_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_C6E8029EE3AA8548()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409_METHOD_3_C6E8029EE3AA8548_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABF507270405409_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
