#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBE4EC615642D335.h"

class Class_1_5E8D7F836DA392F9;
class Class_4_988DF67B513527B5;
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectDamageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E8C94366EB86B89E_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x16D48F20)
#define CLASS_2_E8C94366EB86B89E_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x16D47C20)
#define CLASS_2_E8C94366EB86B89E_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x16D47A20)
#define CLASS_2_E8C94366EB86B89E_METHOD_2_41100C20EC6FF8B4_OFFSET UNITYSDK_OFFSET(0x16D48CD0)
#define CLASS_2_E8C94366EB86B89E_METHOD_2_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x16D48D50)
#define CLASS_2_E8C94366EB86B89E_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x16D48F30)
#define CLASS_2_E8C94366EB86B89E__CTOR_OFFSET UNITYSDK_OFFSET(0x16D48EA0)

inline static constexpr unsigned int Class_2_E8C94366EB86B89E_TypeDefinitionIndex = 93014;

class Class_2_E8C94366EB86B89E : public ::Class_1_EBE4EC615642D335
{
public:
	::MoleMole::Arcade::CompanionProject::CpSkillEffectDamageData* Field_2_2; // 0x60
	::Class_4_988DF67B513527B5* Field_2_7; // 0x68
	::System::Collections::Generic::List_1<::Class_1_5E8D7F836DA392F9*>* Field_2_0; // 0x70
	::Class_1_5E8D7F836DA392F9* Field_2_1; // 0x78
	::System::UInt32 Field_2_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C94366EB86B89E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C94366EB86B89E_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_41100C20EC6FF8B4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8C94366EB86B89E_METHOD_2_41100C20EC6FF8B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8C94366EB86B89E_METHOD_2_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C94366EB86B89E_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E8C94366EB86B89E_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C94366EB86B89E_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}
};
