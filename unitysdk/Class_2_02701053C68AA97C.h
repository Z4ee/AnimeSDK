#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ConsumeMissionItem; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_02701053C68AA97C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11555B20)
#define CLASS_2_02701053C68AA97C_METHOD_2_101A613AFC0F5B91_OFFSET UNITYSDK_OFFSET(0x11556650)
#define CLASS_2_02701053C68AA97C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x115563B0)
#define CLASS_2_02701053C68AA97C_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x11555D40)
#define CLASS_2_02701053C68AA97C_METHOD_2_5FB1B9EC645AD55B_OFFSET UNITYSDK_OFFSET(0x11556820)
#define CLASS_2_02701053C68AA97C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x115567B0)
#define CLASS_2_02701053C68AA97C_METHOD_2_9E18077320785B6F_OFFSET UNITYSDK_OFFSET(0x115561B0)
#define CLASS_2_02701053C68AA97C_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x11556470)
#define CLASS_2_02701053C68AA97C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11555BF0)
#define CLASS_2_02701053C68AA97C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11556100)
#define CLASS_2_02701053C68AA97C_TICK_OFFSET UNITYSDK_OFFSET(0x11556150)
#define CLASS_2_02701053C68AA97C__CTOR_OFFSET UNITYSDK_OFFSET(0x11555B10)

inline static constexpr unsigned int Class_2_02701053C68AA97C_TypeDefinitionIndex = 42653;

class Class_2_02701053C68AA97C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::RPG::GameCore::SubMissionRow* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::ConsumeMissionItem* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeMissionItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeMissionItem*))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Boolean Method_2_9E18077320785B6F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_METHOD_2_9E18077320785B6F_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_101A613AFC0F5B91(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_METHOD_2_101A613AFC0F5B91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_5FB1B9EC645AD55B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02701053C68AA97C_METHOD_2_5FB1B9EC645AD55B_OFFSET))(this, a1);
	}
};
