#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_6CE70F4211D79CD5_8;
class Class_1_98133438BFCB56ED;
class Class_2_702836419F2A50E6;

#define CLASS_2_A8C0CE538A8C28FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9EED80)
#define CLASS_2_A8C0CE538A8C28FB_METHOD_2_136D2EFA97D9DA82_OFFSET UNITYSDK_OFFSET(0xA9EEAE0)
#define CLASS_2_A8C0CE538A8C28FB_METHOD_2_90FEE98CA74C7E26_OFFSET UNITYSDK_OFFSET(0xA9EEFC0)
#define CLASS_2_A8C0CE538A8C28FB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA9EEF50)
#define CLASS_2_A8C0CE538A8C28FB_METHOD_2_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xA9EEF00)
#define CLASS_2_A8C0CE538A8C28FB_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA9EEEB0)
#define CLASS_2_A8C0CE538A8C28FB__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EF090)

inline static constexpr unsigned int Class_2_A8C0CE538A8C28FB_TypeDefinitionIndex = 45240;

class Class_2_A8C0CE538A8C28FB : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_98133438BFCB56ED* Field_2_2; // 0x18
	::Class_1_6CE70F4211D79CD5_8* Field_2_1; // 0x20
	::Class_2_702836419F2A50E6* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8C0CE538A8C28FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_136D2EFA97D9DA82(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_A8C0CE538A8C28FB_METHOD_2_136D2EFA97D9DA82_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8C0CE538A8C28FB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_2_A8C0CE538A8C28FB_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9_1(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_2_A8C0CE538A8C28FB_METHOD_2_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8C0CE538A8C28FB_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_90FEE98CA74C7E26(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + CLASS_2_A8C0CE538A8C28FB_METHOD_2_90FEE98CA74C7E26_OFFSET))(this, a1, a2);
	}
};
