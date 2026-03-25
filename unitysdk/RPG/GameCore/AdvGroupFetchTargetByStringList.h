#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicStringList; }

#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_57BBBB0ACCFC992F_OFFSET UNITYSDK_OFFSET(0x16F313A0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_616012D5FBD382A9_OFFSET UNITYSDK_OFFSET(0x16F31240)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16F31350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupFetchTargetByStringList_TypeDefinitionIndex = 19456;

	class AdvGroupFetchTargetByStringList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicStringList* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_616012D5FBD382A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_616012D5FBD382A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57BBBB0ACCFC992F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_57BBBB0ACCFC992F_OFFSET))(a1, a2);
		}
	};
}
