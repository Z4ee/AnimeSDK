#pragma once
#include "unitysdk/unitysdk.h"

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Axis_AxisType_TypeDefinitionIndex = 1640;

	enum class Axis_AxisType : ::System::Int32
	{
		Ancestor = 0,
		AncestorOrSelf = 1,
		Attribute = 2,
		Child = 3,
		Descendant = 4,
		DescendantOrSelf = 5,
		Following = 6,
		FollowingSibling = 7,
		Namespace = 8,
		Parent = 9,
		Preceding = 10,
		PrecedingSibling = 11,
		Self = 12,
		None = 13,
	};
}
