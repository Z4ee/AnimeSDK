#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class PlayRandomMissionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B77D1064B83301E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BE2800)
#define CLASS_2_B77D1064B83301E8_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x18BE2A60)
#define CLASS_2_B77D1064B83301E8_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x18BE2C00)
#define CLASS_2_B77D1064B83301E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18BE2BB0)
#define CLASS_2_B77D1064B83301E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BE28C0)
#define CLASS_2_B77D1064B83301E8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BE2980)
#define CLASS_2_B77D1064B83301E8_TICK_OFFSET UNITYSDK_OFFSET(0x18BE29D0)
#define CLASS_2_B77D1064B83301E8__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE2620)

inline static constexpr unsigned int Class_2_B77D1064B83301E8_TypeDefinitionIndex = 58426;

class Class_2_B77D1064B83301E8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::PlayMissionTalk*>* CALBINJGJAL; // 0x20
	::RPG::GameCore::PlayRandomMissionTalk* OFKGLJOAMLD; // 0x28
	::System::Single MPIEDKJHMDN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayRandomMissionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayRandomMissionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B77D1064B83301E8_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
