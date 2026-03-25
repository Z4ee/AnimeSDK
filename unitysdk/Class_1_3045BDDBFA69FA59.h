#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }
namespace RPG::GameCore { class ElfPhaseItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3045BDDBFA69FA59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11104E00)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x11104F50)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_9477F20452094A8F_OFFSET UNITYSDK_OFFSET(0x11105240)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_9EE0A43FAB4B146C_OFFSET UNITYSDK_OFFSET(0x111051D0)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_AAF4D502DBFCEAA7_OFFSET UNITYSDK_OFFSET(0x11105000)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_BE37496E03846CA0_OFFSET UNITYSDK_OFFSET(0x11105150)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_C4A70BBF42E9D5F0_OFFSET UNITYSDK_OFFSET(0x11104E50)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x11104C10)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x11104EF0)
#define CLASS_1_3045BDDBFA69FA59__CTOR_OFFSET UNITYSDK_OFFSET(0x11104BA0)

inline static constexpr unsigned int Class_1_3045BDDBFA69FA59_TypeDefinitionIndex = 62916;

class Class_1_3045BDDBFA69FA59 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ElfFeverSkillLevelConfig*>* Field_1_1; // 0x10
	::Class_3_F4528A5C0F861AF2* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfPhaseItem*>* Field_1_0; // 0x20
	::Class_2_43D1AA62A6D00FFF* Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Boolean Field_1_7; // 0x32
	::System::Boolean Field_1_2; // 0x33

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_43D1AA62A6D00FFF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_43D1AA62A6D00FFF*))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C4A70BBF42E9D5F0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_C4A70BBF42E9D5F0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_1_AAF4D502DBFCEAA7(::RPG::GameCore::ElfFeverSkillLevelConfig*& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ElfFeverSkillLevelConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_AAF4D502DBFCEAA7_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfFeverSkillLevelConfig* Method_1_BE37496E03846CA0()
	{
		return ((::RPG::GameCore::ElfFeverSkillLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_BE37496E03846CA0_OFFSET))(this);
	}

	::RPG::GameCore::ElfFeverSkillLevelConfig* Method_1_9EE0A43FAB4B146C()
	{
		return ((::RPG::GameCore::ElfFeverSkillLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_9EE0A43FAB4B146C_OFFSET))(this);
	}

	::System::UInt32 Method_1_9477F20452094A8F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_9477F20452094A8F_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}
};
