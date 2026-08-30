#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LOOPTARGETLIST_METHOD_3_8514EE0F13FD2EDF_OFFSET UNITYSDK_OFFSET(0x1D48AB50)
#define RPG_GAMECORE_LOOPTARGETLIST_METHOD_3_CD1ED9A6FE87B5E6_OFFSET UNITYSDK_OFFSET(0x1D48AC50)
#define RPG_GAMECORE_LOOPTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48ABE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopTargetList_TypeDefinitionIndex = 22641;

	class LoopTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MaxLoopCount; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8514EE0F13FD2EDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPTARGETLIST_METHOD_3_8514EE0F13FD2EDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD1ED9A6FE87B5E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPTARGETLIST_METHOD_3_CD1ED9A6FE87B5E6_OFFSET))(a1, a2);
		}
	};
}
