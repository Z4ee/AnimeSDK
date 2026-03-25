#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace System { class Action; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Threading { class Thread; }

#define RPG_CUSTOMRP_IOTHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x16A9DE70)
#define RPG_CUSTOMRP_IOTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9DEA0)
#define RPG_CUSTOMRP_IOTHREAD__ONLOSTCONNECTION_OFFSET UNITYSDK_OFFSET(0x16A9DFB0)
#define RPG_CUSTOMRP_IOTHREAD__START_OFFSET UNITYSDK_OFFSET(0x16A9DEE0)
#define RPG_CUSTOMRP_IOTHREAD__THREADFUNC_OFFSET UNITYSDK_OFFSET(0x16A9DFC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int IOThread_TypeDefinitionIndex = 29505;

	class IOThread : public ::System::Object
	{
	public:
		::RPG::CustomRP::IMsgFactory* _msgFactory; // 0x10
		::System::IO::Stream* _stream; // 0x18
		::System::Threading::Thread* _thread; // 0x20
		::Il2CppArray<::System::Action*>* _stateDelegates; // 0x28
		::System::String* _name; // 0x30
		::System::Boolean _isRun; // 0x38
		::System::Int32 _state; // 0x3C

		::System::Void _ctor(::System::IO::Stream* stream, ::System::String* name, ::System::Int32 stateCount, ::RPG::CustomRP::IMsgFactory* msgFactory)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Int32, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IOTHREAD__CTOR_OFFSET))(this, stream, name, stateCount, msgFactory);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IOTHREAD_STOP_OFFSET))(this);
		}

		::System::Void _Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IOTHREAD__START_OFFSET))(this);
		}

		::System::Void _OnLostConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IOTHREAD__ONLOSTCONNECTION_OFFSET))(this);
		}

		::System::Void _ThreadFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IOTHREAD__THREADFUNC_OFFSET))(this);
		}
	};
}
