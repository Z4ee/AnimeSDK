#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class RenderTrackBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERSEQUENCEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC4F20)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceBase_TypeDefinitionIndex = 56807;

	class RenderSequenceBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERSEQUENCEBASE__CTOR_OFFSET))(this);
		}
	};
}
