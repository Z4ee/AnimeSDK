#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropReplaceTVTexture; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1939F485F41AFC05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A14450)
#define CLASS_3_1939F485F41AFC05__CTOR_OFFSET UNITYSDK_OFFSET(0x17A14420)

inline static constexpr unsigned int Class_3_1939F485F41AFC05_TypeDefinitionIndex = 50754;

class Class_3_1939F485F41AFC05 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropReplaceTVTexture*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropReplaceTVTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropReplaceTVTexture*))((::PBYTE)hIl2Cpp + CLASS_3_1939F485F41AFC05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1939F485F41AFC05_ONTASKBEGIN_OFFSET))(this);
	}
};
