#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_754;
namespace RPG::Client { class AnniversaryCollectionPanelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F7D89DBE4A922310_METHOD_1_0AF9E846CEF19603_OFFSET UNITYSDK_OFFSET(0xB68A2D0)
#define CLASS_1_F7D89DBE4A922310_METHOD_1_781C836FC2CC8E31_OFFSET UNITYSDK_OFFSET(0xB68A320)
#define CLASS_1_F7D89DBE4A922310__CTOR_OFFSET UNITYSDK_OFFSET(0xB68A520)

inline static constexpr unsigned int Class_1_F7D89DBE4A922310_TypeDefinitionIndex = 62477;

class Class_1_F7D89DBE4A922310 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnniversaryCollectionPanelEnum, ::Class_0_16E4307DCC419505_754*>* EEMPAAFDLAP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D89DBE4A922310__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_754* Method_1_0AF9E846CEF19603(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::Class_0_16E4307DCC419505_754*(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_1_F7D89DBE4A922310_METHOD_1_0AF9E846CEF19603_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_754* Method_1_781C836FC2CC8E31(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::Class_0_16E4307DCC419505_754*(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_1_F7D89DBE4A922310_METHOD_1_781C836FC2CC8E31_OFFSET))(this, a1);
	}
};
