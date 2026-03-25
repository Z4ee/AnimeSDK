#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_A7993FD8B166AE9B;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5CE6B5E9F3F574A7_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xDE30830)
#define CLASS_3_5CE6B5E9F3F574A7_METHOD_3_D92EAC9D4E19C479_OFFSET UNITYSDK_OFFSET(0xDE30890)
#define CLASS_3_5CE6B5E9F3F574A7__CTOR_OFFSET UNITYSDK_OFFSET(0xDE30C00)

inline static constexpr unsigned int Class_3_5CE6B5E9F3F574A7_TypeDefinitionIndex = 63036;

class Class_3_5CE6B5E9F3F574A7 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_A7993FD8B166AE9B* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CE6B5E9F3F574A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_5CE6B5E9F3F574A7_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D92EAC9D4E19C479(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_5CE6B5E9F3F574A7_METHOD_3_D92EAC9D4E19C479_OFFSET))(this, a1, a2, a3);
	}
};
