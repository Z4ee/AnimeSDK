#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_934E35F7460E7A49;
class Class_1_C47576BEFCFAD595;
class Class_2_F3F43255EC92B83B;
namespace RPG::GameCore { class ParkourTriggerEventRow; }

#define CLASS_1_CBD84809434AB007_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1703E6F0)
#define CLASS_1_CBD84809434AB007_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1703E9E0)
#define CLASS_1_CBD84809434AB007_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1703E740)
#define CLASS_1_CBD84809434AB007_METHOD_1_3121E74766A5CF4C_OFFSET UNITYSDK_OFFSET(0x1703E7A0)
#define CLASS_1_CBD84809434AB007_METHOD_1_66D3A6B9C8A45B71_OFFSET UNITYSDK_OFFSET(0x1703E5E0)
#define CLASS_1_CBD84809434AB007_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1703E9A0)
#define CLASS_1_CBD84809434AB007_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1703EA60)
#define CLASS_1_CBD84809434AB007__CTOR_OFFSET UNITYSDK_OFFSET(0x1703EA70)

inline static constexpr unsigned int Class_1_CBD84809434AB007_TypeDefinitionIndex = 70798;

class Class_1_CBD84809434AB007 : public ::System::Object
{
public:
	::Class_2_F3F43255EC92B83B* Field_1_0; // 0x10
	::Class_1_C47576BEFCFAD595* Field_1_1; // 0x18
	::RPG::GameCore::ParkourTriggerEventRow* Field_1_2; // 0x20
	::Class_1_934E35F7460E7A49* Field_1_3; // 0x28
	::Class_2_F3F43255EC92B83B* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_66D3A6B9C8A45B71(::Class_1_C47576BEFCFAD595* a1, ::Class_1_934E35F7460E7A49* a2, ::RPG::GameCore::ParkourTriggerEventRow* a3, ::Class_2_F3F43255EC92B83B* a4, ::Class_2_F3F43255EC92B83B* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*, ::Class_1_934E35F7460E7A49*, ::RPG::GameCore::ParkourTriggerEventRow*, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007_METHOD_1_66D3A6B9C8A45B71_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_3121E74766A5CF4C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007_METHOD_1_3121E74766A5CF4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD84809434AB007_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
