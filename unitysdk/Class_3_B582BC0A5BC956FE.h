#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_291F7DA21A504FC4;
class Class_3_1BE1C9B95DC77FA5;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B582BC0A5BC956FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6CE1F0)
#define CLASS_3_B582BC0A5BC956FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A6CE230)
#define CLASS_3_B582BC0A5BC956FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CE180)

inline static constexpr unsigned int Class_3_B582BC0A5BC956FE_TypeDefinitionIndex = 54107;

class Class_3_B582BC0A5BC956FE : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1BE1C9B95DC77FA5*>
{
public:
	::System::Collections::Generic::List_1<::Class_2_291F7DA21A504FC4*>* JBBCKPOAHCL; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1BE1C9B95DC77FA5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1BE1C9B95DC77FA5*))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_ONTASKBEGIN_OFFSET))(this);
	}
};
