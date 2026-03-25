#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CharacterDisableLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_68FBA24771D39393_METHOD_3_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x8A68620)
#define CLASS_3_68FBA24771D39393_METHOD_3_5689336C14047710_OFFSET UNITYSDK_OFFSET(0x8A683D0)
#define CLASS_3_68FBA24771D39393_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8A68610)
#define CLASS_3_68FBA24771D39393_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A68380)
#define CLASS_3_68FBA24771D39393__CTOR_OFFSET UNITYSDK_OFFSET(0x8A68350)

inline static constexpr unsigned int Class_3_68FBA24771D39393_TypeDefinitionIndex = 46776;

class Class_3_68FBA24771D39393 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CharacterDisableLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterDisableLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterDisableLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5689336C14047710(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393_METHOD_3_5689336C14047710_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393_METHOD_3_1092C5537716905B_OFFSET))(this);
	}
};
