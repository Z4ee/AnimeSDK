#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_3A7D5BC012150C72;
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_BBE667D4A3124D9B;

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D77420)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow01Context_TypeDefinitionIndex = 76151;

	class UIUrbanMapLeftTastListRow01Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIUrbanMapLeftTastListRow01Context*>* OnClick; // 0x28
		::Class_1_BBE667D4A3124D9B<::Class_1_3A7D5BC012150C72*>* QuestDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
