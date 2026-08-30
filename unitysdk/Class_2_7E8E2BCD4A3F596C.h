#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2780D0F4B46A950.h"
#include "unitysdk/RPG/Client/Prop/PinballPlateState.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"

namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define CLASS_2_7E8E2BCD4A3F596C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0EB710)
#define CLASS_2_7E8E2BCD4A3F596C_GET_CURRENTPINBALLPLATESTATE_OFFSET UNITYSDK_OFFSET(0xC0EC910)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_2FAF1E74F270BD68_OFFSET UNITYSDK_OFFSET(0xC0EBFE0)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC0EC7C0)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_4FD017DCCCC93694_OFFSET UNITYSDK_OFFSET(0xC0EB7D0)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_59D3B9EE9A2BDE85_1_OFFSET UNITYSDK_OFFSET(0xC0EC770)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_59D3B9EE9A2BDE85_OFFSET UNITYSDK_OFFSET(0xC0EC720)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0xC0EC690)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_65AEB11D284FE6A1_OFFSET UNITYSDK_OFFSET(0xC0EBD10)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_6D314C19D98EDA90_OFFSET UNITYSDK_OFFSET(0xC0EC8B0)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_8618CA7CE20C80DB_OFFSET UNITYSDK_OFFSET(0xC0EBD60)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xC0EC850)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_AE293EACF60D282A_OFFSET UNITYSDK_OFFSET(0xC0EBF90)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_B9ABA76AA5857AFB_OFFSET UNITYSDK_OFFSET(0xC0EB760)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC0EC810)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_D7189F5A6E4F45D2_1_OFFSET UNITYSDK_OFFSET(0xC0EC4C0)
#define CLASS_2_7E8E2BCD4A3F596C_METHOD_2_D7189F5A6E4F45D2_OFFSET UNITYSDK_OFFSET(0xC0EC2F0)
#define CLASS_2_7E8E2BCD4A3F596C_SET_CURRENTPINBALLPLATESTATE_OFFSET UNITYSDK_OFFSET(0xC0EC920)
#define CLASS_2_7E8E2BCD4A3F596C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0EB6C0)

inline static constexpr unsigned int Class_2_7E8E2BCD4A3F596C_TypeDefinitionIndex = 78292;

class Class_2_7E8E2BCD4A3F596C : public ::Class_1_A2780D0F4B46A950
{
public:
	::RPG::Client::Prop::PinballPlateState _CurrentPinballPlateState_k__BackingField; // 0x98

	::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B9ABA76AA5857AFB(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_B9ABA76AA5857AFB_OFFSET))(this, a1);
	}

	::RPG::Client::Prop::PinballPuzzleItemType Method_2_65AEB11D284FE6A1()
	{
		return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_65AEB11D284FE6A1_OFFSET))(this);
	}

	::System::Void Method_2_8618CA7CE20C80DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_8618CA7CE20C80DB_OFFSET))(this);
	}

	::System::Void Method_2_D7189F5A6E4F45D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_D7189F5A6E4F45D2_OFFSET))(this);
	}

	::System::Void Method_2_D7189F5A6E4F45D2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_D7189F5A6E4F45D2_1_OFFSET))(this);
	}

	::System::Void Method_2_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_5D6CD31BA2372F92_OFFSET))(this);
	}

	::System::Void Method_2_59D3B9EE9A2BDE85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_59D3B9EE9A2BDE85_OFFSET))(this);
	}

	::System::Void Method_2_59D3B9EE9A2BDE85_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_59D3B9EE9A2BDE85_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_2_AE293EACF60D282A(::RPG::Client::Prop::PinballPlateState a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_AE293EACF60D282A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FAF1E74F270BD68(::RPG::Client::Prop::PinballPlateState a1, ::RPG::Client::Prop::PinballPlateState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_2FAF1E74F270BD68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4FD017DCCCC93694(::System::Boolean a1, ::RPG::Client::Prop::PinballPlateState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_4FD017DCCCC93694_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6D314C19D98EDA90(::RPG::Client::Prop::PinballPlateState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_METHOD_2_6D314C19D98EDA90_OFFSET))(this, a1);
	}

	::RPG::Client::Prop::PinballPlateState get_CurrentPinballPlateState()
	{
		return ((::RPG::Client::Prop::PinballPlateState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_GET_CURRENTPINBALLPLATESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentPinballPlateState(::RPG::Client::Prop::PinballPlateState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + CLASS_2_7E8E2BCD4A3F596C_SET_CURRENTPINBALLPLATESTATE_OFFSET))(this, a1);
	}
};
