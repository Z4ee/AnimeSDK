#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int VertexStretchDirectionType_TypeDefinitionIndex = 90911;

	enum class VertexStretchDirectionType : ::System::Byte
	{
		Uniform = 0x0,
		Center = 0x1,
		Local = 0x3,
		Point = 0x2,
	};
}
