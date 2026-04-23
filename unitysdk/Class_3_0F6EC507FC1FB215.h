#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_6;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_0F6EC507FC1FB215_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A540C0)
#define CLASS_3_0F6EC507FC1FB215_METHOD_3_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x11A54350)
#define CLASS_3_0F6EC507FC1FB215_METHOD_3_FFF8162B3F3F749A_OFFSET UNITYSDK_OFFSET(0x11A541B0)
#define CLASS_3_0F6EC507FC1FB215_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A54160)
#define CLASS_3_0F6EC507FC1FB215_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11A54010)
#define CLASS_3_0F6EC507FC1FB215_TICK_OFFSET UNITYSDK_OFFSET(0x11A54060)
#define CLASS_3_0F6EC507FC1FB215__CTOR_OFFSET UNITYSDK_OFFSET(0x11A53FE0)
#define CLASS_3_0F6EC507FC1FB215___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A54470)
#define CLASS_3_0F6EC507FC1FB215___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11A543C0)
#define CLASS_3_0F6EC507FC1FB215___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11A54410)

inline static constexpr unsigned int Class_3_0F6EC507FC1FB215_TypeDefinitionIndex = 53648;

class Class_3_0F6EC507FC1FB215 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_6*>
{
public:
	::RPG::Client::Promises::Promise* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_6*))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215__CTOR_OFFSET))(this, a1, a2);
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

	::RPG::Client::Promises::IPromise* Method_3_FFF8162B3F3F749A()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_METHOD_3_FFF8162B3F3F749A_OFFSET))(this);
	}

	::System::Void Method_3_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215_METHOD_3_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6EC507FC1FB215___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
