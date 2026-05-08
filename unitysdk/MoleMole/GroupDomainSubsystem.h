#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_2_0D3FD2899AF15322;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_19F8D0BF0A8C8F12;

#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_DISABLEGROUPDOMAINDISPLAY_OFFSET UNITYSDK_OFFSET(0x1233D480)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ENABLEGROUPDOMAINDISPLAY_OFFSET UNITYSDK_OFFSET(0x1233D110)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1233BE20)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1233BFE0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINRATIOCHANGED_OFFSET UNITYSDK_OFFSET(0x1233CA90)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINRESOURCECHANGED_OFFSET UNITYSDK_OFFSET(0x1233C840)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1233CB10)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1233C120)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_REGISTERGROUPDOMAINFIELDMIXIN_OFFSET UNITYSDK_OFFSET(0x1233C180)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_TRYGETGROUPDOMAINBYENTITYID_OFFSET UNITYSDK_OFFSET(0x1233D300)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_UNREGISTERGROUPDOMAINFIELDMIXIN_OFFSET UNITYSDK_OFFSET(0x1233C590)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_UPDATEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1233CC90)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_UPDATEINDIVIDUALDATA_OFFSET UNITYSDK_OFFSET(0x1233C8C0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1233D5F0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1233D610)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1233D650)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1233D690)

namespace MoleMole
{
	inline static constexpr unsigned int GroupDomainSubsystem_TypeDefinitionIndex = 50494;

	class GroupDomainSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GroupDomainSubsystem*>
	{
	public:
		::Class_1_19F8D0BF0A8C8F12<::System::UInt32, ::Class_2_0D3FD2899AF15322*>* GroupDomainMap; // 0x10
		::System::Collections::Generic::List_1<::Class_2_0D3FD2899AF15322*>* GroupDomainMixinCollection; // 0x18
		::System::UInt32 CurrentMainGroup; // 0x20
		::System::UInt32 CurrentMainGroupDomain; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::UInt32 RegisterGroupDomainFieldMixin(::Class_2_0D3FD2899AF15322* mixin)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_2_0D3FD2899AF15322*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_REGISTERGROUPDOMAINFIELDMIXIN_OFFSET))(this, mixin);
		}

		::System::Void UnregisterGroupDomainFieldMixin(::Class_2_0D3FD2899AF15322* mixin, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D3FD2899AF15322*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_UNREGISTERGROUPDOMAINFIELDMIXIN_OFFSET))(this, mixin, groupID);
		}

		::System::Void OnMixinResourceChanged(::Class_2_0D3FD2899AF15322* mixin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D3FD2899AF15322*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINRESOURCECHANGED_OFFSET))(this, mixin);
		}

		::System::Void OnMixinRatioChanged(::Class_2_0D3FD2899AF15322* mixin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D3FD2899AF15322*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINRATIOCHANGED_OFFSET))(this, mixin);
		}

		::System::Void OnMixinStateChanged(::Class_2_0D3FD2899AF15322* mixin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D3FD2899AF15322*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINSTATECHANGED_OFFSET))(this, mixin);
		}

		::System::Void EnableGroupDomainDisplay(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_ENABLEGROUPDOMAINDISPLAY_OFFSET))(this, entityHandle);
		}

		::System::Void DisableGroupDomainDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_DISABLEGROUPDOMAINDISPLAY_OFFSET))(this);
		}

		::System::Void UpdateIndividualData(::Class_2_0D3FD2899AF15322* mixin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D3FD2899AF15322*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_UPDATEINDIVIDUALDATA_OFFSET))(this, mixin);
		}

		::System::Void UpdateGroupData(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_UPDATEGROUPDATA_OFFSET))(this, groupID);
		}

		::System::Boolean TryGetGroupDomainByEntityID(::System::UInt32 entityID, ::Class_2_0D3FD2899AF15322*& mixin)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_0D3FD2899AF15322*&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM_TRYGETGROUPDOMAINBYENTITYID_OFFSET))(this, entityID, mixin);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
