#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
class Class_3_1F0CF91729286987;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_77DC3E0B6C7F9449_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152EF380)
#define CLASS_3_77DC3E0B6C7F9449_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152EF580)
#define CLASS_3_77DC3E0B6C7F9449__CTOR_OFFSET UNITYSDK_OFFSET(0x152EF200)

inline static constexpr unsigned int Class_3_77DC3E0B6C7F9449_TypeDefinitionIndex = 51429;

class Class_3_77DC3E0B6C7F9449 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1F0CF91729286987*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1F0CF91729286987* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1F0CF91729286987*))((::PBYTE)hIl2Cpp + CLASS_3_77DC3E0B6C7F9449__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77DC3E0B6C7F9449_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77DC3E0B6C7F9449_ONTASKBEGIN_OFFSET))(this);
	}
};
