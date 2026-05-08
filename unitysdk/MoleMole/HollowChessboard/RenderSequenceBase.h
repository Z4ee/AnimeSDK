#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class RenderTrackBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERSEQUENCEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x170D8140)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceBase_TypeDefinitionIndex = 71347;

	class RenderSequenceBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERSEQUENCEBASE__CTOR_OFFSET))(this);
		}
	};
}
