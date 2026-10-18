#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_C3F11EA7F494BEBC_METHOD_3_5CD8C9940BD71092_OFFSET UNITYSDK_OFFSET(0x1D11B780)
#define CLASS_3_C3F11EA7F494BEBC_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x1D11B730)
#define CLASS_3_C3F11EA7F494BEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11B770)

inline static constexpr unsigned int Class_3_C3F11EA7F494BEBC_TypeDefinitionIndex = 19914;

class Class_3_C3F11EA7F494BEBC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* ODNBACCMKHM; // 0x18
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LADICPOACOE; // 0x30
	::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x38
	::RPG::GameCore::FateRinCardPileType JKODDAJDOJO; // 0x3A
	::System::Boolean HNMFDELHIEK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3F11EA7F494BEBC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C3F11EA7F494BEBC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C3F11EA7F494BEBC*&))((::PBYTE)hIl2Cpp + CLASS_3_C3F11EA7F494BEBC_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5CD8C9940BD71092(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C3F11EA7F494BEBC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C3F11EA7F494BEBC*))((::PBYTE)hIl2Cpp + CLASS_3_C3F11EA7F494BEBC_METHOD_3_5CD8C9940BD71092_OFFSET))(a1, a2);
	}
};
