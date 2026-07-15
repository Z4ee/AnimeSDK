#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveEquipPropertyRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_671780733A8844ED_GET_IDLELIVEPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x161FB3D0)
#define CLASS_1_671780733A8844ED_METHOD_1_1187FD85F8BDC1D1_OFFSET UNITYSDK_OFFSET(0x161FC680)
#define CLASS_1_671780733A8844ED_METHOD_1_59CF809F3C3FAAF4_OFFSET UNITYSDK_OFFSET(0x161FCB90)
#define CLASS_1_671780733A8844ED_METHOD_1_A939D99766724EBC_OFFSET UNITYSDK_OFFSET(0x161FB370)
#define CLASS_1_671780733A8844ED_METHOD_1_B6585442ABC3B61F_OFFSET UNITYSDK_OFFSET(0x161FBC60)
#define CLASS_1_671780733A8844ED_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x161FB330)
#define CLASS_1_671780733A8844ED_METHOD_1_DD1F80BD94ED96B3_OFFSET UNITYSDK_OFFSET(0x161FB3F0)
#define CLASS_1_671780733A8844ED_SET_IDLELIVEPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x161FB3E0)
#define CLASS_1_671780733A8844ED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161FB910)
#define CLASS_1_671780733A8844ED__CTOR_OFFSET UNITYSDK_OFFSET(0x161FB510)

inline static constexpr unsigned int Class_1_671780733A8844ED_TypeDefinitionIndex = 71723;

class Class_1_671780733A8844ED : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_1; // 0x18
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_2; // 0x30
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_3; // 0x48
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_4; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Field_1_5; // 0x78
	::RPG::GameCore::FixPoint Field_1_6; // 0x80
	::RPG::Client::TextID Field_1_7; // 0x88
	::System::Boolean Field_1_8; // 0x98
	::RPG::GameCore::IdleLiveAvatarPropertyType _IdleLivePropertyType_k__BackingField; // 0x9C

	::System::Void _ctor(::RPG::GameCore::IdleLiveEquipPropertyRow* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveEquipPropertyRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::IdleLiveAvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_A939D99766724EBC()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_METHOD_1_A939D99766724EBC_OFFSET))(this);
	}

	::RPG::GameCore::IdleLiveAvatarPropertyType get_IdleLivePropertyType()
	{
		return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_GET_IDLELIVEPROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_IdleLivePropertyType(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_SET_IDLELIVEPROPERTYTYPE_OFFSET))(this, a1);
	}

	static ::Class_1_671780733A8844ED* Method_1_DD1F80BD94ED96B3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_671780733A8844ED*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_METHOD_1_DD1F80BD94ED96B3_OFFSET))(a1, a2);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_B6585442ABC3B61F(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_METHOD_1_B6585442ABC3B61F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_1187FD85F8BDC1D1(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_METHOD_1_1187FD85F8BDC1D1_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_59CF809F3C3FAAF4()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_671780733A8844ED_METHOD_1_59CF809F3C3FAAF4_OFFSET))(this);
	}
};
