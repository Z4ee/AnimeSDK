#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace System { class Action; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Threading { class Thread; }

#define RPG_CUSTOMRP_IOTHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x181417D0)
#define RPG_CUSTOMRP_IOTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18141800)
#define RPG_CUSTOMRP_IOTHREAD__ONLOSTCONNECTION_OFFSET UNITYSDK_OFFSET(0x18141910)
#define RPG_CUSTOMRP_IOTHREAD__START_OFFSET UNITYSDK_OFFSET(0x18141840)
#define RPG_CUSTOMRP_IOTHREAD__THREADFUNC_OFFSET UNITYSDK_OFFSET(0x18141920)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int IOThread_TypeDefinitionIndex = 35272;

	class IOThread : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::IO::Stream* _stream; // 0x18
		::Il2CppArray<::System::Action*>* _stateDelegates; // 0x20
		::RPG::CustomRP::IMsgFactory* _msgFactory; // 0x28
		::System::Threading::Thread* _thread; // 0x30
		::System::Int32 _state; // 0x38
		::System::Boolean _isRun; // 0x3C

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
