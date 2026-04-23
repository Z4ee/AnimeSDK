#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_305B57DBA79213AA_METHOD_2_39ABFA75105CA1F6_OFFSET UNITYSDK_OFFSET(0x17BDF6C0)
#define CLASS_2_305B57DBA79213AA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17BDF8A0)
#define CLASS_2_305B57DBA79213AA_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x17BDF910)
#define CLASS_2_305B57DBA79213AA_METHOD_2_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0x17BDF570)
#define CLASS_2_305B57DBA79213AA_METHOD_2_E32BCC2C6A959814_OFFSET UNITYSDK_OFFSET(0x17BDF510)
#define CLASS_2_305B57DBA79213AA__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDF400)

inline static constexpr unsigned int Class_2_305B57DBA79213AA_TypeDefinitionIndex = 34125;

class Class_2_305B57DBA79213AA : public ::Class_1_B55037134F9E6688
{
public:
	::System::Collections::Generic::List_1<::Class_1_B55037134F9E6688*>* Field_2_1; // 0x18
	::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* Field_2_0; // 0x20

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_305B57DBA79213AA__CTOR_OFFSET))(this, a1, a2);
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
