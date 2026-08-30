#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2AEBF4D8F22111EA;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F6B3EE9186BC6050_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16321530)
#define CLASS_3_F6B3EE9186BC6050__CTOR_OFFSET UNITYSDK_OFFSET(0x16321500)

inline static constexpr unsigned int Class_3_F6B3EE9186BC6050_TypeDefinitionIndex = 58724;

class Class_3_F6B3EE9186BC6050 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2AEBF4D8F22111EA*>
{
public:
	::Class_3_2AEBF4D8F22111EA* EJJEEJENLDA; // 0x28
	::RPG::Client::Stage* PDAIGLPEMEE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2AEBF4D8F22111EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2AEBF4D8F22111EA*))((::PBYTE)hIl2Cpp + CLASS_3_F6B3EE9186BC6050__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6B3EE9186BC6050_ONTASKBEGIN_OFFSET))(this);
	}
};
