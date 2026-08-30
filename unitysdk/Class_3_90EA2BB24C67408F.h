#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_90EA2BB24C67408F_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x1C7630F0)
#define CLASS_3_90EA2BB24C67408F_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x1C7630B0)
#define CLASS_3_90EA2BB24C67408F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7630E0)

inline static constexpr unsigned int Class_3_90EA2BB24C67408F_TypeDefinitionIndex = 19656;

class Class_3_90EA2BB24C67408F : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x18
	::Il2CppArray<::System::UInt32>* LKPEDJLLAIO; // 0x20
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LADICPOACOE; // 0x30
	::System::UInt32 PHFMCACHFIJ; // 0x38
	::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x3C
	::System::Boolean ODPKFODJBBD; // 0x3E
	::System::Boolean LINNKILOOBC; // 0x3F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90EA2BB24C67408F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_90EA2BB24C67408F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_90EA2BB24C67408F*&))((::PBYTE)hIl2Cpp + CLASS_3_90EA2BB24C67408F_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_90EA2BB24C67408F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_90EA2BB24C67408F*))((::PBYTE)hIl2Cpp + CLASS_3_90EA2BB24C67408F_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};
