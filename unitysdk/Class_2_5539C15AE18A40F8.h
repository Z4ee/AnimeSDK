#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace RPG::GameCore { class InteractRow; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropReqInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_5539C15AE18A40F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A956B0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x10A961B0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_21886A8411E71157_1_OFFSET UNITYSDK_OFFSET(0x10A96A60)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x10A971F0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_4902439FC9A86F1B_OFFSET UNITYSDK_OFFSET(0x10A957D0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_50BAF321F0046F48_OFFSET UNITYSDK_OFFSET(0x10A96820)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x10A963D0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_6F3280E73EE35147_OFFSET UNITYSDK_OFFSET(0x10A95980)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_8E1BB776F7CCE9B5_OFFSET UNITYSDK_OFFSET(0x10A969B0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_92BE766FE7637517_OFFSET UNITYSDK_OFFSET(0x10A97000)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_B8F02E85BF51FFA6_OFFSET UNITYSDK_OFFSET(0x10A95F80)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x10A97130)
#define CLASS_2_5539C15AE18A40F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A96BD0)
#define CLASS_2_5539C15AE18A40F8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A96D80)
#define CLASS_2_5539C15AE18A40F8_TICK_OFFSET UNITYSDK_OFFSET(0x10A96DD0)
#define CLASS_2_5539C15AE18A40F8__CTOR_OFFSET UNITYSDK_OFFSET(0x10A956A0)

inline static constexpr unsigned int Class_2_5539C15AE18A40F8_TypeDefinitionIndex = 43049;

class Class_2_5539C15AE18A40F8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::RPG::GameCore::PropReqInteract* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::RspHandler* Field_2_12; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_7; // 0x30
	::RPG::GameCore::PropComponent* Field_2_10; // 0x38
	::RPG::Client::NotifyHandler* Field_2_11; // 0x40
	::Class_1_5F51D4049EA87B7B* Field_2_8; // 0x48
	::System::UInt32 Field_2_2; // 0x50
	::System::UInt32 Field_2_9; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropReqInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropReqInteract*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_2_4902439FC9A86F1B()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_4902439FC9A86F1B_OFFSET))(this);
	}

	::System::Void Method_2_6F3280E73EE35147(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_6F3280E73EE35147_OFFSET))(this, a1);
	}

	::System::Void Method_2_B8F02E85BF51FFA6(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_B8F02E85BF51FFA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Boolean Method_2_50BAF321F0046F48(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_50BAF321F0046F48_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E1BB776F7CCE9B5(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_8E1BB776F7CCE9B5_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_92BE766FE7637517(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_92BE766FE7637517_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_21886A8411E71157_1_OFFSET))(this);
	}
};
