#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CommonSkill; }
namespace System { class String; }

#define RPG_GAMECORE_COMMONSKILLPOOL_METHOD_2_5D9693405A11C60C_OFFSET UNITYSDK_OFFSET(0x18827C80)
#define RPG_GAMECORE_COMMONSKILLPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x18827DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonSkillPool_TypeDefinitionIndex = 17249;

	class CommonSkillPool : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::Il2CppArray<::RPG::GameCore::CommonSkill*>* SkillList; // 0x18
		::Class_1_2CAAA2FDF9170110* DynamicValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5D9693405A11C60C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonSkillPool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonSkillPool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOL_METHOD_2_5D9693405A11C60C_OFFSET))(a1, a2);
		}
	};
}
