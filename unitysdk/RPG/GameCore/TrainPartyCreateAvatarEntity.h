#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_4C13F9029605C601_OFFSET UNITYSDK_OFFSET(0x1DC2FD50)
#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_CE46419673951355_OFFSET UNITYSDK_OFFSET(0x1DC2FDE0)
#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2FDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCreateAvatarEntity_TypeDefinitionIndex = 22366;

	class TrainPartyCreateAvatarEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x18
		::System::String* EntityUniqueName; // 0x20
		::RPG::MVector3 Position; // 0x28
		::RPG::MVector3 Rotation; // 0x34
		::RPG::MVector3 Scale; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C13F9029605C601(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_4C13F9029605C601_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE46419673951355(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_CE46419673951355_OFFSET))(a1, a2);
		}
	};
}
