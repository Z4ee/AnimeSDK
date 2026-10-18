#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"
#include "unitysdk/RPG/GameCore/MechCraftTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D38682F9CE867201_METHOD_1_01AB4D545391BC73_OFFSET UNITYSDK_OFFSET(0x1DC10E90)
#define CLASS_1_D38682F9CE867201__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1B510)

inline static constexpr unsigned int Class_1_D38682F9CE867201_TypeDefinitionIndex = 11986;

class Class_1_D38682F9CE867201 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::MechCraftTraitType>* KEDCLDIKAGC; // 0x10
	::Il2CppArray<::System::UInt32>* PCEHNLCLKGH; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_96F6662CA3713095, ::System::UInt32>* IBNALLEGIFH; // 0x20
	::Il2CppArray<::System::UInt32>* ENGGEFINDPH; // 0x28
	::System::Boolean ADEJDFIJOKF; // 0x30
	::System::UInt32 BFANELAELAK; // 0x34
	::System::UInt32 PHFMCACHFIJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D38682F9CE867201__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_01AB4D545391BC73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_D38682F9CE867201*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_D38682F9CE867201*&))((::PBYTE)hIl2Cpp + CLASS_1_D38682F9CE867201_METHOD_1_01AB4D545391BC73_OFFSET))(a1, a2);
	}
};
