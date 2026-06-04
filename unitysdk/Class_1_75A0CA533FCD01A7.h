#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyCalculator_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_75A0CA533FCD01A7_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0xAAB0990)
#define CLASS_1_75A0CA533FCD01A7_METHOD_1_91C3FC3C50F091F5_OFFSET UNITYSDK_OFFSET(0xAAB03C0)
#define CLASS_1_75A0CA533FCD01A7_METHOD_1_9F37E7CBD89B0F24_OFFSET UNITYSDK_OFFSET(0xAAB0550)
#define CLASS_1_75A0CA533FCD01A7_METHOD_1_A1C2D6698935310A_OFFSET UNITYSDK_OFFSET(0xAAB08F0)
#define CLASS_1_75A0CA533FCD01A7_METHOD_1_A32BC614239DEC12_OFFSET UNITYSDK_OFFSET(0xAAB07D0)
#define CLASS_1_75A0CA533FCD01A7_METHOD_1_A3F0D11AD82C6BF7_OFFSET UNITYSDK_OFFSET(0xAAB0200)
#define CLASS_1_75A0CA533FCD01A7_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xAAB06F0)
#define CLASS_1_75A0CA533FCD01A7_METHOD_1_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xAAB00D0)
#define CLASS_1_75A0CA533FCD01A7__CTOR_OFFSET UNITYSDK_OFFSET(0xAAB0070)

inline static constexpr unsigned int Class_1_75A0CA533FCD01A7_TypeDefinitionIndex = 69996;

class Class_1_75A0CA533FCD01A7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* Field_1_0; // 0x10
	::RPG::AvatarSystem::Property::PropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Field_1_1; // 0x18
	::RPG::AvatarSystem::Property::PropertyCalculator_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7__CTOR_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_A3F0D11AD82C6BF7(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_A3F0D11AD82C6BF7_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_91C3FC3C50F091F5(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_91C3FC3C50F091F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F37E7CBD89B0F24(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_9F37E7CBD89B0F24_OFFSET))(this, a1);
	}

	::System::Void Method_1_A32BC614239DEC12(::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>*))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_A32BC614239DEC12_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1C2D6698935310A(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_A1C2D6698935310A_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}
};
