#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_59;
namespace RPG::Client::PetMarble::Level { class PetMarbleLevelMode; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3FB926B180D0F896_METHOD_1_566B0645551A5AD0_OFFSET UNITYSDK_OFFSET(0x15A6A3C0)
#define CLASS_1_3FB926B180D0F896_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x15A6A460)
#define CLASS_1_3FB926B180D0F896_METHOD_1_81737AB76E4C3C6F_OFFSET UNITYSDK_OFFSET(0x15A6A2E0)
#define CLASS_1_3FB926B180D0F896_METHOD_1_D45D9DD521EE7C65_OFFSET UNITYSDK_OFFSET(0x15A6A340)
#define CLASS_1_3FB926B180D0F896_METHOD_1_F95758FD05BA7BDE_OFFSET UNITYSDK_OFFSET(0x15A6A110)
#define CLASS_1_3FB926B180D0F896__CTOR_OFFSET UNITYSDK_OFFSET(0x15A6A0C0)

inline static constexpr unsigned int Class_1_3FB926B180D0F896_TypeDefinitionIndex = 74743;

class Class_1_3FB926B180D0F896 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType>* OGDELONPBBD; // 0x10
	::Class_1_7AB88D713F5121B3_59* EGJNACIPNKF; // 0x18

	::System::Void _ctor(::Class_1_7AB88D713F5121B3_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_59*))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::PetMarble::Level::PetMarbleLevelMode* Method_1_F95758FD05BA7BDE(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
	{
		return ((::RPG::Client::PetMarble::Level::PetMarbleLevelMode*(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896_METHOD_1_F95758FD05BA7BDE_OFFSET))(this, a1);
	}

	::System::Void Method_1_566B0645551A5AD0(::System::Action_1<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType>*))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896_METHOD_1_566B0645551A5AD0_OFFSET))(this, a1);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::UInt32 Method_1_81737AB76E4C3C6F(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896_METHOD_1_81737AB76E4C3C6F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D45D9DD521EE7C65(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896_METHOD_1_D45D9DD521EE7C65_OFFSET))(this, a1);
	}
};
