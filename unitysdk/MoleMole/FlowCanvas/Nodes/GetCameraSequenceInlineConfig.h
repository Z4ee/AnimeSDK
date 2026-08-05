#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDGetNapCameraSequenceDataTableEntry_2.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace MoleMole::Utils { class NapCameraSequence; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x144BA440)
#define MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x144BA6E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetCameraSequenceInlineConfig_TypeDefinitionIndex = 62347;

	class GetCameraSequenceInlineConfig : public ::MoleMole::FlowCanvas::Nodes::LDGetNapCameraSequenceDataTableEntry_2<::System::String*, ::MoleMole::Utils::NapCameraSequence*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Utils::INapCameraSequenceDataTableEntry* Invoke(::System::String* key, ::MoleMole::Utils::NapCameraSequence* sequence)
		{
			return ((::MoleMole::Utils::INapCameraSequenceDataTableEntry*(*)(::PVOID, ::System::String*, ::MoleMole::Utils::NapCameraSequence*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG_INVOKE_OFFSET))(this, key, sequence);
		}
	};
}
