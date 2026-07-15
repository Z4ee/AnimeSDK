#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/NotifyType.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenUIPageTaskBase_1_TypeDefinitionIndex = 55662;

	template <typename TConfig>
	class OpenUIPageTaskBase_1 : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::Class_3_07C3C4D2990C49EE* _OnCancel; // 0x0
		::Class_3_07C3C4D2990C49EE* _OnUIEnter; // 0x0
		::System::Boolean _IsOnCancelRunning; // 0x0
		::System::Boolean _IsConfirmClose; // 0x0
		TConfig _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::RPG::Client::NotifyType _ConfirmNotifyType; // 0x0
	};
}
