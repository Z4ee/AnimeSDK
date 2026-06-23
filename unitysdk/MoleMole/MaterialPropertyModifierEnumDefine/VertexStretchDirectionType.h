#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int VertexStretchDirectionType_TypeDefinitionIndex = 53271;

	enum class VertexStretchDirectionType : ::System::Byte
	{
		Local = 0x3,
		Point = 0x2,
		Uniform = 0x0,
		Center = 0x1,
	};
}
