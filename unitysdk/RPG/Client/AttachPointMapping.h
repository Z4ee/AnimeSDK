#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CA24D70BC54003B_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ATTACHPOINTMAPPING_AWAKEINEDITOR_OFFSET UNITYSDK_OFFSET(0x9D46CB0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D46F10)
#define RPG_CLIENT_ATTACHPOINTMAPPING_BINDDYNAMICPOINTS_OFFSET UNITYSDK_OFFSET(0x9D47180)
#define RPG_CLIENT_ATTACHPOINTMAPPING_BUILDDICTIFUNCREATED_OFFSET UNITYSDK_OFFSET(0x9D46F80)
#define RPG_CLIENT_ATTACHPOINTMAPPING_BUILDDICT_OFFSET UNITYSDK_OFFSET(0x9D46D00)
#define RPG_CLIENT_ATTACHPOINTMAPPING_CLEARMAPPING_OFFSET UNITYSDK_OFFSET(0x9D48A00)
#define RPG_CLIENT_ATTACHPOINTMAPPING_CREATEADDITIONALATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x9D47EE0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_1_OFFSET UNITYSDK_OFFSET(0x9D485B0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_OFFSET UNITYSDK_OFFSET(0x9D47B00)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_1_OFFSET UNITYSDK_OFFSET(0x9D48520)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x9D477F0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_1_OFFSET UNITYSDK_OFFSET(0x9D48B80)
#define RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_OFFSET UNITYSDK_OFFSET(0x9D48AA0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_ISATTACHPOINTMAPPEDTOANOTHER_OFFSET UNITYSDK_OFFSET(0x9D48C10)
#define RPG_CLIENT_ATTACHPOINTMAPPING_ONROOTMODELUNLOADED_OFFSET UNITYSDK_OFFSET(0x9D46FD0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_1_OFFSET UNITYSDK_OFFSET(0x9D48640)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x9D47E10)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_1_OFFSET UNITYSDK_OFFSET(0x9D488E0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_OFFSET UNITYSDK_OFFSET(0x9D48780)
#define RPG_CLIENT_ATTACHPOINTMAPPING_UNBINDDYNAMICPOINTS_OFFSET UNITYSDK_OFFSET(0x9D47600)
#define RPG_CLIENT_ATTACHPOINTMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x9D48CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachPointMapping_TypeDefinitionIndex = 63029;

	class AttachPointMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* ArtRootPathKey; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::AttachPoint*>* AttachPoints; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AttachPoint*>* _AttachPointMap; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* _AdditionalAttachPointNames; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_6CA24D70BC54003B_1>* _MappingAttachPointHash; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void AwakeInEditor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_AWAKEINEDITOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_AWAKE_OFFSET))(this);
		}

		::System::Void OnRootModelUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_ONROOTMODELUNLOADED_OFFSET))(this);
		}

		::System::Void BuildDictIfUncreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_BUILDDICTIFUNCREATED_OFFSET))(this);
		}

		::System::Void BuildDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_BUILDDICT_OFFSET))(this);
		}

		::System::Void BindDynamicPoints(::UnityEngine::Transform* dynamicRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_BINDDYNAMICPOINTS_OFFSET))(this, dynamicRoot);
		}

		::System::Void UnbindDynamicPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_UNBINDDYNAMICPOINTS_OFFSET))(this);
		}

		::UnityEngine::Transform* FindAttachPoint(::System::Int32 hash, ::System::Boolean forceFindDynamicPoint, ::System::String* resName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_OFFSET))(this, hash, forceFindDynamicPoint, resName);
		}

		::RPG::Client::AttachPoint* FindAttachPointInst(::System::Int32 hash, ::System::Boolean forceFindDynamicPoint, ::System::String* resName)
		{
			return ((::RPG::Client::AttachPoint*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_OFFSET))(this, hash, forceFindDynamicPoint, resName);
		}

		::System::Void SetAttachPoint(::System::Int32 hash, ::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_OFFSET))(this, hash, trans);
		}

		::System::Boolean CreateAdditionalAttachPoint(::System::String* srcPointName, ::System::String* mapToPointName, ::UnityEngine::Vector3 posOffset, ::UnityEngine::Quaternion rotOffset, ::System::Boolean followBasePoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_CREATEADDITIONALATTACHPOINT_OFFSET))(this, srcPointName, mapToPointName, posOffset, rotOffset, followBasePoint);
		}

		::UnityEngine::Transform* FindAttachPoint_1(::System::String* Name, ::System::Boolean forceFindDynamicPoint, ::System::String* resName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_1_OFFSET))(this, Name, forceFindDynamicPoint, resName);
		}

		::RPG::Client::AttachPoint* FindAttachPointInst_1(::System::String* Name, ::System::Boolean forceFindDynamicPoint, ::System::String* resName)
		{
			return ((::RPG::Client::AttachPoint*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_1_OFFSET))(this, Name, forceFindDynamicPoint, resName);
		}

		::System::Void SetAttachPoint_1(::System::String* Name, ::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_1_OFFSET))(this, Name, trans);
		}

		::System::Void SetMapping(::System::String* srcPointName, ::System::String* mapToPointName, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>* matchRules)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_OFFSET))(this, srcPointName, mapToPointName, matchRules);
		}

		::System::Void SetMapping_1(::System::Int32 srcHash, ::System::Int32 mapHash, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>* matchRules)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_1_OFFSET))(this, srcHash, mapHash, matchRules);
		}

		::System::Void ClearMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_CLEARMAPPING_OFFSET))(this);
		}

		::System::Int32 GetMappingHash(::System::String* srcPointName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_OFFSET))(this, srcPointName);
		}

		::System::Int32 GetMappingHash_1(::System::Int32 srcHash)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_1_OFFSET))(this, srcHash);
		}

		::System::Boolean IsAttachPointMappedToAnother(::System::String* srcPointName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_ISATTACHPOINTMAPPEDTOANOTHER_OFFSET))(this, srcPointName);
		}
	};
}
