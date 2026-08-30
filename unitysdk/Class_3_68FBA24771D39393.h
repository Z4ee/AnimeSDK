#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CharacterDisableLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_68FBA24771D39393_METHOD_3_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0xD7F0470)
#define CLASS_3_68FBA24771D39393_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xD7F0730)
#define CLASS_3_68FBA24771D39393_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD7F0720)
#define CLASS_3_68FBA24771D39393_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7F0420)
#define CLASS_3_68FBA24771D39393__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F03F0)

inline static constexpr unsigned int Class_3_68FBA24771D39393_TypeDefinitionIndex = 58152;

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

	::System::Void Method_3_269AC17BE7A40357(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393_METHOD_3_269AC17BE7A40357_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68FBA24771D39393_METHOD_3_61929A3103595552_OFFSET))(this);
	}
};
