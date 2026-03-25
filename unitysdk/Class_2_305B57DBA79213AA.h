#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_305B57DBA79213AA_METHOD_2_39ABFA75105CA1F6_OFFSET UNITYSDK_OFFSET(0x165E8660)
#define CLASS_2_305B57DBA79213AA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x165E8840)
#define CLASS_2_305B57DBA79213AA_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x165E88B0)
#define CLASS_2_305B57DBA79213AA_METHOD_2_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0x165B7990)
#define CLASS_2_305B57DBA79213AA_METHOD_2_E32BCC2C6A959814_OFFSET UNITYSDK_OFFSET(0x165B7AE0)
#define CLASS_2_305B57DBA79213AA__CTOR_OFFSET UNITYSDK_OFFSET(0x165B7750)

inline static constexpr unsigned int Class_2_305B57DBA79213AA_TypeDefinitionIndex = 28450;

class Class_2_305B57DBA79213AA : public ::Class_1_B55037134F9E6688
{
public:
	::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B55037134F9E6688*>* Field_2_1; // 0x20

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_2_305B57DBA79213AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E32BCC2C6A959814()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_305B57DBA79213AA_METHOD_2_E32BCC2C6A959814_OFFSET))(this);
	}

	::System::Void Method_2_A66B981E1EA3E23D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_305B57DBA79213AA_METHOD_2_A66B981E1EA3E23D_OFFSET))(this);
	}

	::System::Void Method_2_39ABFA75105CA1F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_305B57DBA79213AA_METHOD_2_39ABFA75105CA1F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_305B57DBA79213AA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_305B57DBA79213AA_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
