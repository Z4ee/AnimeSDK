#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM_METHOD_2_7033E23D706C9022_OFFSET UNITYSDK_OFFSET(0x1727B5C0)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1727B720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialNodeVisibleParam_TypeDefinitionIndex = 18238;

	class GridFightPrepTutorialNodeVisibleParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::GridFightFunctionNodeType NodeType; // 0x10
		::System::Boolean Visible; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7033E23D706C9022(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialNodeVisibleParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialNodeVisibleParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM_METHOD_2_7033E23D706C9022_OFFSET))(a1, a2);
		}
	};
}
