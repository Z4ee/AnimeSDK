#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseContactEventSystem_1.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_AEACE4A11643D23F__CTOR_OFFSET UNITYSDK_OFFSET(0x8AAA240)
#define CLASS_2_AEACE4A11643D23F__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x8AAA310)
#define CLASS_2_AEACE4A11643D23F__UPDATEPREVCONTACTPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x8AAA750)
#define CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x8AAABB0)
#define CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATEPREVCONTACTPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x8AAABC0)

inline static constexpr unsigned int Class_2_AEACE4A11643D23F_TypeDefinitionIndex = 62759;

class Class_2_AEACE4A11643D23F : public ::RPG::Client::LittleGame::FiveDim::BaseContactEventSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x20
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void _UpdatePrevContactPlayerEntity(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F__UPDATEPREVCONTACTPLAYERENTITY_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UpdatePrevContactPlayerEntity(::System::Int32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATEPREVCONTACTPLAYERENTITY_OFFSET))(this, P0);
	}
};
