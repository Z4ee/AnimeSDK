#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_27;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x127D3A60)
#define CLASS_3_27518451A20BB161_89__CTOR_OFFSET UNITYSDK_OFFSET(0x127D3A30)

inline static constexpr unsigned int Class_3_27518451A20BB161_89_TypeDefinitionIndex = 49683;

class Class_3_27518451A20BB161_89 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_27*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_27* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_27*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89_ONTASKBEGIN_OFFSET))(this);
	}
};
