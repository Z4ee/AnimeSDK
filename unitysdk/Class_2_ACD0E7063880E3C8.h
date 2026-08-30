#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class ActivityGuessTheSilhouetteData; }
namespace RPG::GameCore { class ActivityGuessSilhouetteRow; }
namespace RPG::GameCore { class GuessTheSilhouetteResult; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_ACD0E7063880E3C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAA3BC0)
#define CLASS_2_ACD0E7063880E3C8_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xDAA3FC0)
#define CLASS_2_ACD0E7063880E3C8_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xDAA4130)
#define CLASS_2_ACD0E7063880E3C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDAA3C80)
#define CLASS_2_ACD0E7063880E3C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDAA4080)
#define CLASS_2_ACD0E7063880E3C8_TICK_OFFSET UNITYSDK_OFFSET(0xDAA40D0)
#define CLASS_2_ACD0E7063880E3C8__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA3BB0)

inline static constexpr unsigned int Class_2_ACD0E7063880E3C8_TypeDefinitionIndex = 53196;

class Class_2_ACD0E7063880E3C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* BPFHDDEINLE; // 0x0
	::RPG::GameCore::ActivityGuessSilhouetteRow* OKDEHPPEGBO; // 0x18
	::RPG::Client::ActivityGuessTheSilhouetteData* FHKOBFOLJKM; // 0x20
	::RPG::GameCore::GuessTheSilhouetteResult* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

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
