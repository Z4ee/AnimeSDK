#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_3A7D5BC012150C72;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_1_BBE667D4A3124D9B;

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D77470)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow02Context_TypeDefinitionIndex = 81965;

	class UIUrbanMapLeftTastListRow02Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* OverrideFrameTexture; // 0x28
		::System::Action_1<::MoleMole::UIUrbanMapLeftTastListRow02Context*>* OnClick; // 0x30
		::Class_1_BBE667D4A3124D9B<::Class_1_3A7D5BC012150C72*>* QuestDatas; // 0x38
		::System::Func_1<::System::String*>* OverrideRawText; // 0x40
		::System::Boolean ShowConsole; // 0x48
		::System::Int32 MapAreaId; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
