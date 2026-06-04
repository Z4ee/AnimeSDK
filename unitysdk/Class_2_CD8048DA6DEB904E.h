#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForNotifyNoParam; }
namespace System { class Object; }

#define CLASS_2_CD8048DA6DEB904E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C49500)
#define CLASS_2_CD8048DA6DEB904E_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x13C497A0)
#define CLASS_2_CD8048DA6DEB904E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C495B0)
#define CLASS_2_CD8048DA6DEB904E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C49680)
#define CLASS_2_CD8048DA6DEB904E_TICK_OFFSET UNITYSDK_OFFSET(0x13C496D0)
#define CLASS_2_CD8048DA6DEB904E__CTOR_OFFSET UNITYSDK_OFFSET(0x13C491F0)

inline static constexpr unsigned int Class_2_CD8048DA6DEB904E_TypeDefinitionIndex = 55024;

class Class_2_CD8048DA6DEB904E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::WaitForNotifyNoParam* Field_2_1; // 0x20
	::Struct_2_D3027B1CDFF61281 Field_2_2; // 0x28
	::RPG::Client::NotifyType Field_2_3; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForNotifyNoParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForNotifyNoParam*))((::PBYTE)hIl2Cpp + CLASS_2_CD8048DA6DEB904E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8048DA6DEB904E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8048DA6DEB904E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8048DA6DEB904E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD8048DA6DEB904E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD8048DA6DEB904E_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}
};
