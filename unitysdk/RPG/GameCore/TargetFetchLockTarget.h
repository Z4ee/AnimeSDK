#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_58DC7C0961F7F58F_OFFSET UNITYSDK_OFFSET(0x19D0D590)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_CBD3DA7263F30DAD_OFFSET UNITYSDK_OFFSET(0x19D0D4F0)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_D947E283825FBD18_OFFSET UNITYSDK_OFFSET(0x19D0D550)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_E4A868C7EE90FDF8_OFFSET UNITYSDK_OFFSET(0x19D0D430)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19D0D4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLockTarget_TypeDefinitionIndex = 22646;

	class TargetFetchLockTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4A868C7EE90FDF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_E4A868C7EE90FDF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBD3DA7263F30DAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_CBD3DA7263F30DAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D947E283825FBD18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_D947E283825FBD18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58DC7C0961F7F58F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_58DC7C0961F7F58F_OFFSET))(a1, a2);
		}
	};
}
