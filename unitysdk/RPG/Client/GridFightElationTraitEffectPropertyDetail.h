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

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0xA473D90)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETCONVERTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA473D30)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETEXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xA473EB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORCOUNT_OFFSET UNITYSDK_OFFSET(0xA473A70)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORTYPE_OFFSET UNITYSDK_OFFSET(0xA473BE0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA4739B0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA473CD0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GET_PROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xA473900)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_ISENHANCEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA473DF0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xA473F50)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xA4738F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex = 60195;

	class GridFightElationTraitEffectPropertyDetail : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__PropertyTypes()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex)->GetStaticField(0x1A450);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*>** StaticGet__FactorTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex)->GetStaticField(0x1A458);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__ExtraProperty()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEffectPropertyDetail_TypeDefinitionIndex)->GetStaticField(0x1A460);
		}
		::RPG::Client::GridFightTraitEffectElationProperty* _Provider; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightTraitEffectElationProperty* propertyProvider)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CTOR_OFFSET))(this, propertyProvider);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL__CCTOR_OFFSET))();
		}

		::System::Int32 get_PropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GET_PROPERTYCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType GetPropertyType(::System::Int32 propertyIndex)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYTYPE_OFFSET))(this, propertyIndex);
		}

		::System::Int32 GetPropertyFactorCount(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORCOUNT_OFFSET))(this, propertyType);
		}

		::RPG::GameCore::AvatarPropertyType GetPropertyFactorType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::Int32 factorIndex)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTYFACTORTYPE_OFFSET))(this, propertyType, factorIndex);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETPROPERTY_OFFSET))(this, propertyType);
		}

		::RPG::Client::GridFightRoleProperty* GetConvertProperty(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETCONVERTPROPERTY_OFFSET))(this, propertyType);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETBASEVALUE_OFFSET))(this, propertyType);
		}

		::System::Boolean IsEnhanceProperty(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_ISENHANCEPROPERTY_OFFSET))(this, propertyType);
		}

		::System::UInt32 GetExtraEffectID(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEFFECTPROPERTYDETAIL_GETEXTRAEFFECTID_OFFSET))(this, propertyType);
		}
	};
}
