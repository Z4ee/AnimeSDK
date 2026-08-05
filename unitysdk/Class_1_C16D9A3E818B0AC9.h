#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityBaseRecord; }
namespace MoleMole { class ActivityQuestRedDotRecord; }
namespace System { class String; }

#define CLASS_1_C16D9A3E818B0AC9_METHOD_1_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x169CA060)
#define CLASS_1_C16D9A3E818B0AC9_METHOD_1_1DACF84F57F5A8C5_OFFSET UNITYSDK_OFFSET(0x169C9DC0)
#define CLASS_1_C16D9A3E818B0AC9_METHOD_1_3968EAAEA7CF13E3_OFFSET UNITYSDK_OFFSET(0x169CA4C0)
#define CLASS_1_C16D9A3E818B0AC9_METHOD_1_77736B4F04DC8A7B_OFFSET UNITYSDK_OFFSET(0x169C9AA0)
#define CLASS_1_C16D9A3E818B0AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x169C9A90)

inline static constexpr unsigned int Class_1_C16D9A3E818B0AC9_TypeDefinitionIndex = 62283;

class Class_1_C16D9A3E818B0AC9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16D9A3E818B0AC9__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ActivityQuestRedDotRecord* Method_1_77736B4F04DC8A7B(::System::UInt32 a1)
	{
		return ((::MoleMole::ActivityQuestRedDotRecord*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16D9A3E818B0AC9_METHOD_1_77736B4F04DC8A7B_OFFSET))(a1);
	}

	static ::System::Void Method_1_1DACF84F57F5A8C5(::System::String* a1, ::MoleMole::ActivityBaseRecord* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::ActivityBaseRecord*))((::PBYTE)hIl2Cpp + CLASS_1_C16D9A3E818B0AC9_METHOD_1_1DACF84F57F5A8C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11A5396029C33A57()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C16D9A3E818B0AC9_METHOD_1_11A5396029C33A57_OFFSET))();
	}

	static ::System::Void Method_1_3968EAAEA7CF13E3(::System::UInt32 a1, ::MoleMole::ActivityQuestRedDotRecord* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::ActivityQuestRedDotRecord*))((::PBYTE)hIl2Cpp + CLASS_1_C16D9A3E818B0AC9_METHOD_1_3968EAAEA7CF13E3_OFFSET))(a1, a2);
	}
};
