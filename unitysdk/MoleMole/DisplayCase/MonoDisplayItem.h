#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_38EE0169AA9CE03E;

#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_BIND_OFFSET UNITYSDK_OFFSET(0x1A375640)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A375690)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A3756E0)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A375750)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3757C0)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int MonoDisplayItem_TypeDefinitionIndex = 81517;

	class MonoDisplayItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_38EE0169AA9CE03E* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::Class_1_38EE0169AA9CE03E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_BIND_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_ONDESTROY_OFFSET))(this);
		}
	};
}
