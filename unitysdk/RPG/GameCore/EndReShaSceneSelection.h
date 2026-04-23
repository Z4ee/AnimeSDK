#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDRESHASCENESELECTION_METHOD_3_5D1C89515E75F13F_OFFSET UNITYSDK_OFFSET(0x188A8830)
#define RPG_GAMECORE_ENDRESHASCENESELECTION_METHOD_3_B1266994BFDCE593_OFFSET UNITYSDK_OFFSET(0x188A8940)
#define RPG_GAMECORE_ENDRESHASCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188A8910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndReShaSceneSelection_TypeDefinitionIndex = 20143;

	class EndReShaSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDRESHASCENESELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D1C89515E75F13F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndReShaSceneSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndReShaSceneSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDRESHASCENESELECTION_METHOD_3_5D1C89515E75F13F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1266994BFDCE593(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndReShaSceneSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndReShaSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDRESHASCENESELECTION_METHOD_3_B1266994BFDCE593_OFFSET))(a1, a2);
		}
	};
}
