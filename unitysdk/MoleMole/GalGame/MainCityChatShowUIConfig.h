#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/System/Object.h"

class Class_2_15F9FE7F9AD3257D;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x1512CA90)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GET_OUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x1512CB40)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1512CB50)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1512CBC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIConfig_TypeDefinitionIndex = 44138;

	class MainCityChatShowUIConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG__CTOR_OFFSET))(this);
		}

		::System::String* GetOutputName(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GETOUTPUTNAME_OFFSET))(this, idx);
		}

		::System::Int32 get_OutputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GET_OUTPUTCOUNT_OFFSET))(this);
		}

		::System::Void OnAfterTransition(::Class_2_15F9FE7F9AD3257D* node, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_15F9FE7F9AD3257D*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONAFTERTRANSITION_OFFSET))(this, node, action);
		}
	};
}
