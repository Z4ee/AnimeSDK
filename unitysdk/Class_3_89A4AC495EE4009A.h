#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_D1B33D2A4D0C41DF;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_89A4AC495EE4009A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B7C760)
#define CLASS_3_89A4AC495EE4009A_METHOD_3_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x14B7C7F0)
#define CLASS_3_89A4AC495EE4009A_METHOD_3_9B6BAF49879647BD_OFFSET UNITYSDK_OFFSET(0x14B7C5F0)
#define CLASS_3_89A4AC495EE4009A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B7C5A0)
#define CLASS_3_89A4AC495EE4009A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B7C7A0)
#define CLASS_3_89A4AC495EE4009A_TICK_OFFSET UNITYSDK_OFFSET(0x14B7C8E0)
#define CLASS_3_89A4AC495EE4009A__CTOR_OFFSET UNITYSDK_OFFSET(0x14B7C570)

inline static constexpr unsigned int Class_3_89A4AC495EE4009A_TypeDefinitionIndex = 49848;

class Class_3_89A4AC495EE4009A : public ::RPG::GameCore::ST_Task_1<::Class_4_D1B33D2A4D0C41DF*>
{
public:
	::System::String* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_D1B33D2A4D0C41DF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_D1B33D2A4D0C41DF*))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_9B6BAF49879647BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_METHOD_3_9B6BAF49879647BD_OFFSET))(this);
	}

	::System::Void Method_3_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_METHOD_3_8DC652D916C182B2_OFFSET))(this);
	}
};
