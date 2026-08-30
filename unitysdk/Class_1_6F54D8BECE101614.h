#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerAssetLoadState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerFrameAsset; }

#define CLASS_1_6F54D8BECE101614_CLEAR_OFFSET UNITYSDK_OFFSET(0xCA6AEB0)
#define CLASS_1_6F54D8BECE101614_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xCA6AFF0)
#define CLASS_1_6F54D8BECE101614_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCA6AF90)
#define CLASS_1_6F54D8BECE101614_METHOD_1_BB37FD5051199D6F_OFFSET UNITYSDK_OFFSET(0xCA6B050)
#define CLASS_1_6F54D8BECE101614_METHOD_1_DE97DD71EA33C03F_OFFSET UNITYSDK_OFFSET(0xCA6AD00)
#define CLASS_1_6F54D8BECE101614_METHOD_1_E271DB75F084E674_OFFSET UNITYSDK_OFFSET(0xCA6B090)
#define CLASS_1_6F54D8BECE101614__CTOR_OFFSET UNITYSDK_OFFSET(0xCA6B0D0)

inline static constexpr unsigned int Class_1_6F54D8BECE101614_TypeDefinitionIndex = 76396;

class Class_1_6F54D8BECE101614 : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* DIHLCKJONDI; // 0x10
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset* BELMNBKDCOE; // 0x18
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
