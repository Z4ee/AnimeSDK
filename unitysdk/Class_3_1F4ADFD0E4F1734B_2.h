#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_E503BDC92E02731E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABB3F30)
#define CLASS_3_1F4ADFD0E4F1734B_2__CTOR_OFFSET UNITYSDK_OFFSET(0xABB3E50)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_2_TypeDefinitionIndex = 51802;

class Class_3_1F4ADFD0E4F1734B_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E503BDC92E02731E*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E503BDC92E02731E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E503BDC92E02731E*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_2_ONTASKBEGIN_OFFSET))(this);
	}
};
