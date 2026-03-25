#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ForceAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5E0399F0CDC350B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x979D420)
#define CLASS_3_5E0399F0CDC350B7_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x979D3B0)
#define CLASS_3_5E0399F0CDC350B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x979D1E0)
#define CLASS_3_5E0399F0CDC350B7__CTOR_OFFSET UNITYSDK_OFFSET(0x979D140)
#define CLASS_3_5E0399F0CDC350B7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x979D490)

inline static constexpr unsigned int Class_3_5E0399F0CDC350B7_TypeDefinitionIndex = 44067;

class Class_3_5E0399F0CDC350B7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceAutoBattle*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceAutoBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
