#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }
namespace RPG::GameCore { class ElfPhaseItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3045BDDBFA69FA59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139EF3C0)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_44560CD97EB472CA_OFFSET UNITYSDK_OFFSET(0x139EF7F0)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_7CA4E7FE0D31FB59_OFFSET UNITYSDK_OFFSET(0x139EF410)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x139EF510)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_9EE0A43FAB4B146C_OFFSET UNITYSDK_OFFSET(0x139EF780)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_AAF4D502DBFCEAA7_OFFSET UNITYSDK_OFFSET(0x139EF5C0)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_BE37496E03846CA0_OFFSET UNITYSDK_OFFSET(0x139EF700)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x139EF1E0)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x139EF4B0)
#define CLASS_1_3045BDDBFA69FA59__CTOR_OFFSET UNITYSDK_OFFSET(0x139EF170)

inline static constexpr unsigned int Class_1_3045BDDBFA69FA59_TypeDefinitionIndex = 71778;

class Class_1_3045BDDBFA69FA59 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfPhaseItem*>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::ElfFeverSkillLevelConfig*>* Field_1_1; // 0x18
	::Class_2_80F8710F847F1248* Field_1_2; // 0x20
	::Class_3_F4528A5C0F861AF2* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::System::Boolean Field_1_6; // 0x32
	::System::Boolean Field_1_7; // 0x33

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_80F8710F847F1248* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_80F8710F847F1248*))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7CA4E7FE0D31FB59(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_7CA4E7FE0D31FB59_OFFSET))(this, a1);
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

	::System::UInt32 Method_1_44560CD97EB472CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_44560CD97EB472CA_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}
};
