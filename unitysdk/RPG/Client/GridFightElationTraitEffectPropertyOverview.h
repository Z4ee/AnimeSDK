#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightTraitEffectElationProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A6410D0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW_GET_PROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x1A641020)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6411D0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A641010)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEffectPropertyOverview_TypeDefinitionIndex = 62448;

	class GridFightElationTraitEffectPropertyOverview : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__PropertyTypes()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEffectPropertyOverview_TypeDefinitionIndex)->GetStaticField(0x22900);
		}
		::RPG::Client::GridFightTraitEffectElationProperty* _Provider; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightTraitEffectElationProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW__CCTOR_OFFSET))();
		}

		::System::Int32 get_PropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW_GET_PROPERTYCOUNT_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYOVERVIEW_GETPROPERTY_OFFSET))(this, a1);
		}
	};
}
