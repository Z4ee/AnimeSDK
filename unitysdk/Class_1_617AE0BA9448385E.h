#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_399;
class Class_0_16E4307DCC419505_724;
class Class_1_090AB0EAA610410E;
class Class_1_61097837E1D530F4;
class Class_1_8BCA4038194C3C3F;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_617AE0BA9448385E_METHOD_1_4C01F0F6AB29D77B_OFFSET UNITYSDK_OFFSET(0xA3DD9F0)
#define CLASS_1_617AE0BA9448385E_METHOD_1_5C75F7F130F00873_OFFSET UNITYSDK_OFFSET(0xA3DD980)
#define CLASS_1_617AE0BA9448385E_METHOD_1_9AA856A0DD248291_OFFSET UNITYSDK_OFFSET(0xA3BFF60)
#define CLASS_1_617AE0BA9448385E__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DD830)

inline static constexpr unsigned int Class_1_617AE0BA9448385E_TypeDefinitionIndex = 58790;

class Class_1_617AE0BA9448385E : public ::System::Object
{
public:
	::Class_1_8BCA4038194C3C3F* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_399* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_399* a1, ::Class_0_16E4307DCC419505_724* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_399*, ::Class_0_16E4307DCC419505_724*))((::PBYTE)hIl2Cpp + CLASS_1_617AE0BA9448385E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9AA856A0DD248291(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2, ::RPG::Client::AvatarUpgradePart a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_617AE0BA9448385E_METHOD_1_9AA856A0DD248291_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_090AB0EAA610410E* Method_1_5C75F7F130F00873(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_617AE0BA9448385E_METHOD_1_5C75F7F130F00873_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::RPG::AvatarSystem::Avatar*> Method_1_4C01F0F6AB29D77B(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::RPG::AvatarSystem::Avatar*>(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_617AE0BA9448385E_METHOD_1_4C01F0F6AB29D77B_OFFSET))(this, a1, a2);
	}
};
