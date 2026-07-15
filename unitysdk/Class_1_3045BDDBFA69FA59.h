#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }
namespace RPG::GameCore { class ElfPhaseItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3045BDDBFA69FA59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AEC640)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x14AEC780)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_44560CD97EB472CA_OFFSET UNITYSDK_OFFSET(0x14AECB30)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_60C1459D67942397_OFFSET UNITYSDK_OFFSET(0x14AECAC0)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14AEC800)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_BE37496E03846CA0_OFFSET UNITYSDK_OFFSET(0x14AECA40)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_CF62297C914431A3_OFFSET UNITYSDK_OFFSET(0x14AEC690)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x14AEC460)
#define CLASS_1_3045BDDBFA69FA59_METHOD_1_FA1D6D2A00DD7F70_OFFSET UNITYSDK_OFFSET(0x14AEC8B0)
#define CLASS_1_3045BDDBFA69FA59__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEC3F0)

inline static constexpr unsigned int Class_1_3045BDDBFA69FA59_TypeDefinitionIndex = 73303;

class Class_1_3045BDDBFA69FA59 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ElfFeverSkillLevelConfig*>* Field_1_0; // 0x10
	::Class_3_F4528A5C0F861AF2* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfPhaseItem*>* Field_1_2; // 0x20
	::Class_2_80F8710F847F1248* Field_1_3; // 0x28
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

	::System::Void Method_1_CF62297C914431A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_CF62297C914431A3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_1_FA1D6D2A00DD7F70(::RPG::GameCore::ElfFeverSkillLevelConfig*& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ElfFeverSkillLevelConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_FA1D6D2A00DD7F70_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfFeverSkillLevelConfig* Method_1_BE37496E03846CA0()
	{
		return ((::RPG::GameCore::ElfFeverSkillLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_BE37496E03846CA0_OFFSET))(this);
	}

	::RPG::GameCore::ElfFeverSkillLevelConfig* Method_1_60C1459D67942397()
	{
		return ((::RPG::GameCore::ElfFeverSkillLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3045BDDBFA69FA59_METHOD_1_60C1459D67942397_OFFSET))(this);
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
