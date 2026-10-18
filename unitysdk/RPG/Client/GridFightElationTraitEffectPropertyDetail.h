#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightTraitEffectElationProperty; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0xD103AB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETCONVERTPROPERTY_OFFSET UNITYSDK_OFFSET(0xD103A50)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETEXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xD103BD0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORCOUNT_OFFSET UNITYSDK_OFFSET(0xD103770)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORTYPE_OFFSET UNITYSDK_OFFSET(0xD1038E0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xD103690)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xD1039F0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GET_PROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xD1035E0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_ISENHANCEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD103B10)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xD103C50)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xD1035D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex = 65374;

	class GridFightElationTraitEffectPropertyDetail : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*>** StaticGet__FactorTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex)->GetStaticField(0x65A10);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__PropertyTypes()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex)->GetStaticField(0x65A18);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__ExtraProperty()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex)->GetStaticField(0x65A20);
		}
		::RPG::Client::GridFightTraitEffectElationProperty* _Provider; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightTraitEffectElationProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CCTOR_OFFSET))();
		}

		::System::Int32 get_PropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GET_PROPERTYCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType GetPropertyType(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Int32 GetPropertyFactorCount(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORCOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType GetPropertyFactorType(::RPG::GameCore::AvatarPropertyType a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORTYPE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleProperty* GetConvertProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETCONVERTPROPERTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETBASEVALUE_OFFSET))(this, a1);
		}

		::System::Boolean IsEnhanceProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_ISENHANCEPROPERTY_OFFSET))(this, a1);
		}

		::System::UInt32 GetExtraEffectID(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETEXTRAEFFECTID_OFFSET))(this, a1);
		}
	};
}
