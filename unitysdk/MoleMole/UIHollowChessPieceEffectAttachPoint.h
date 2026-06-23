#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWCHESSPIECEEFFECTATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F82910)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessPieceEffectAttachPoint_TypeDefinitionIndex = 41677;

	class UIHollowChessPieceEffectAttachPoint : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::UnityEngine::GameObject*>* attachPoints; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEEFFECTATTACHPOINT__CTOR_OFFSET))(this);
		}
	};
}
