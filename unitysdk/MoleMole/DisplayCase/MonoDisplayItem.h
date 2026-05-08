#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6E06DF87808F0190;

#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_BIND_OFFSET UNITYSDK_OFFSET(0x183E83F0)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183E8440)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x183E8490)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x183E8500)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x183E8570)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int MonoDisplayItem_TypeDefinitionIndex = 67431;

	class MonoDisplayItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_6E06DF87808F0190* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::Class_1_6E06DF87808F0190* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E06DF87808F0190*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_BIND_OFFSET))(this, a1);
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
