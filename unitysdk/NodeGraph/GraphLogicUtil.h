#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A723913001600E1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_GRAPHLOGICUTIL_CONVERTTOSKINAVATARTAG_OFFSET UNITYSDK_OFFSET(0xE5867D0)
#define NODEGRAPH_GRAPHLOGICUTIL_GETSWITCHINPOS_1_OFFSET UNITYSDK_OFFSET(0xE546B40)
#define NODEGRAPH_GRAPHLOGICUTIL_GETSWITCHINPOS_OFFSET UNITYSDK_OFFSET(0xE54D3C0)
#define NODEGRAPH_GRAPHLOGICUTIL_ISGRAPHUPDATEVALID_OFFSET UNITYSDK_OFFSET(0xE587D60)
#define NODEGRAPH_GRAPHLOGICUTIL_ISSAMEAVATARTAG_OFFSET UNITYSDK_OFFSET(0xE5861D0)
#define NODEGRAPH_GRAPHLOGICUTIL_ISTELEPORTING_OFFSET UNITYSDK_OFFSET(0xE586E70)
#define NODEGRAPH_GRAPHLOGICUTIL_SETAIACTIVE_OFFSET UNITYSDK_OFFSET(0xE5874F0)
#define NODEGRAPH_GRAPHLOGICUTIL_TELEPORTTOPOS_OFFSET UNITYSDK_OFFSET(0xE586FA0)
#define NODEGRAPH_GRAPHLOGICUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xE588110)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphLogicUtil_TypeDefinitionIndex = 80843;

	class GraphLogicUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>** StaticGet__teleporting()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GraphLogicUtil_TypeDefinitionIndex)->GetStaticField(0x33C30);
		}
		static ::MoleMole::Battle::AnimatorParamControl** StaticGet_AnimatorParamControl()
		{
			return (::MoleMole::Battle::AnimatorParamControl**)Il2CppClass::FromTypeDefinitionIndex(GraphLogicUtil_TypeDefinitionIndex)->GetStaticField(0x33C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsSameAvatarTag(::System::Int32 tag1, ::System::Int32 tag2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_ISSAMEAVATARTAG_OFFSET))(tag1, tag2);
		}

		static ::System::Int32 ConvertToSkinAvatarTag(::System::Int32 tag)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_CONVERTTOSKINAVATARTAG_OFFSET))(tag);
		}

		static ::System::Boolean IsTeleporting(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_ISTELEPORTING_OFFSET))(entity);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> GetSwitchInPos(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_GETSWITCHINPOS_OFFSET))(ownerEntity);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> GetSwitchInPos_1(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_GETSWITCHINPOS_1_OFFSET))(entity, targetEntity);
		}

		static ::System::Boolean TeleportToPos(::MoleMole::Battle::Entity* ownerEntity, ::UnityEngine::Vector3 switchInPos, ::System::Single faceDir, ::System::Action* callback)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_TELEPORTTOPOS_OFFSET))(ownerEntity, switchInPos, faceDir, callback);
		}

		static ::System::Void SetAIActive(::MoleMole::Battle::Entity* entity, ::System::Boolean active, ::Enum_3_4A723913001600E1 flag)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::Enum_3_4A723913001600E1))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_SETAIACTIVE_OFFSET))(entity, active, flag);
		}

		static ::System::Boolean IsGraphUpdateValid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_ISGRAPHUPDATEVALID_OFFSET))();
		}
	};
}
