#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SimpleTalkTargetBehaviorInfo; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define CLASS_1_3239354810657E86_METHOD_1_1554A5A4DE9C7FA9_OFFSET UNITYSDK_OFFSET(0x10C00400)
#define CLASS_1_3239354810657E86_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10C00820)
#define CLASS_1_3239354810657E86_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10C00380)
#define CLASS_1_3239354810657E86_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x10C00AC0)
#define CLASS_1_3239354810657E86_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x10C007C0)
#define CLASS_1_3239354810657E86_METHOD_1_B33C2DF16EFB4917_OFFSET UNITYSDK_OFFSET(0x10C00280)
#define CLASS_1_3239354810657E86__CTOR_OFFSET UNITYSDK_OFFSET(0x10C00B80)

inline static constexpr unsigned int Class_1_3239354810657E86_TypeDefinitionIndex = 49221;

class Class_1_3239354810657E86 : public ::System::Object
{
public:
	::RPG::GameCore::SimpleTalkTargetBehavior* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_5; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3239354810657E86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B33C2DF16EFB4917(::RPG::Client::SimpleTalkTargetBehaviorInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleTalkTargetBehaviorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3239354810657E86_METHOD_1_B33C2DF16EFB4917_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3239354810657E86_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3239354810657E86_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3239354810657E86_METHOD_1_79E872D90798D236_OFFSET))(this, a1);
	}

	::System::Void Method_1_1554A5A4DE9C7FA9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3239354810657E86_METHOD_1_1554A5A4DE9C7FA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3239354810657E86_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
