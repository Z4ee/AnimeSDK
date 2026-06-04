#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_SetEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A372FA4C29F4FF51_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB76B8E0)
#define CLASS_3_A372FA4C29F4FF51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB76B600)
#define CLASS_3_A372FA4C29F4FF51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB76B890)
#define CLASS_3_A372FA4C29F4FF51_TICK_OFFSET UNITYSDK_OFFSET(0xB76B830)
#define CLASS_3_A372FA4C29F4FF51__CTOR_OFFSET UNITYSDK_OFFSET(0xB76B5D0)
#define CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB76B980)
#define CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB76B920)

inline static constexpr unsigned int Class_3_A372FA4C29F4FF51_TypeDefinitionIndex = 48898;

class Class_3_A372FA4C29F4FF51 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_SetEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
