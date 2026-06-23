#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace Foundation::Unreal { class SerializableGameplayTag; }
namespace MoleMole::HollowChessboard { class EffectRoleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLETABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x182F1E00)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRoleTableConfig_TypeDefinitionIndex = 43180;

	class EffectRoleTableConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::EffectRoleConfig*>* EffectRoleTable; // 0x58
		::System::String* DefaultEffectRole; // 0x60
		::Foundation::Unreal::SerializableGameplayTag* EmptyGameplayTag; // 0x68
		::Foundation::Unreal::SerializableGameplayTag* OpenGameplayTag; // 0x70
		::Foundation::Unreal::SerializableGameplayTag* CloseGameplayTag; // 0x78
		::Foundation::Unreal::SerializableGameplayTag* PreAnimGameplayTag; // 0x80
		::Foundation::Unreal::SerializableGameplayTag* BackAnimGameplayTag; // 0x88
		::Foundation::Unreal::SerializableGameplayTag* ForbidEffectGameplayTag; // 0x90
		::Foundation::Unreal::SerializableGameplayTag* EStateGameplayTag; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLETABLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
