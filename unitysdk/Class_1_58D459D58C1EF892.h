#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_372;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_58D459D58C1EF892_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x17A3A930)
#define CLASS_1_58D459D58C1EF892_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A3A8E0)
#define CLASS_1_58D459D58C1EF892_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x17A3A850)
#define CLASS_1_58D459D58C1EF892_METHOD_1_AE3C63A8AA040506_OFFSET UNITYSDK_OFFSET(0x17A3A870)
#define CLASS_1_58D459D58C1EF892_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x17A3A9B0)
#define CLASS_1_58D459D58C1EF892_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x17A3A970)
#define CLASS_1_58D459D58C1EF892_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x17A3A860)
#define CLASS_1_58D459D58C1EF892__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3B020)

inline static constexpr unsigned int Class_1_58D459D58C1EF892_TypeDefinitionIndex = 58166;

class Class_1_58D459D58C1EF892 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_372* _OwnerFMSystem_k__BackingField; // 0x20
	::RPG::GameCore::TaskContext* Field_1_3; // 0x28
	::System::Action_1<::System::Single>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_372* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_372*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_372* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_372*))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE3C63A8AA040506(::System::String* a1, ::RPG::GameCore::TaskContext* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892_METHOD_1_AE3C63A8AA040506_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892_CLEAR_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892_CHANNELNAME_OFFSET))(this);
	}

	::System::Single SampleDelay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892_SAMPLEDELAY_OFFSET))(this);
	}

	::System::Void OnSample(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_58D459D58C1EF892_ONSAMPLE_OFFSET))(this, a1);
	}
};
