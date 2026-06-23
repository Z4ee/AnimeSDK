#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B19770)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B19960)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameUpdateDamageStatistics_TypeDefinitionIndex = 57086;

	class HackerGameUpdateDamageStatistics : public ::FlowCanvas::Nodes::CallableActionNode_3<::MoleMole::ChessEntity*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>
	{
	public:
		// static const ::System::String* UnknownDamageSourceKey; // 0x0
		// static const ::System::String* LaserDamageSourceKey; // 0x0
		// static const ::System::String* TrapDamageSourceKey; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* damageSource, ::System::Int32 damageIn, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* damageStatistics)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS_INVOKE_OFFSET))(this, damageSource, damageIn, damageStatistics);
		}
	};
}
