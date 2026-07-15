#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetBillboardInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AF0D178AA2AACB45_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x149E7DA0)
#define CLASS_3_AF0D178AA2AACB45__CTOR_OFFSET UNITYSDK_OFFSET(0x149E7D70)

inline static constexpr unsigned int Class_3_AF0D178AA2AACB45_TypeDefinitionIndex = 55812;

class Class_3_AF0D178AA2AACB45 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetBillboardInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetBillboardInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetBillboardInfo*))((::PBYTE)hIl2Cpp + CLASS_3_AF0D178AA2AACB45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF0D178AA2AACB45_ONTASKBEGIN_OFFSET))(this);
	}
};
