#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_181.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/RPG/Client/PacketSendResult_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_ACD0390146938DDC;
namespace Cysharp::Threading::Tasks { template <typename T> class AutoResetUniTaskCompletionSource_1; }
namespace RPG::Client { template <typename T> class PendingRspEntry_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1_TypeDefinitionIndex = 69371;

	template <typename TRsp>
	class PendingRspEntry_1 : public ::Class_1_43BD383C98B4C0C5_181
	{
	public:
		static ::System::UInt16* StaticGet_s_RspCmdID()
		{
			return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(PendingRspEntry_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Class_1_ACD0390146938DDC* _Owner; // 0x0
		::System::UInt32 _PacketId; // 0x0
		::System::UInt16 _ReqCmdID; // 0x0
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<::RPG::Client::PacketSendResult_1<TRsp>>* _Source; // 0x0
		::System::Collections::Generic::Queue_1<::System::Object*>* _NotifyBuffer; // 0x0
		::System::Threading::CancellationToken _AwaitCt; // 0x0
		// static const ::System::Int32 _DefaultTimeoutMs = 0x493E0; // 0x0
	};
}
