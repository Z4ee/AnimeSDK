#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_90EA2BB24C67408F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D52176F3AA59B4A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A1A590)
#define CLASS_3_8D52176F3AA59B4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A1A6F0)
#define CLASS_3_8D52176F3AA59B4A__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1A470)

inline static constexpr unsigned int Class_3_8D52176F3AA59B4A_TypeDefinitionIndex = 52546;

class Class_3_8D52176F3AA59B4A : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_90EA2BB24C67408F*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_90EA2BB24C67408F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_90EA2BB24C67408F*))((::PBYTE)hIl2Cpp + CLASS_3_8D52176F3AA59B4A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D52176F3AA59B4A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D52176F3AA59B4A_ONTASKBEGIN_OFFSET))(this);
	}
};
