#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MemberToMemberEntityDataConfig; }

#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_3307833796646AEA_OFFSET UNITYSDK_OFFSET(0x1D267400)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_3E4B5E8785F7EE29_OFFSET UNITYSDK_OFFSET(0x1D2673C0)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2673F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MemberToMemberEntityDataAdapter_TypeDefinitionIndex = 20504;

	class MemberToMemberEntityDataAdapter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MemberToMemberEntityDataConfig*>* AdaptDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E4B5E8785F7EE29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_3E4B5E8785F7EE29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3307833796646AEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_3307833796646AEA_OFFSET))(a1, a2);
		}
	};
}
