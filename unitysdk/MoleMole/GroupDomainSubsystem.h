#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_2_0D3FD2899AF15322;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_534AF681CC2BD5FD_255;

#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_DISABLEGROUPDOMAINDISPLAY_OFFSET UNITYSDK_OFFSET(0x13EE6EB0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ENABLEGROUPDOMAINDISPLAY_OFFSET UNITYSDK_OFFSET(0x13EE6B40)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EE5860)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EE5A20)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINRATIOCHANGED_OFFSET UNITYSDK_OFFSET(0x13EE64D0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINRESOURCECHANGED_OFFSET UNITYSDK_OFFSET(0x13EE6280)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONMIXINSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13EE6550)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EE5B60)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_REGISTERGROUPDOMAINFIELDMIXIN_OFFSET UNITYSDK_OFFSET(0x13EE5BC0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_TRYGETGROUPDOMAINBYENTITYID_OFFSET UNITYSDK_OFFSET(0x13EE6D30)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_UNREGISTERGROUPDOMAINFIELDMIXIN_OFFSET UNITYSDK_OFFSET(0x13EE5FD0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_UPDATEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x13EE66D0)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM_UPDATEINDIVIDUALDATA_OFFSET UNITYSDK_OFFSET(0x13EE6300)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE7020)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EE7040)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EE7080)
#define MOLEMOLE_GROUPDOMAINSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EE70C0)

namespace MoleMole
{
	inline static constexpr unsigned int GroupDomainSubsystem_TypeDefinitionIndex = 79629;

	class GroupDomainSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GroupDomainSubsystem*>
	{
	public:
		::Class_1_534AF681CC2BD5FD_255<::System::UInt32, ::Class_2_0D3FD2899AF15322*>* GroupDomainMap; // 0x10
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
