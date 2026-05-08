#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int VertexStretchDirectionType_TypeDefinitionIndex = 63490;

	enum class VertexStretchDirectionType : ::System::Byte
	{
		Point = 0x2,
		Uniform = 0x0,
		Local = 0x3,
		Center = 0x1,
	};
}
