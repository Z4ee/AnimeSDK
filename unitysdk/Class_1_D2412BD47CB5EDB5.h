#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }

#define CLASS_1_D2412BD47CB5EDB5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB89A40)
#define CLASS_1_D2412BD47CB5EDB5__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CB89B30)
#define CLASS_1_D2412BD47CB5EDB5__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CB89CD0)
#define CLASS_1_D2412BD47CB5EDB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB899F0)

inline static constexpr unsigned int Class_1_D2412BD47CB5EDB5_TypeDefinitionIndex = 41976;

class Class_1_D2412BD47CB5EDB5 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_IEPCJGJDIDM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2412BD47CB5EDB5_TypeDefinitionIndex)->GetStaticField(0x10D70);
	}
	::System::Int32 NJNLHLCLOJA; // 0x10
	::System::UInt32 BPHEJFJENJK; // 0x14
	::System::Nullable_1<::System::Int32> NJBJDEBPCLN; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x20
	::RPG::GameCore::ChimeraDuelTeamType JCDIEKGKCPP; // 0x24
	::System::Int32 MGHNBDDCEKK; // 0x28
	::System::Int32 KEINOBNBHDO; // 0x2C
	::System::UInt32 PJNNPOKJEFD; // 0x30
	::System::Nullable_1<::System::Int32> FNIAIOLFNPC; // 0x34

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_2_B66C1067C0468FBB* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::ChimeraDuelTeamType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_2_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::GameCore::ChimeraDuelTeamType a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
