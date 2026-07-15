#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1BE40B80)
#define RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE40B40)
#define RPG_GAMECORE_SHOWGUIDEFOLLOW3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE40B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideFollow3D_TypeDefinitionIndex = 23478;

	class ShowGuideFollow3D : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Int32 GuideResID; // 0x1C
		::System::UInt32 CharacterID; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::String* AttachPoint; // 0x30
		::System::Boolean Show; // 0x38
		::System::Single OffsetX; // 0x3C
		::System::Single OffsetY; // 0x40
		::UnityEngine::GameObject* FollowTarget; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEFOLLOW3D__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideFollow3D*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideFollow3D*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideFollow3D* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideFollow3D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
