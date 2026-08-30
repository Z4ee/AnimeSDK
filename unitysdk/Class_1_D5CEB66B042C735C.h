#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8676A5D6BF139078;
namespace RPG::Client { class MonoInflatableFighter; }

#define CLASS_1_D5CEB66B042C735C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18548630)
#define CLASS_1_D5CEB66B042C735C_GET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0x18548A20)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x185488A0)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x18548950)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18548840)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_30835EE0872BED04_OFFSET UNITYSDK_OFFSET(0x18548680)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18548900)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x185485D0)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x18548A10)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x18548A00)
#define CLASS_1_D5CEB66B042C735C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185489C0)
#define CLASS_1_D5CEB66B042C735C_SET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0x18548A30)
#define CLASS_1_D5CEB66B042C735C__CTOR_OFFSET UNITYSDK_OFFSET(0x185485C0)

inline static constexpr unsigned int Class_1_D5CEB66B042C735C_TypeDefinitionIndex = 68649;

class Class_1_D5CEB66B042C735C : public ::System::Object
{
public:
	::Class_1_8676A5D6BF139078* CPIIOIPAAKK; // 0x10
	::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
	::System::Single BNNFCGBBNNC; // 0x20
	::System::Single IADFGIDGBGH; // 0x24
	::System::Single LLLIALEGIJD; // 0x28
	::System::Boolean _IsFrozen_k__BackingField; // 0x2C
	::System::Boolean CKAFABAMHKD; // 0x2D
	::System::Boolean FDDFHBKGJDE; // 0x2E

	::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1, ::Class_1_8676A5D6BF139078* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::Class_1_8676A5D6BF139078*))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_30835EE0872BED04(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_30835EE0872BED04_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Boolean get_IsFrozen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_GET_ISFROZEN_OFFSET))(this);
	}

	::System::Void set_IsFrozen(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5CEB66B042C735C_SET_ISFROZEN_OFFSET))(this, a1);
	}
};
