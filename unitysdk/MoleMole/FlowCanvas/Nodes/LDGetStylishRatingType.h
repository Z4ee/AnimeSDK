#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A020990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A020B70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishRatingType_TypeDefinitionIndex = 84394;

	class LDGetStylishRatingType : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::Level::RatingType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE__CTOR_OFFSET))(this);
		}

		::MoleMole::Level::RatingType Invoke()
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE_INVOKE_OFFSET))(this);
		}
	};
}
