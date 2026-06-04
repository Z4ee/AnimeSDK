#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_934E35F7460E7A49;
class Class_1_C47576BEFCFAD595;
class Class_2_F3F43255EC92B83B;
namespace RPG::GameCore { class ParkourTriggerEventRow; }

#define CLASS_1_401FD2135D0092DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136CEDA0)
#define CLASS_1_401FD2135D0092DD_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x136CF090)
#define CLASS_1_401FD2135D0092DD_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x136CEDF0)
#define CLASS_1_401FD2135D0092DD_METHOD_1_3121E74766A5CF4C_OFFSET UNITYSDK_OFFSET(0x136CEE50)
#define CLASS_1_401FD2135D0092DD_METHOD_1_B8398A405A85F406_OFFSET UNITYSDK_OFFSET(0x136CECF0)
#define CLASS_1_401FD2135D0092DD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x136CF050)
#define CLASS_1_401FD2135D0092DD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x136CF110)
#define CLASS_1_401FD2135D0092DD__CTOR_OFFSET UNITYSDK_OFFSET(0x136CF120)

inline static constexpr unsigned int Class_1_401FD2135D0092DD_TypeDefinitionIndex = 69277;

class Class_1_401FD2135D0092DD : public ::System::Object
{
public:
	::Class_1_934E35F7460E7A49* Field_1_0; // 0x10
	::Class_2_F3F43255EC92B83B* Field_1_1; // 0x18
	::Class_1_C47576BEFCFAD595* Field_1_2; // 0x20
	::RPG::GameCore::ParkourTriggerEventRow* Field_1_3; // 0x28
	::Class_2_F3F43255EC92B83B* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B8398A405A85F406(::Class_1_C47576BEFCFAD595* a1, ::Class_1_934E35F7460E7A49* a2, ::RPG::GameCore::ParkourTriggerEventRow* a3, ::Class_2_F3F43255EC92B83B* a4, ::Class_2_F3F43255EC92B83B* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*, ::Class_1_934E35F7460E7A49*, ::RPG::GameCore::ParkourTriggerEventRow*, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD_METHOD_1_B8398A405A85F406_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_3121E74766A5CF4C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD_METHOD_1_3121E74766A5CF4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401FD2135D0092DD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
