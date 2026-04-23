#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_CellConfig.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_EPositionPoseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D50660)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_UNITYENGINE_VECTOR2_RPG_CLIENT_AUDIENCESTANCECONFIG_EPOSITIONPOSETYPE___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9D50910)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_UNITYENGINE_VECTOR2_RPG_CLIENT_AUDIENCESTANCECONFIG_EPOSITIONPOSETYPE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D50850)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9D50990)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D508C0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9D50870)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D50650)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4F4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance__GenerateCell_d__16_TypeDefinitionIndex = 63750;

	class AudienceGroupInstance__GenerateCell_d__16 : public ::System::Object
	{
	public:
		::RPG::Client::AudienceStanceConfig_CellConfig cellConfig; // 0x10
		::RPG::Client::AudienceStanceConfig_CellConfig __3__cellConfig; // 0x20
		::UnityEngine::Vector2 size; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType> __2__current; // 0x3C
		::UnityEngine::Vector2 __3__size; // 0x48
		::System::Int32 __l__initialThreadId; // 0x50
		::System::Int32 _i_5__2; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType> System_Collections_Generic_IEnumerator_System_ValueTuple_UnityEngine_Vector2_RPG_Client_AudienceStanceConfig_EPositionPoseType___get_Current()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_UNITYENGINE_VECTOR2_RPG_CLIENT_AUDIENCESTANCECONFIG_EPOSITIONPOSETYPE___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType>>* System_Collections_Generic_IEnumerable_System_ValueTuple_UnityEngine_Vector2_RPG_Client_AudienceStanceConfig_EPositionPoseType___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_UNITYENGINE_VECTOR2_RPG_CLIENT_AUDIENCESTANCECONFIG_EPOSITIONPOSETYPE___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
