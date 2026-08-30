#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PacketSendResult_1_TypeDefinitionIndex = 69376;

	template <typename TRsp>
	struct PacketSendResult_1
	{
		::System::Collections::Generic::List_1<::System::Object*>* _Notifies; // 0x0
		TRsp _Rsp_k__BackingField; // 0x0
		::System::UInt32 _Retcode_k__BackingField; // 0x0
	};
}
