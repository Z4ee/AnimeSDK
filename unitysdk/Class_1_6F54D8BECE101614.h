#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerAssetLoadState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerFrameAsset; }

#define CLASS_1_6F54D8BECE101614_CLEAR_OFFSET UNITYSDK_OFFSET(0x177F8850)
#define CLASS_1_6F54D8BECE101614_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x177F8990)
#define CLASS_1_6F54D8BECE101614_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x177F8930)
#define CLASS_1_6F54D8BECE101614_METHOD_1_BB37FD5051199D6F_OFFSET UNITYSDK_OFFSET(0x177F89F0)
#define CLASS_1_6F54D8BECE101614_METHOD_1_DE97DD71EA33C03F_OFFSET UNITYSDK_OFFSET(0x177F86A0)
#define CLASS_1_6F54D8BECE101614_METHOD_1_E271DB75F084E674_OFFSET UNITYSDK_OFFSET(0x177F8A30)
#define CLASS_1_6F54D8BECE101614__CTOR_OFFSET UNITYSDK_OFFSET(0x177F8A70)

inline static constexpr unsigned int Class_1_6F54D8BECE101614_TypeDefinitionIndex = 76395;

class Class_1_6F54D8BECE101614 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset* BELMNBKDCOE; // 0x10
	::RPG::Client::IAssetOperation* DIHLCKJONDI; // 0x18
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState EGGHHGIEIHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F54D8BECE101614__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DE97DD71EA33C03F(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_6F54D8BECE101614_METHOD_1_DE97DD71EA33C03F_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F54D8BECE101614_CLEAR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset* Method_1_BB37FD5051199D6F()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F54D8BECE101614_METHOD_1_BB37FD5051199D6F_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F54D8BECE101614_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState Method_1_E271DB75F084E674()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F54D8BECE101614_METHOD_1_E271DB75F084E674_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F54D8BECE101614_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}
};
