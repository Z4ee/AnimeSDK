#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::GameCore { class GridFightGetGridEmptySlotParam; }
namespace RPG::GameCore { class TutorialDynamicParamBase; }
namespace System { class String; }

#define CLASS_1_AF57B48D254FB408_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xF944DF0)
#define CLASS_1_AF57B48D254FB408_METHOD_1_1A1668B3773D5580_OFFSET UNITYSDK_OFFSET(0xF9450F0)
#define CLASS_1_AF57B48D254FB408_METHOD_1_3AA365CF2E008127_OFFSET UNITYSDK_OFFSET(0xF945670)
#define CLASS_1_AF57B48D254FB408_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xF944D20)
#define CLASS_1_AF57B48D254FB408_METHOD_1_FB70379F33C9CED5_OFFSET UNITYSDK_OFFSET(0xF944ED0)
#define CLASS_1_AF57B48D254FB408_METHOD_1_FC0DADC66DED11D8_OFFSET UNITYSDK_OFFSET(0xF944FB0)
#define CLASS_1_AF57B48D254FB408__CTOR_OFFSET UNITYSDK_OFFSET(0xF945870)

inline static constexpr unsigned int Class_1_AF57B48D254FB408_TypeDefinitionIndex = 60303;

class Class_1_AF57B48D254FB408 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0xF423F; // 0x0
	::Class_0_16E4307DCC419505_722* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF57B48D254FB408__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_722* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_AF57B48D254FB408_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF57B48D254FB408_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::String* Method_1_FB70379F33C9CED5(::RPG::GameCore::TutorialDynamicParamBase* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + CLASS_1_AF57B48D254FB408_METHOD_1_FB70379F33C9CED5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_FC0DADC66DED11D8(::RPG::GameCore::GridFightGetGridEmptySlotParam* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightGetGridEmptySlotParam*))((::PBYTE)hIl2Cpp + CLASS_1_AF57B48D254FB408_METHOD_1_FC0DADC66DED11D8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_3AA365CF2E008127(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF57B48D254FB408_METHOD_1_3AA365CF2E008127_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_1A1668B3773D5580(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::GridFightRegion>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::GridFightRegion>*))((::PBYTE)hIl2Cpp + CLASS_1_AF57B48D254FB408_METHOD_1_1A1668B3773D5580_OFFSET))(this, a1, a2);
	}
};
