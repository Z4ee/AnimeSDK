#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupToMemberEntityDataConfig; }

#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_METHOD_3_C684DAC13DAC644A_OFFSET UNITYSDK_OFFSET(0x1728D390)
#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_METHOD_3_DCB5BA2F0EBA6D39_OFFSET UNITYSDK_OFFSET(0x1728D410)
#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1728D3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupToMemberEntityDataAdapter_TypeDefinitionIndex = 19059;

	class GroupToMemberEntityDataAdapter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GroupToMemberEntityDataConfig*>* AdaptDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C684DAC13DAC644A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupToMemberEntityDataAdapter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupToMemberEntityDataAdapter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_METHOD_3_C684DAC13DAC644A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCB5BA2F0EBA6D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_METHOD_3_DCB5BA2F0EBA6D39_OFFSET))(a1, a2);
		}
	};
}
