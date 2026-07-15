#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::MTR { template <typename T> class MiHoYoMTRInterface_TaskResult_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_TaskResult_1_TypeDefinitionIndex = 44904;

	template <typename TaskCallback>
	class MiHoYoMTRInterface_TaskResult_1 : public ::System::Object
	{
	public:
		::System::Int32 m_nTaskID; // 0x0
		::System::String* m_strResult; // 0x0
		TaskCallback m_callback; // 0x0
	};
}
