#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITPLAYERSKILLABORT_METHOD_3_037EE14AD098D848_OFFSET UNITYSDK_OFFSET(0x1DEBDF80)
#define RPG_GAMECORE_WAITPLAYERSKILLABORT_METHOD_3_4461C77B126F937D_OFFSET UNITYSDK_OFFSET(0x1DEBDF40)
#define RPG_GAMECORE_WAITPLAYERSKILLABORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBDF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPlayerSkillAbort_TypeDefinitionIndex = 20674;

	class WaitPlayerSkillAbort : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLoop; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSkillAbort; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERSKILLABORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4461C77B126F937D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerSkillAbort*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerSkillAbort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERSKILLABORT_METHOD_3_4461C77B126F937D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_037EE14AD098D848(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerSkillAbort* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerSkillAbort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERSKILLABORT_METHOD_3_037EE14AD098D848_OFFSET))(a1, a2);
		}
	};
}
