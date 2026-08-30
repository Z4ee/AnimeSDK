#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace System { class Action; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Threading { class Thread; }

#define RPG_CUSTOMRP_IOTHREAD_MARKSTOPPING_OFFSET UNITYSDK_OFFSET(0x1857D220)
#define RPG_CUSTOMRP_IOTHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x1857D230)
#define RPG_CUSTOMRP_IOTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1857D2E0)
#define RPG_CUSTOMRP_IOTHREAD__ONLOSTCONNECTION_OFFSET UNITYSDK_OFFSET(0x1857D400)
#define RPG_CUSTOMRP_IOTHREAD__START_OFFSET UNITYSDK_OFFSET(0x1857D320)
#define RPG_CUSTOMRP_IOTHREAD__THREADFUNC_OFFSET UNITYSDK_OFFSET(0x1857D410)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int IOThread_TypeDefinitionIndex = 37213;

	class IOThread : public ::System::Object
	{
	public:
		::System::IO::Stream* _stream; // 0x10
		::Il2CppArray<::System::Action*>* _stateDelegates; // 0x18
		::System::Threading::Thread* _thread; // 0x20
		::RPG::CustomRP::IMsgFactory* _msgFactory; // 0x28
		::System::String* _name; // 0x30
		::System::Boolean _isStopping; // 0x38
		::System::Boolean _isRun; // 0x39
		::System::Int32 _state; // 0x3C

		::System::Void _ctor(::System::IO::Stream* a1, ::System::String* a2, ::System::Int32 a3, ::RPG::CustomRP::IMsgFactory* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Int32, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IOTHREAD__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MarkStopping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IOTHREAD_MARKSTOPPING_OFFSET))(this);
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
