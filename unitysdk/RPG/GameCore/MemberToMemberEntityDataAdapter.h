#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MemberToMemberEntityDataConfig; }

#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_31A3A637350B2609_OFFSET UNITYSDK_OFFSET(0x1990BAB0)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_3307833796646AEA_OFFSET UNITYSDK_OFFSET(0x1990BB30)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1990BB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MemberToMemberEntityDataAdapter_TypeDefinitionIndex = 19598;

	class MemberToMemberEntityDataAdapter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MemberToMemberEntityDataConfig*>* AdaptDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_31A3A637350B2609(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_31A3A637350B2609_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3307833796646AEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_METHOD_3_3307833796646AEA_OFFSET))(a1, a2);
		}
	};
}
