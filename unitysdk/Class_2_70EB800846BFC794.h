#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MuseumItemRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGetMuseumExhibit; }
namespace System { class Object; }

#define CLASS_2_70EB800846BFC794_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104BF3B0)
#define CLASS_2_70EB800846BFC794_METHOD_2_5CC3C7A9D6CEEBD6_OFFSET UNITYSDK_OFFSET(0x104BF5E0)
#define CLASS_2_70EB800846BFC794_METHOD_2_692E8099B58EAD06_OFFSET UNITYSDK_OFFSET(0x104BF7F0)
#define CLASS_2_70EB800846BFC794_METHOD_2_93097B60EF70000E_OFFSET UNITYSDK_OFFSET(0x104BF1A0)
#define CLASS_2_70EB800846BFC794_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x104BF500)
#define CLASS_2_70EB800846BFC794_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x104BF040)
#define CLASS_2_70EB800846BFC794_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x104BF790)
#define CLASS_2_70EB800846BFC794_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x104BF130)
#define CLASS_2_70EB800846BFC794_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x104BF440)
#define CLASS_2_70EB800846BFC794_TICK_OFFSET UNITYSDK_OFFSET(0x104BF4A0)
#define CLASS_2_70EB800846BFC794__CTOR_OFFSET UNITYSDK_OFFSET(0x104BF020)

inline static constexpr unsigned int Class_2_70EB800846BFC794_TypeDefinitionIndex = 43302;

class Class_2_70EB800846BFC794 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MuseumItemRow* Field_2_4; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::WaitGetMuseumExhibit* Field_2_0; // 0x28
	::System::Boolean Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGetMuseumExhibit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGetMuseumExhibit*))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_5CC3C7A9D6CEEBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_METHOD_2_5CC3C7A9D6CEEBD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_93097B60EF70000E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_METHOD_2_93097B60EF70000E_OFFSET))(this);
	}

	::RPG::GameCore::MuseumItemRow* Method_2_692E8099B58EAD06(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MuseumItemRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_70EB800846BFC794_METHOD_2_692E8099B58EAD06_OFFSET))(this, a1, a2);
	}
};
