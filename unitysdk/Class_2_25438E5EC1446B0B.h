#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8ADAAB4A2E4AC573.h"
#include "unitysdk/Class_2_25438E5EC1446B0B_Struct_2_5DD28D59F1A736CE.h"

namespace RPG::GameCore { class SetCharacterPartsVisibility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_25438E5EC1446B0B_METHOD_2_D28A6F88626132CB_OFFSET UNITYSDK_OFFSET(0xB26A700)
#define CLASS_2_25438E5EC1446B0B_METHOD_2_FFBB18586A42CB10_OFFSET UNITYSDK_OFFSET(0xB26A580)
#define CLASS_2_25438E5EC1446B0B_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB26B570)
#define CLASS_2_25438E5EC1446B0B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB26B790)
#define CLASS_2_25438E5EC1446B0B__CTOR_OFFSET UNITYSDK_OFFSET(0xB26B710)

inline static constexpr unsigned int Class_2_25438E5EC1446B0B_TypeDefinitionIndex = 57201;

class Class_2_25438E5EC1446B0B : public ::Class_1_8ADAAB4A2E4AC573
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_INDALFDGAGD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_25438E5EC1446B0B_TypeDefinitionIndex)->GetStaticField(0x20B70);
	}
	static ::System::Int32* StaticGet_FOEMGBMLAJJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_25438E5EC1446B0B_TypeDefinitionIndex)->GetStaticField(0x74C0);
	}
	static ::System::Int32* StaticGet_FCLPNFEHLFB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_25438E5EC1446B0B_TypeDefinitionIndex)->GetStaticField(0x74C4);
	}
	static ::System::Int32* StaticGet_JHIMOHCAMCK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_25438E5EC1446B0B_TypeDefinitionIndex)->GetStaticField(0x74C8);
	}
	// static const ::System::Int32 OHCMDJEPCIN = 0x8; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_25438E5EC1446B0B_Struct_2_5DD28D59F1A736CE>* DAGOAIPECKG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25438E5EC1446B0B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_25438E5EC1446B0B__CCTOR_OFFSET))();
	}

	::System::Void Method_2_FFBB18586A42CB10(::RPG::GameCore::SetCharacterPartsVisibility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + CLASS_2_25438E5EC1446B0B_METHOD_2_FFBB18586A42CB10_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25438E5EC1446B0B_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void Method_2_D28A6F88626132CB(::Class_2_25438E5EC1446B0B_Struct_2_5DD28D59F1A736CE a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_25438E5EC1446B0B_Struct_2_5DD28D59F1A736CE))((::PBYTE)hIl2Cpp + CLASS_2_25438E5EC1446B0B_METHOD_2_D28A6F88626132CB_OFFSET))(this, a1);
	}
};
