#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class ActivityGuessTheSilhouetteData; }
namespace RPG::GameCore { class ActivityGuessSilhouetteRow; }
namespace RPG::GameCore { class GuessTheSilhouetteResult; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_ACD0E7063880E3C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DB4C30)
#define CLASS_2_ACD0E7063880E3C8_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x17DB5030)
#define CLASS_2_ACD0E7063880E3C8_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x17DB51A0)
#define CLASS_2_ACD0E7063880E3C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DB4CF0)
#define CLASS_2_ACD0E7063880E3C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17DB50F0)
#define CLASS_2_ACD0E7063880E3C8_TICK_OFFSET UNITYSDK_OFFSET(0x17DB5140)
#define CLASS_2_ACD0E7063880E3C8__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB4C20)

inline static constexpr unsigned int Class_2_ACD0E7063880E3C8_TypeDefinitionIndex = 50528;

class Class_2_ACD0E7063880E3C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ActivityGuessSilhouetteRow* Field_2_2; // 0x20
	::RPG::GameCore::GuessTheSilhouetteResult* Field_2_3; // 0x28
	::RPG::Client::ActivityGuessTheSilhouetteData* Field_2_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GuessTheSilhouetteResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GuessTheSilhouetteResult*))((::PBYTE)hIl2Cpp + CLASS_2_ACD0E7063880E3C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACD0E7063880E3C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACD0E7063880E3C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACD0E7063880E3C8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ACD0E7063880E3C8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACD0E7063880E3C8_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACD0E7063880E3C8_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
