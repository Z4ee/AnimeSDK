#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_6A3A26AD0CB7F995;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3CE784169D306EF0_BINDENTITY_OFFSET UNITYSDK_OFFSET(0xF239390)
#define CLASS_1_3CE784169D306EF0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF239300)
#define CLASS_1_3CE784169D306EF0_HIDEENERGYBAR_OFFSET UNITYSDK_OFFSET(0xF2393E0)
#define CLASS_1_3CE784169D306EF0_ONAVATARPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xF239340)
#define CLASS_1_3CE784169D306EF0_SHOWENERGYBAR_OFFSET UNITYSDK_OFFSET(0xF239430)
#define CLASS_1_3CE784169D306EF0__CTOR_OFFSET UNITYSDK_OFFSET(0xF2392F0)

inline static constexpr unsigned int Class_1_3CE784169D306EF0_TypeDefinitionIndex = 56138;

class Class_1_3CE784169D306EF0 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3CE784169D306EF0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE784169D306EF0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnAvatarPropertyChange(::Class_1_6A3A26AD0CB7F995* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A3A26AD0CB7F995*))((::PBYTE)hIl2Cpp + CLASS_1_3CE784169D306EF0_ONAVATARPROPERTYCHANGE_OFFSET))(this, a1);
	}

	::System::Void BindEntity(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_3CE784169D306EF0_BINDENTITY_OFFSET))(this, a1);
	}

	::System::Void HideEnergyBar()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE784169D306EF0_HIDEENERGYBAR_OFFSET))(this);
	}

	::System::Void ShowEnergyBar()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE784169D306EF0_SHOWENERGYBAR_OFFSET))(this);
	}
};
