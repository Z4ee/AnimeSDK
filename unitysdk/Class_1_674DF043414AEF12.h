#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
class Class_3_7E6E8DD3EAC12A67_10;
namespace MoleMole { class UIActivityGotoMissionRowWidgetController; }

#define CLASS_1_674DF043414AEF12_METHOD_1_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x15AE7E00)
#define CLASS_1_674DF043414AEF12_METHOD_1_7122B5323DB4899E_OFFSET UNITYSDK_OFFSET(0x15AE7DB0)
#define CLASS_1_674DF043414AEF12_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x15AE8140)
#define CLASS_1_674DF043414AEF12__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE8130)

inline static constexpr unsigned int Class_1_674DF043414AEF12_TypeDefinitionIndex = 54451;

class Class_1_674DF043414AEF12 : public ::System::Object
{
public:
	::Class_1_D375C91CCE5D3999* Field_1_0; // 0x10
	::MoleMole::UIActivityGotoMissionRowWidgetController* Field_1_2; // 0x18
	::Class_3_7E6E8DD3EAC12A67_10* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674DF043414AEF12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7122B5323DB4899E(::MoleMole::UIActivityGotoMissionRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityGotoMissionRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_674DF043414AEF12_METHOD_1_7122B5323DB4899E_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674DF043414AEF12_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_1_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674DF043414AEF12_METHOD_1_1659BCB6D1A9FC34_OFFSET))(this);
	}
};
