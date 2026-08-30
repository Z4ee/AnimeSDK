#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_64BCF413F756F4C1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_11BB87B6F1E8B98D_METHOD_3_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x198701D0)
#define CLASS_3_11BB87B6F1E8B98D__CTOR_OFFSET UNITYSDK_OFFSET(0x1986FEC0)
#define CLASS_3_11BB87B6F1E8B98D__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19870050)
#define CLASS_3_11BB87B6F1E8B98D__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19870130)

inline static constexpr unsigned int Class_3_11BB87B6F1E8B98D_TypeDefinitionIndex = 53722;

class Class_3_11BB87B6F1E8B98D : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_64BCF413F756F4C1*>
{
public:
	::System::String* LJPOEMIKGKB; // 0x68
	::System::Boolean KHCFEEHLEFH; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_64BCF413F756F4C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_64BCF413F756F4C1*))((::PBYTE)hIl2Cpp + CLASS_3_11BB87B6F1E8B98D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11BB87B6F1E8B98D__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11BB87B6F1E8B98D__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_11BB87B6F1E8B98D_METHOD_3_DF606F1BC273FE84_OFFSET))(this, a1);
	}
};
