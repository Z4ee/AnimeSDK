#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_APPLYDYNAMICAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xE596110)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_GETAVATARBASETYPEMASK_OFFSET UNITYSDK_OFFSET(0xE596510)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_GET_AVATARALLBASETYPEMASK_OFFSET UNITYSDK_OFFSET(0xE5966C0)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_GET_MAINTYPE_OFFSET UNITYSDK_OFFSET(0xE596780)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_GET_SUBTYPEMASK_OFFSET UNITYSDK_OFFSET(0xE5967D0)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_HASAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xE5968D0)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_HASDYNAMICAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xE596820)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_OVERRIDEAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xE596950)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_REMOVEDYNAMICAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xE596330)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION_RESETAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xE596B70)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE595D70)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE595D60)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION__INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0xE595FE0)
#define RPG_GAMECORE_AVATARBASETYPECOLLECTION__ONDYNAMICAVATARBASETYPECHANGED_OFFSET UNITYSDK_OFFSET(0xE595F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseTypeCollection_TypeDefinitionIndex = 56540;

	class AvatarBaseTypeCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::RPG::GameCore::AvatarBaseTypeMask>>* _DynamicAvatarBaseTypeList; // 0x10
		::RPG::GameCore::AvatarBaseTypeMask _OverrideSubTypeMask; // 0x18
		::RPG::GameCore::AvatarBaseType _RowMainType; // 0x1C
		::RPG::GameCore::AvatarBaseType _OverrideMainType; // 0x20
		::RPG::GameCore::AvatarBaseTypeMask _DynamicAvatarBaseTypeMask; // 0x24
		::RPG::GameCore::AvatarBaseTypeMask _RowSubTypeMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::GameCore::AvatarBaseType a1, ::Il2CppArray<::RPG::GameCore::AvatarBaseType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseType, ::Il2CppArray<::RPG::GameCore::AvatarBaseType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDynamicAvatarBaseTypeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION__ONDYNAMICAVATARBASETYPECHANGED_OFFSET))(this);
		}

		static ::System::Int32 _IndexOfKey(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::RPG::GameCore::AvatarBaseTypeMask>>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::RPG::GameCore::AvatarBaseTypeMask>>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION__INDEXOFKEY_OFFSET))(a1, a2);
		}

		::System::Void ApplyDynamicAvatarBaseType(::System::String* a1, ::RPG::GameCore::AvatarBaseTypeMask a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AvatarBaseTypeMask, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_APPLYDYNAMICAVATARBASETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveDynamicAvatarBaseType(::System::String* a1, ::RPG::GameCore::AvatarBaseTypeMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AvatarBaseTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_REMOVEDYNAMICAVATARBASETYPE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AvatarBaseTypeMask GetAvatarBaseTypeMask(::RPG::GameCore::AvatarBaseTypeKind a1)
		{
			return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::PVOID, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_GETAVATARBASETYPEMASK_OFFSET))(this, a1);
		}

		::System::Boolean HasDynamicAvatarBaseType(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_HASDYNAMICAVATARBASETYPE_OFFSET))(this, a1);
		}

		::System::Boolean HasAvatarBaseType(::RPG::GameCore::AvatarBaseType a1, ::RPG::GameCore::AvatarBaseTypeKind a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarBaseType, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_HASAVATARBASETYPE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AvatarBaseType get_MainType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_GET_MAINTYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseTypeMask get_SubTypeMask()
		{
			return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_GET_SUBTYPEMASK_OFFSET))(this);
		}

		::System::Void OverrideAvatarBaseType(::System::Nullable_1<::RPG::GameCore::AvatarBaseType> a1, ::Il2CppArray<::RPG::GameCore::AvatarBaseType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::AvatarBaseType>, ::Il2CppArray<::RPG::GameCore::AvatarBaseType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_OVERRIDEAVATARBASETYPE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetAvatarBaseType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_RESETAVATARBASETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseTypeMask get_AvatarAllBaseTypeMask()
		{
			return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPECOLLECTION_GET_AVATARALLBASETYPEMASK_OFFSET))(this);
		}
	};
}
