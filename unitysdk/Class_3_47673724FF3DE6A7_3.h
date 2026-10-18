#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BBD058BB94436C40_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFA0BD0)
#define CLASS_3_47673724FF3DE6A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA0BA0)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_3_TypeDefinitionIndex = 58632;

class Class_3_47673724FF3DE6A7_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BBD058BB94436C40_4*>
{
public:
	::Class_3_BBD058BB94436C40_4* IGHAHBNLIJA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BBD058BB94436C40_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BBD058BB94436C40_4*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_3_ONTASKBEGIN_OFFSET))(this);
	}
};
