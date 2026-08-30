#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STARTTUTORIALGRAPH_METHOD_3_7DF792D41D759FB7_OFFSET UNITYSDK_OFFSET(0x1D569450)
#define RPG_GAMECORE_STARTTUTORIALGRAPH_METHOD_3_D216B5657C867488_OFFSET UNITYSDK_OFFSET(0x1D569490)
#define RPG_GAMECORE_STARTTUTORIALGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D569480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartTutorialGraph_TypeDefinitionIndex = 23153;

	class StartTutorialGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LoadFromTableKey; // 0x18
		::System::String* Path; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTUTORIALGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DF792D41D759FB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartTutorialGraph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartTutorialGraph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTUTORIALGRAPH_METHOD_3_7DF792D41D759FB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D216B5657C867488(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartTutorialGraph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartTutorialGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTUTORIALGRAPH_METHOD_3_D216B5657C867488_OFFSET))(a1, a2);
		}
	};
}
