#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System { class String; }

#define CLASS_1_49C9FFA56D320EFB_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12346A40)
#define CLASS_1_49C9FFA56D320EFB_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x12346A90)
#define CLASS_1_49C9FFA56D320EFB_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x12346A70)
#define CLASS_1_49C9FFA56D320EFB__CTOR_OFFSET UNITYSDK_OFFSET(0x12346BC0)

inline static constexpr unsigned int Class_1_49C9FFA56D320EFB_TypeDefinitionIndex = 68688;

class Class_1_49C9FFA56D320EFB : public ::System::Object
{
public:
	::RPG::GameCore::RelicSetConfigRow* Field_1_0; // 0x10
	::RPG::Client::ItemData* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::RelicSetConfigRow* a1, ::RPG::Client::ItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicSetConfigRow*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	static ::Class_1_49C9FFA56D320EFB* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_49C9FFA56D320EFB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB_METHOD_1_C6843992E5B2B49B_OFFSET))(a1);
	}
};
