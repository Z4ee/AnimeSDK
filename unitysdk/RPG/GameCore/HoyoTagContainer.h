#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagNodeInfo; }
namespace RPG::GameCore { class LevelEntityHoyoTagContainerOverrideConfig; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_HOYOTAGCONTAINER_ADDTAG_OFFSET UNITYSDK_OFFSET(0x18A07650)
#define RPG_GAMECORE_HOYOTAGCONTAINER_APPLYCONTAINEROVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x18A08900)
#define RPG_GAMECORE_HOYOTAGCONTAINER_CLONE_OFFSET UNITYSDK_OFFSET(0x18A07320)
#define RPG_GAMECORE_HOYOTAGCONTAINER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18A075A0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_FINDTAG_OFFSET UNITYSDK_OFFSET(0x18A07760)
#define RPG_GAMECORE_HOYOTAGCONTAINER_FIND_OFFSET UNITYSDK_OFFSET(0x18A07900)
#define RPG_GAMECORE_HOYOTAGCONTAINER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A07240)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A07450)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_OFFSET UNITYSDK_OFFSET(0x18A07A20)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_RUNTIME_OFFSET UNITYSDK_OFFSET(0x18A07B10)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18A07620)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASALLEXACT_OFFSET UNITYSDK_OFFSET(0x18A086F0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASALL_OFFSET UNITYSDK_OFFSET(0x18A08600)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANYEXACT_OFFSET UNITYSDK_OFFSET(0x18A083F0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_1_OFFSET UNITYSDK_OFFSET(0x18A08020)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_2_OFFSET UNITYSDK_OFFSET(0x18A08360)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_OFFSET UNITYSDK_OFFSET(0x18A07F30)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASTAGEXACT_OFFSET UNITYSDK_OFFSET(0x18A07E10)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASTAG_OFFSET UNITYSDK_OFFSET(0x18A07C00)
#define RPG_GAMECORE_HOYOTAGCONTAINER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x18A07630)
#define RPG_GAMECORE_HOYOTAGCONTAINER_REMOVETAG_OFFSET UNITYSDK_OFFSET(0x18A077B0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A07590)
#define RPG_GAMECORE_HOYOTAGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A07310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagContainer_TypeDefinitionIndex = 17408;

	class HoyoTagContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoyoTag*>* List; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HoyoTagContainer*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoyoTagContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_FROMBINARY_OFFSET))(array, val);
		}

		static ::RPG::GameCore::HoyoTagContainer* Clone(::RPG::GameCore::HoyoTagContainer* other)
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_CLONE_OFFSET))(other);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::HoyoTag*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::HoyoTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Contains(::RPG::GameCore::HoyoTag* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_CONTAINS_OFFSET))(this, item);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_ISEMPTY_OFFSET))(this);
		}

		::System::Void AddTag(::RPG::GameCore::HoyoTag* tag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_ADDTAG_OFFSET))(this, tag);
		}

		::System::Void RemoveTag(::RPG::GameCore::HoyoTag* tag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_REMOVETAG_OFFSET))(this, tag);
		}

		::RPG::GameCore::HoyoTag* Find(::System::String* tagName)
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_FIND_OFFSET))(this, tagName);
		}

		::RPG::GameCore::HoyoTag* FindTag(::System::Int32 hash)
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_FINDTAG_OFFSET))(this, hash);
		}

		static ::RPG::GameCore::HoyoTagNodeInfo* GetHoyoTagNodeInfo(::System::String* queryTag)
		{
			return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_OFFSET))(queryTag);
		}

		static ::RPG::GameCore::HoyoTagNodeInfo* GetHoyoTagNodeInfo_Runtime(::System::String* queryTag)
		{
			return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_RUNTIME_OFFSET))(queryTag);
		}

		::System::Boolean HasTag(::System::String* queryTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASTAG_OFFSET))(this, queryTag);
		}

		::System::Boolean HasTagExact(::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASTAGEXACT_OFFSET))(this, tag);
		}

		::System::Boolean HasAny(::System::Collections::Generic::List_1<::System::String*>* queryTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_OFFSET))(this, queryTags);
		}

		::System::Boolean HasAny_1(::System::Collections::Generic::IEnumerable_1<::System::String*>* queryTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_1_OFFSET))(this, queryTags);
		}

		::System::Boolean HasAny_2(::RPG::GameCore::HoyoTagContainer* queryTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_2_OFFSET))(this, queryTags);
		}

		::System::Boolean HasAnyExact(::System::Collections::Generic::List_1<::System::String*>* queryTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANYEXACT_OFFSET))(this, queryTags);
		}

		::System::Boolean HasAll(::System::Collections::Generic::List_1<::System::String*>* queryTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASALL_OFFSET))(this, queryTags);
		}

		::System::Boolean HasAllExact(::System::Collections::Generic::List_1<::System::String*>* queryTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASALLEXACT_OFFSET))(this, queryTags);
		}

		::System::Void ApplyContainerOverrideConfig(::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig* overrideConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_APPLYCONTAINEROVERRIDECONFIG_OFFSET))(this, overrideConfig);
		}
	};
}
