#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableSmoothLoadBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_304FAE98A0261647_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B981D0)
#define CLASS_3_304FAE98A0261647__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B98550)
#define CLASS_3_304FAE98A0261647__CTOR_OFFSET UNITYSDK_OFFSET(0x18B981A0)

inline static constexpr unsigned int Class_3_304FAE98A0261647_TypeDefinitionIndex = 55226;

class Class_3_304FAE98A0261647 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableSmoothLoadBattle*>
{
public:
	static ::System::Single* StaticGet_GCMNCCJMKEN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_304FAE98A0261647_TypeDefinitionIndex)->GetStaticField(0xC7A0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableSmoothLoadBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableSmoothLoadBattle*))((::PBYTE)hIl2Cpp + CLASS_3_304FAE98A0261647__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_304FAE98A0261647__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_304FAE98A0261647_ONTASKBEGIN_OFFSET))(this);
	}
};
