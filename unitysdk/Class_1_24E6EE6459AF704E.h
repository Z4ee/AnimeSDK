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

#define CLASS_1_24E6EE6459AF704E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA87170)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_1D00B9E1ACC7B624_OFFSET UNITYSDK_OFFSET(0xFA886D0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_23C531252BDD8756_OFFSET UNITYSDK_OFFSET(0xFA873F0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_2F88622338866F1B_1_OFFSET UNITYSDK_OFFSET(0xFA865D0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_2F88622338866F1B_OFFSET UNITYSDK_OFFSET(0xFA86520)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_4D851AEC7175AA9E_OFFSET UNITYSDK_OFFSET(0xFA863D0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xFA88570)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_89C23253061CCD38_OFFSET UNITYSDK_OFFSET(0xFA868C0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xFA875B0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xFA86E60)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xFA881C0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_B400D03B634FA0AB_OFFSET UNITYSDK_OFFSET(0xFA86B00)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFA86E00)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_D5D9A5741BA11D98_1_OFFSET UNITYSDK_OFFSET(0xFA88750)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_D5D9A5741BA11D98_OFFSET UNITYSDK_OFFSET(0xFA88660)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_DA5A237653BEAE8C_OFFSET UNITYSDK_OFFSET(0xFA885C0)
#define CLASS_1_24E6EE6459AF704E_METHOD_1_DB9958167F1CFAE4_OFFSET UNITYSDK_OFFSET(0xFA86680)
#define CLASS_1_24E6EE6459AF704E__CTOR_OFFSET UNITYSDK_OFFSET(0xFA86BF0)

inline static constexpr unsigned int Class_1_24E6EE6459AF704E_TypeDefinitionIndex = 65825;

class Class_1_24E6EE6459AF704E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* CDHOJLJIFGC; // 0x10
	::RPG::GameCore::LoadingFuncConfigRow* IHGEMOBNFLB; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>* POOCEABNNJA; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>*>* KKOHGABGELH; // 0x28
	::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* PIBAENJHBJH; // 0x30
	::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* DNEMDCOPOJA; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* KGFECCHFLBL; // 0x40
	::System::UInt32 MLKDMLFAMJC; // 0x48
	::System::Boolean EBLPKIOGNCF; // 0x4C
	::System::Int32 AMNHGOGKBEP; // 0x50
	::RPG::GameCore::GameModeType GICHGNGMBGD; // 0x54
	::System::UInt32 CCCAHOHOGBE; // 0x58
	::System::UInt32 CLHLFGJGGCH; // 0x5C
	::System::UInt32 CGNMMODPMMN; // 0x60

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
