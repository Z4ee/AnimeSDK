#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_CellConfig.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_EPositionPoseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B3434D0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_UNITYENGINE_VECTOR2_RPG_CLIENT_AUDIENCESTANCECONFIG_EPOSITIONPOSETYPE___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B343770)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_UNITYENGINE_VECTOR2_RPG_CLIENT_AUDIENCESTANCECONFIG_EPOSITIONPOSETYPE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B3436B0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B3437F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B343720)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B3436D0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B3434C0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3423D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance__GenerateCell_d__16_TypeDefinitionIndex = 69111;

	class AudienceGroupInstance__GenerateCell_d__16 : public ::System::Object
	{
	public:
		::RPG::Client::AudienceStanceConfig_CellConfig __3__cellConfig; // 0x10
		::RPG::Client::AudienceStanceConfig_CellConfig cellConfig; // 0x20
		::UnityEngine::Vector2 __3__size; // 0x30
		::System::Int32 _i_5__2; // 0x38
		::UnityEngine::Vector2 size; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x44
		::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType> __2__current; // 0x48
		::System::Int32 __1__state; // 0x54

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__GENERATECELL_D__16__CTOR_OFFSET))(this, a1);
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
