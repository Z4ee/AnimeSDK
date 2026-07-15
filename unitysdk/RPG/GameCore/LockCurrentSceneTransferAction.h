#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOCKCURRENTSCENETRANSFERACTION_METHOD_3_49AFBD0849705BCF_OFFSET UNITYSDK_OFFSET(0x1BCCEAB0)
#define RPG_GAMECORE_LOCKCURRENTSCENETRANSFERACTION_METHOD_3_773669F5B8F7C352_OFFSET UNITYSDK_OFFSET(0x1BCCEAF0)
#define RPG_GAMECORE_LOCKCURRENTSCENETRANSFERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCEAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockCurrentSceneTransferAction_TypeDefinitionIndex = 20873;

	class LockCurrentSceneTransferAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::System::Boolean Enable; // 0x20
		::System::String* ToastTextString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTSCENETRANSFERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49AFBD0849705BCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCurrentSceneTransferAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCurrentSceneTransferAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTSCENETRANSFERACTION_METHOD_3_49AFBD0849705BCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_773669F5B8F7C352(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCurrentSceneTransferAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCurrentSceneTransferAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTSCENETRANSFERACTION_METHOD_3_773669F5B8F7C352_OFFSET))(a1, a2);
		}
	};
}
