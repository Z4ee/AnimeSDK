#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GlobalSetBillboardShowType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3E5113BB348BC281_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EA5900)
#define CLASS_3_3E5113BB348BC281__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA58D0)

inline static constexpr unsigned int Class_3_3E5113BB348BC281_TypeDefinitionIndex = 55558;

class Class_3_3E5113BB348BC281 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GlobalSetBillboardShowType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalSetBillboardShowType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalSetBillboardShowType*))((::PBYTE)hIl2Cpp + CLASS_3_3E5113BB348BC281__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E5113BB348BC281_ONTASKBEGIN_OFFSET))(this);
	}
};
