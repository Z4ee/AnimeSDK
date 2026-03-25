#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CommonSkillPool; }

#define RPG_GAMECORE_COMMONSKILLPOOLLIST_METHOD_2_61DF7A557AD3FE7D_OFFSET UNITYSDK_OFFSET(0x17121750)
#define RPG_GAMECORE_COMMONSKILLPOOLLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17121850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonSkillPoolList_TypeDefinitionIndex = 16658;

	class CommonSkillPoolList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CommonSkillPool*>* PoolList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOLLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_61DF7A557AD3FE7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonSkillPoolList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonSkillPoolList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOLLIST_METHOD_2_61DF7A557AD3FE7D_OFFSET))(a1, a2);
		}
	};
}
