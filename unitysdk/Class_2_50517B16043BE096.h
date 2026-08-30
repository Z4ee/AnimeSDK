#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ConvinceShowToast; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_50517B16043BE096_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BE3C40)
#define CLASS_2_50517B16043BE096_METHOD_2_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x19BE3B70)
#define CLASS_2_50517B16043BE096_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19BE39B0)
#define CLASS_2_50517B16043BE096_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19BE3C90)
#define CLASS_2_50517B16043BE096_TICK_OFFSET UNITYSDK_OFFSET(0x19BE3CE0)
#define CLASS_2_50517B16043BE096__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE39A0)
#define CLASS_2_50517B16043BE096__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x19BE3D40)

inline static constexpr unsigned int Class_2_50517B16043BE096_TypeDefinitionIndex = 52986;

class Class_2_50517B16043BE096 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* PAEOOHJEGME; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ConvinceShowToast* OFKGLJOAMLD; // 0x20
	::System::Boolean BFIPMHHFJJH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceShowToast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceShowToast*))((::PBYTE)hIl2Cpp + CLASS_2_50517B16043BE096__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50517B16043BE096_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50517B16043BE096_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50517B16043BE096_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_50517B16043BE096_TICK_OFFSET))(this, a1);
	}

	::System::String* Method_2_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50517B16043BE096_METHOD_2_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50517B16043BE096__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
