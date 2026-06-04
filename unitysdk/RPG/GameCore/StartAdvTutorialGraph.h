#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STARTADVTUTORIALGRAPH_METHOD_3_086305275DC8880F_OFFSET UNITYSDK_OFFSET(0x19CB61A0)
#define RPG_GAMECORE_STARTADVTUTORIALGRAPH_METHOD_3_7F4BFE11D225B71B_OFFSET UNITYSDK_OFFSET(0x19CB6220)
#define RPG_GAMECORE_STARTADVTUTORIALGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB61F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartAdvTutorialGraph_TypeDefinitionIndex = 20107;

	class StartAdvTutorialGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x18
		::System::Boolean Close; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVTUTORIALGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_086305275DC8880F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartAdvTutorialGraph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartAdvTutorialGraph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVTUTORIALGRAPH_METHOD_3_086305275DC8880F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F4BFE11D225B71B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartAdvTutorialGraph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartAdvTutorialGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVTUTORIALGRAPH_METHOD_3_7F4BFE11D225B71B_OFFSET))(a1, a2);
		}
	};
}
