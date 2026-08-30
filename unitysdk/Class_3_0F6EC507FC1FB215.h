#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_6;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_0F6EC507FC1FB215_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E3F660)
#define CLASS_3_0F6EC507FC1FB215_METHOD_3_D20E892CC7B32630_OFFSET UNITYSDK_OFFSET(0x15E3F770)
#define CLASS_3_0F6EC507FC1FB215_METHOD_3_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x15E3F970)
#define CLASS_3_0F6EC507FC1FB215_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E3F720)
#define CLASS_3_0F6EC507FC1FB215_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E3F5B0)
#define CLASS_3_0F6EC507FC1FB215_TICK_OFFSET UNITYSDK_OFFSET(0x15E3F600)
#define CLASS_3_0F6EC507FC1FB215__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3F580)

inline static constexpr unsigned int Class_3_0F6EC507FC1FB215_TypeDefinitionIndex = 58315;

class Class_3_0F6EC507FC1FB215 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_6*>
{
public:
	::RPG::Client::Promises::Promise* FCCHOKACEBB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_6*))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_D20E892CC7B32630()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_METHOD_3_D20E892CC7B32630_OFFSET))(this);
	}

	::System::Void Method_3_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_METHOD_3_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}
};
