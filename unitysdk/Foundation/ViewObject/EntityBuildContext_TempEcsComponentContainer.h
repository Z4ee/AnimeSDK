#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x17F29AB0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17F299F0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER_RESET_OFFSET UNITYSDK_OFFSET(0x17F29980)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F29B80)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EntityBuildContext_TempEcsComponentContainer_TypeDefinitionIndex = 46982;

	class EntityBuildContext_TempEcsComponentContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Components; // 0x10
		::Il2CppArray<::System::Int32>* ComponentMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER_RESET_OFFSET))(this);
		}

		::Nap::NapECS::EcsComponent* get_Item(::System::Int32 shortIdx)
		{
			return ((::Nap::NapECS::EcsComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER_GET_ITEM_OFFSET))(this, shortIdx);
		}

		::System::Void Add(::System::Int32 shortIdx, ::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_TEMPECSCOMPONENTCONTAINER_ADD_OFFSET))(this, shortIdx, component);
		}
	};
}
