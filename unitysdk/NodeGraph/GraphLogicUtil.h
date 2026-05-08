#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A4C0A974BEEA403.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_GRAPHLOGICUTIL_CONVERTTOSKINAVATARTAG_OFFSET UNITYSDK_OFFSET(0xEC970B0)
#define NODEGRAPH_GRAPHLOGICUTIL_GETSWITCHINPOS_OFFSET UNITYSDK_OFFSET(0xEC71F40)
#define NODEGRAPH_GRAPHLOGICUTIL_ISGRAPHUPDATEVALID_OFFSET UNITYSDK_OFFSET(0xEC98640)
#define NODEGRAPH_GRAPHLOGICUTIL_ISSAMEAVATARTAG_OFFSET UNITYSDK_OFFSET(0xEC96AA0)
#define NODEGRAPH_GRAPHLOGICUTIL_ISTELEPORTING_OFFSET UNITYSDK_OFFSET(0xEC97750)
#define NODEGRAPH_GRAPHLOGICUTIL_SETAIACTIVE_OFFSET UNITYSDK_OFFSET(0xEC97DD0)
#define NODEGRAPH_GRAPHLOGICUTIL_TELEPORTTOPOS_OFFSET UNITYSDK_OFFSET(0xEC97880)
#define NODEGRAPH_GRAPHLOGICUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC989F0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphLogicUtil_TypeDefinitionIndex = 51359;

	class GraphLogicUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>** StaticGet__teleporting()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GraphLogicUtil_TypeDefinitionIndex)->GetStaticField(0x33080);
		}
		static ::MoleMole::Battle::AnimatorParamControl** StaticGet_AnimatorParamControl()
		{
			return (::MoleMole::Battle::AnimatorParamControl**)Il2CppClass::FromTypeDefinitionIndex(GraphLogicUtil_TypeDefinitionIndex)->GetStaticField(0x33088);
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

		static ::System::Boolean TeleportToPos(::MoleMole::Battle::Entity* ownerEntity, ::UnityEngine::Vector3 switchInPos, ::System::Single faceDir, ::System::Action* callback)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_TELEPORTTOPOS_OFFSET))(ownerEntity, switchInPos, faceDir, callback);
		}

		static ::System::Void SetAIActive(::MoleMole::Battle::Entity* entity, ::System::Boolean active, ::Enum_3_4A4C0A974BEEA403 flag)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::Enum_3_4A4C0A974BEEA403))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_SETAIACTIVE_OFFSET))(entity, active, flag);
		}

		static ::System::Boolean IsGraphUpdateValid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL_ISGRAPHUPDATEVALID_OFFSET))();
		}
	};
}
