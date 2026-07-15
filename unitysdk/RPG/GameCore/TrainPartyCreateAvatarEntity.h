#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_3AF55DC6707AEA4E_OFFSET UNITYSDK_OFFSET(0x1C15F4B0)
#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_DD57FF90AE5E28DB_OFFSET UNITYSDK_OFFSET(0x1C15F420)
#define RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15F480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCreateAvatarEntity_TypeDefinitionIndex = 21554;

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

		static ::System::Void Method_3_DD57FF90AE5E28DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_DD57FF90AE5E28DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3AF55DC6707AEA4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEAVATARENTITY_METHOD_3_3AF55DC6707AEA4E_OFFSET))(a1, a2);
		}
	};
}
