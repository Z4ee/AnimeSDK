#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"

class Class_1_0F724F8EDC601A3C;
namespace RPG::Client { template <typename T> class LoadingTipsRandomPool_1; }
namespace RPG::GameCore { class LoadingDescRow; }
namespace RPG::GameCore { class LoadingFuncConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24E6EE6459AF704E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4F4A10)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_1D00B9E1ACC7B624_OFFSET UNITYSDK_OFFSET(0xE4F5F80)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_23C531252BDD8756_OFFSET UNITYSDK_OFFSET(0xE4F4CA0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_2F88622338866F1B_1_OFFSET UNITYSDK_OFFSET(0xE4F3E60)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_2F88622338866F1B_OFFSET UNITYSDK_OFFSET(0xE4F3DB0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_4D851AEC7175AA9E_OFFSET UNITYSDK_OFFSET(0xE4F3C60)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xE4F5E20)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_89C23253061CCD38_OFFSET UNITYSDK_OFFSET(0xE4F4150)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xE4F4E60)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xE4F4700)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xE4F5A70)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_B400D03B634FA0AB_OFFSET UNITYSDK_OFFSET(0xE4F4390)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4F46A0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_D5D9A5741BA11D98_1_OFFSET UNITYSDK_OFFSET(0xE4F6000)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_D5D9A5741BA11D98_OFFSET UNITYSDK_OFFSET(0xE4F5F10)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_DA5A237653BEAE8C_OFFSET UNITYSDK_OFFSET(0xE4F5E70)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_DB9958167F1CFAE4_OFFSET UNITYSDK_OFFSET(0xE4F3F10)
#define CLASS_1_24E6EE6459AF704E__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F4480)

inline static constexpr unsigned int Class_1_24E6EE6459AF704E_TypeDefinitionIndex = 62840;

class Class_1_24E6EE6459AF704E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>* Field_1_1; // 0x18
	::RPG::GameCore::LoadingFuncConfigRow* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* Field_1_4; // 0x30
	::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* Field_1_5; // 0x38
	::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::System::UInt32 Field_1_9; // 0x50
	::System::UInt32 Field_1_10; // 0x54
	::System::Boolean Field_1_11; // 0x58
	::RPG::GameCore::GameModeType Field_1_12; // 0x5C
	::System::UInt32 Field_1_13; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4D851AEC7175AA9E(::Class_1_0F724F8EDC601A3C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0F724F8EDC601A3C*))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_4D851AEC7175AA9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2F88622338866F1B(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_2F88622338866F1B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2F88622338866F1B_1(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_2F88622338866F1B_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DB9958167F1CFAE4(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_DB9958167F1CFAE4_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_89C23253061CCD38()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_89C23253061CCD38_OFFSET))(this);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_B400D03B634FA0AB(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_B400D03B634FA0AB_OFFSET))(a1);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_23C531252BDD8756(::RPG::GameCore::LoadingFuncConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LoadingFuncConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_23C531252BDD8756_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::LoadingDescRow* Method_1_DA5A237653BEAE8C()
	{
		return ((::RPG::GameCore::LoadingDescRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_DA5A237653BEAE8C_OFFSET))(this);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Boolean Method_1_D5D9A5741BA11D98(::RPG::GameCore::LoadingDescRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_D5D9A5741BA11D98_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D00B9E1ACC7B624(::RPG::GameCore::LoadingDescRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_1D00B9E1ACC7B624_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D5D9A5741BA11D98_1(::RPG::GameCore::LoadingDescRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + CLASS_1_24E6EE6459AF704E_METHOD_1_D5D9A5741BA11D98_1_OFFSET))(this, a1);
	}
};
