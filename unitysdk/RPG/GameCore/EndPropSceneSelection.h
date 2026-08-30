#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDPROPSCENESELECTION_METHOD_3_7C7A83640D1B0A64_OFFSET UNITYSDK_OFFSET(0x1D065010)
#define RPG_GAMECORE_ENDPROPSCENESELECTION_METHOD_3_E9876B6F86D65AE1_OFFSET UNITYSDK_OFFSET(0x1D0650E0)
#define RPG_GAMECORE_ENDPROPSCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0650D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndPropSceneSelection_TypeDefinitionIndex = 21779;

	class EndPropSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPSCENESELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C7A83640D1B0A64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPropSceneSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPropSceneSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPSCENESELECTION_METHOD_3_7C7A83640D1B0A64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9876B6F86D65AE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPropSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPSCENESELECTION_METHOD_3_E9876B6F86D65AE1_OFFSET))(a1, a2);
		}
	};
}
