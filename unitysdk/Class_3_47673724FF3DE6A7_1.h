#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEB9B40)
#define CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB9B10)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_1_TypeDefinitionIndex = 47320;

class Class_3_47673724FF3DE6A7_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_6*>
{
public:
	::Class_3_06CA57680E115A32_6* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_6*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET))(this);
	}
};
