#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_01642F4B17DBD7C2_OFFSET UNITYSDK_OFFSET(0x1D5AC250)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_3751D283C38F8FC8_OFFSET UNITYSDK_OFFSET(0x1D5AC170)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_58DC7C0961F7F58F_OFFSET UNITYSDK_OFFSET(0x1D5AC270)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_CBD3DA7263F30DAD_OFFSET UNITYSDK_OFFSET(0x1D5AC1F0)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLockTarget_TypeDefinitionIndex = 23689;

	class TargetFetchLockTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3751D283C38F8FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_3751D283C38F8FC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBD3DA7263F30DAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_CBD3DA7263F30DAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01642F4B17DBD7C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_01642F4B17DBD7C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58DC7C0961F7F58F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_METHOD_3_58DC7C0961F7F58F_OFFSET))(a1, a2);
		}
	};
}
