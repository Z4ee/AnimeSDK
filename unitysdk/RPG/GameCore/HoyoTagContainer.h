#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagNodeInfo; }
namespace RPG::GameCore { class LevelEntityHoyoTagContainerOverrideConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_HOYOTAGCONTAINER_ADDTAG_OFFSET UNITYSDK_OFFSET(0x19839C50)
#define RPG_GAMECORE_HOYOTAGCONTAINER_APPLYCONTAINEROVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x1983AE20)
#define RPG_GAMECORE_HOYOTAGCONTAINER_CLONE_OFFSET UNITYSDK_OFFSET(0x19839960)
#define RPG_GAMECORE_HOYOTAGCONTAINER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19839BA0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_FINDTAG_OFFSET UNITYSDK_OFFSET(0x19839D50)
#define RPG_GAMECORE_HOYOTAGCONTAINER_FIND_OFFSET UNITYSDK_OFFSET(0x19839E70)
#define RPG_GAMECORE_HOYOTAGCONTAINER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198397A0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_FROMJSON_OFFSET UNITYSDK_OFFSET(0x19839870)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19839A70)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_OFFSET UNITYSDK_OFFSET(0x19839F90)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_RUNTIME_OFFSET UNITYSDK_OFFSET(0x1983A080)
#define RPG_GAMECORE_HOYOTAGCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19839C20)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASALLEXACT_OFFSET UNITYSDK_OFFSET(0x1983AC10)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASALL_OFFSET UNITYSDK_OFFSET(0x1983AB20)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANYEXACT_OFFSET UNITYSDK_OFFSET(0x1983A920)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_1_OFFSET UNITYSDK_OFFSET(0x1983A560)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_2_OFFSET UNITYSDK_OFFSET(0x1983A8A0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_OFFSET UNITYSDK_OFFSET(0x1983A480)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASTAGEXACT_OFFSET UNITYSDK_OFFSET(0x1983A360)
#define RPG_GAMECORE_HOYOTAGCONTAINER_HASTAG_OFFSET UNITYSDK_OFFSET(0x1983A170)
#define RPG_GAMECORE_HOYOTAGCONTAINER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19839C30)
#define RPG_GAMECORE_HOYOTAGCONTAINER_REMOVETAG_OFFSET UNITYSDK_OFFSET(0x19839DA0)
#define RPG_GAMECORE_HOYOTAGCONTAINER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19839B90)
#define RPG_GAMECORE_HOYOTAGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x19839860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagContainer_TypeDefinitionIndex = 17413;

	class HoyoTagContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoyoTag*>* List; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoyoTagContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoyoTagContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromJson(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTagContainer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTagContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_FROMJSON_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::HoyoTagContainer* Clone(::RPG::GameCore::HoyoTagContainer* a1)
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_CLONE_OFFSET))(a1);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::HoyoTag*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::HoyoTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Contains(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_CONTAINS_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_ISEMPTY_OFFSET))(this);
		}

		::System::Void AddTag(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_ADDTAG_OFFSET))(this, a1);
		}

		::System::Void RemoveTag(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_REMOVETAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTag* Find(::System::String* a1)
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_FIND_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTag* FindTag(::System::Int32 a1)
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_FINDTAG_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::HoyoTagNodeInfo* GetHoyoTagNodeInfo(::System::String* a1)
		{
			return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_OFFSET))(a1);
		}

		static ::RPG::GameCore::HoyoTagNodeInfo* GetHoyoTagNodeInfo_Runtime(::System::String* a1)
		{
			return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_GETHOYOTAGNODEINFO_RUNTIME_OFFSET))(a1);
		}

		::System::Boolean HasTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASTAG_OFFSET))(this, a1);
		}

		::System::Boolean HasTagExact(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASTAGEXACT_OFFSET))(this, a1);
		}

		::System::Boolean HasAny(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_OFFSET))(this, a1);
		}

		::System::Boolean HasAny_1(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_1_OFFSET))(this, a1);
		}

		::System::Boolean HasAny_2(::RPG::GameCore::HoyoTagContainer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANY_2_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyExact(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASANYEXACT_OFFSET))(this, a1);
		}

		::System::Boolean HasAll(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASALL_OFFSET))(this, a1);
		}

		::System::Boolean HasAllExact(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_HASALLEXACT_OFFSET))(this, a1);
		}

		::System::Void ApplyContainerOverrideConfig(::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGCONTAINER_APPLYCONTAINEROVERRIDECONFIG_OFFSET))(this, a1);
		}
	};
}
