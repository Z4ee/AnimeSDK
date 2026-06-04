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

#define RPG_CLIENT_ATTACHPOINTMAPPING_AWAKEINEDITOR_OFFSET UNITYSDK_OFFSET(0xB336EC0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_AWAKE_OFFSET UNITYSDK_OFFSET(0xB337130)
#define RPG_CLIENT_ATTACHPOINTMAPPING_BINDDYNAMICPOINTS_OFFSET UNITYSDK_OFFSET(0xB3373A0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_BUILDDICTIFUNCREATED_OFFSET UNITYSDK_OFFSET(0xB3371A0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_BUILDDICT_OFFSET UNITYSDK_OFFSET(0xB336F10)
#define RPG_CLIENT_ATTACHPOINTMAPPING_CLEARMAPPING_OFFSET UNITYSDK_OFFSET(0xB338C00)
#define RPG_CLIENT_ATTACHPOINTMAPPING_CREATEADDITIONALATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xB338060)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_1_OFFSET UNITYSDK_OFFSET(0xB338850)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_OFFSET UNITYSDK_OFFSET(0xB337D00)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_1_OFFSET UNITYSDK_OFFSET(0xB3387C0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xB337A40)
#define RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_1_OFFSET UNITYSDK_OFFSET(0xB338D70)
#define RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_OFFSET UNITYSDK_OFFSET(0xB338C90)
#define RPG_CLIENT_ATTACHPOINTMAPPING_ISATTACHPOINTMAPPEDTOANOTHER_OFFSET UNITYSDK_OFFSET(0xB338DF0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_ONROOTMODELUNLOADED_OFFSET UNITYSDK_OFFSET(0xB3371F0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_1_OFFSET UNITYSDK_OFFSET(0xB3388E0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xB337FC0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_1_OFFSET UNITYSDK_OFFSET(0xB338AD0)
#define RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_OFFSET UNITYSDK_OFFSET(0xB338960)
#define RPG_CLIENT_ATTACHPOINTMAPPING_UNBINDDYNAMICPOINTS_OFFSET UNITYSDK_OFFSET(0xB337830)
#define RPG_CLIENT_ATTACHPOINTMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xB338E80)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachPointMapping_TypeDefinitionIndex = 63944;

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

		::System::Void BindDynamicPoints(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_BINDDYNAMICPOINTS_OFFSET))(this, a1);
		}

		::System::Void UnbindDynamicPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_UNBINDDYNAMICPOINTS_OFFSET))(this);
		}

		::UnityEngine::Transform* FindAttachPoint(::System::Int32 a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AttachPoint* FindAttachPointInst(::System::Int32 a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::RPG::Client::AttachPoint*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAttachPoint(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean CreateAdditionalAttachPoint(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_CREATEADDITIONALATTACHPOINT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Transform* FindAttachPoint_1(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINT_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AttachPoint* FindAttachPointInst_1(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::RPG::Client::AttachPoint*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_FINDATTACHPOINTINST_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAttachPoint_1(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETATTACHPOINT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMapping(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMapping_1(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Text::RegularExpressions::Regex*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_SETMAPPING_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_CLEARMAPPING_OFFSET))(this);
		}

		::System::Int32 GetMappingHash(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_OFFSET))(this, a1);
		}

		::System::Int32 GetMappingHash_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_GETMAPPINGHASH_1_OFFSET))(this, a1);
		}

		::System::Boolean IsAttachPointMappedToAnother(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPING_ISATTACHPOINTMAPPEDTOANOTHER_OFFSET))(this, a1);
		}
	};
}
