#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/GetSetDataStructBaset_2.h"

namespace MoleMole::FlowCanvas::Nodes { class WaveMonsterInfoData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x154241D0)
#define MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x154242C0)
#define MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x154243A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaveMonsterInfo_TypeDefinitionIndex = 68768;

	class WaveMonsterInfo : public ::MoleMole::FlowCanvas::Nodes::GetSetDataStructBaset_2<::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData*, ::System::String*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData*>* root; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFO__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData* GetValue(::System::String* key)
		{
			return ((::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFO_GETVALUE_OFFSET))(this, key);
		}

		::System::Boolean SetValue(::System::String* key, ::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFO_SETVALUE_OFFSET))(this, key, value);
		}
	};
}
