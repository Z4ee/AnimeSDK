#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityBaseRecord; }
namespace MoleMole { class ActivityQuestRedDotRecord; }
namespace System { class String; }

#define CLASS_1_78F4D0D2888970B7_METHOD_1_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0xE91ED70)
#define CLASS_1_78F4D0D2888970B7_METHOD_1_3968EAAEA7CF13E3_OFFSET UNITYSDK_OFFSET(0xE91E940)
#define CLASS_1_78F4D0D2888970B7_METHOD_1_77736B4F04DC8A7B_OFFSET UNITYSDK_OFFSET(0xE91E620)
#define CLASS_1_78F4D0D2888970B7_METHOD_1_CF54D909291C98E4_OFFSET UNITYSDK_OFFSET(0xE91EAD0)
#define CLASS_1_78F4D0D2888970B7__CTOR_OFFSET UNITYSDK_OFFSET(0xE91E610)

inline static constexpr unsigned int Class_1_78F4D0D2888970B7_TypeDefinitionIndex = 50220;

class Class_1_78F4D0D2888970B7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F4D0D2888970B7__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ActivityQuestRedDotRecord* Method_1_77736B4F04DC8A7B(::System::UInt32 a1)
	{
		return ((::MoleMole::ActivityQuestRedDotRecord*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_78F4D0D2888970B7_METHOD_1_77736B4F04DC8A7B_OFFSET))(a1);
	}

	static ::System::Void Method_1_3968EAAEA7CF13E3(::System::UInt32 a1, ::MoleMole::ActivityQuestRedDotRecord* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::ActivityQuestRedDotRecord*))((::PBYTE)hIl2Cpp + CLASS_1_78F4D0D2888970B7_METHOD_1_3968EAAEA7CF13E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF54D909291C98E4(::System::String* a1, ::MoleMole::ActivityBaseRecord* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::ActivityBaseRecord*))((::PBYTE)hIl2Cpp + CLASS_1_78F4D0D2888970B7_METHOD_1_CF54D909291C98E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11A5396029C33A57()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78F4D0D2888970B7_METHOD_1_11A5396029C33A57_OFFSET))();
	}
};
