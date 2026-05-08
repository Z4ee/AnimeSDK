#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole::FlowCanvas { class HackShardedInfo; }

#define MOLEMOLE_FLOWCANVAS_HACKMODIFY_MODIFY_OFFSET UNITYSDK_OFFSET(0x11736C70)
#define MOLEMOLE_FLOWCANVAS_HACKMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x11736D50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackModify_TypeDefinitionIndex = 65285;

	class HackModify : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::HackShardedInfo* ShardedInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKMODIFY__CTOR_OFFSET))(this);
		}

		::System::Void Modify(::MoleMole::ChessEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKMODIFY_MODIFY_OFFSET))(this, entity);
		}
	};
}
