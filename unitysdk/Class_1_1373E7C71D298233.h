#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_178;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_1373E7C71D298233_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D5D70)
#define CLASS_1_1373E7C71D298233_METHOD_1_0D7D95DDBF071E2B_OFFSET UNITYSDK_OFFSET(0xA7D5E70)
#define CLASS_1_1373E7C71D298233_METHOD_1_0E72B12FCD9FB8F6_OFFSET UNITYSDK_OFFSET(0xA7D5E10)
#define CLASS_1_1373E7C71D298233_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA7D5CE0)
#define CLASS_1_1373E7C71D298233_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0xA7D5FC0)
#define CLASS_1_1373E7C71D298233_METHOD_1_5C7DABD97F895860_OFFSET UNITYSDK_OFFSET(0xA7D5EE0)
#define CLASS_1_1373E7C71D298233_METHOD_1_725EC7A0DC1D6958_OFFSET UNITYSDK_OFFSET(0xA7D5C40)
#define CLASS_1_1373E7C71D298233_METHOD_1_85BCB649B4B59640_OFFSET UNITYSDK_OFFSET(0xA7D5F60)
#define CLASS_1_1373E7C71D298233_METHOD_1_96AF9D7B0CEA8921_OFFSET UNITYSDK_OFFSET(0xA7D6040)
#define CLASS_1_1373E7C71D298233_METHOD_1_BEF9F4753711E381_OFFSET UNITYSDK_OFFSET(0xA7D6240)
#define CLASS_1_1373E7C71D298233_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA7D6000)
#define CLASS_1_1373E7C71D298233__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D66D0)

inline static constexpr unsigned int Class_1_1373E7C71D298233_TypeDefinitionIndex = 71106;

class Class_1_1373E7C71D298233 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_178* Field_1_3; // 0x28
	::Class_2_E2910CE9CBBA0DE5* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_725EC7A0DC1D6958(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_725EC7A0DC1D6958_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_0E72B12FCD9FB8F6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_0E72B12FCD9FB8F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7D95DDBF071E2B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_0D7D95DDBF071E2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C7DABD97F895860(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_5C7DABD97F895860_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_85BCB649B4B59640(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_85BCB649B4B59640_OFFSET))(this, a1);
	}

	::Class_2_E2910CE9CBBA0DE5* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_457717A0CF438A7C_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_96AF9D7B0CEA8921(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_178* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_178*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_96AF9D7B0CEA8921_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BEF9F4753711E381(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1373E7C71D298233_METHOD_1_BEF9F4753711E381_OFFSET))(a1, a2);
	}
};
