#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_C3F11EA7F494BEBC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D52176F3AA59B4A_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BA7680)
#define CLASS_3_8D52176F3AA59B4A_1_METHOD_3_2C14C45522A03B0D_OFFSET UNITYSDK_OFFSET(0x16BA8960)
#define CLASS_3_8D52176F3AA59B4A_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BA77E0)
#define CLASS_3_8D52176F3AA59B4A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA7560)

inline static constexpr unsigned int Class_3_8D52176F3AA59B4A_1_TypeDefinitionIndex = 52569;

class Class_3_8D52176F3AA59B4A_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C3F11EA7F494BEBC*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C3F11EA7F494BEBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C3F11EA7F494BEBC*))((::PBYTE)hIl2Cpp + CLASS_3_8D52176F3AA59B4A_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D52176F3AA59B4A_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D52176F3AA59B4A_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_2C14C45522A03B0D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8D52176F3AA59B4A_1_METHOD_3_2C14C45522A03B0D_OFFSET))(this, a1);
	}
};
