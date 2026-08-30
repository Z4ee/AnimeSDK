#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_D2FCBF2EB44D5A54_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16FD4E90)
#define CLASS_2_D2FCBF2EB44D5A54_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16FD4E40)
#define CLASS_2_D2FCBF2EB44D5A54_GET_ISINVOLUME_OFFSET UNITYSDK_OFFSET(0x16FD4E20)
#define CLASS_2_D2FCBF2EB44D5A54_METHOD_2_3DAAB125F4EA4D7A_OFFSET UNITYSDK_OFFSET(0x16FD4DC0)
#define CLASS_2_D2FCBF2EB44D5A54_SET_ISINVOLUME_OFFSET UNITYSDK_OFFSET(0x16FD4E30)
#define CLASS_2_D2FCBF2EB44D5A54__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD4EE0)

inline static constexpr unsigned int Class_2_D2FCBF2EB44D5A54_TypeDefinitionIndex = 56854;

class Class_2_D2FCBF2EB44D5A54 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x18
	::System::Boolean _IsInVolume_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCBF2EB44D5A54__CTOR_OFFSET))(this);
	}

	::Class_2_D2FCBF2EB44D5A54* Method_2_3DAAB125F4EA4D7A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_2_D2FCBF2EB44D5A54*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D2FCBF2EB44D5A54_METHOD_2_3DAAB125F4EA4D7A_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsInVolume()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCBF2EB44D5A54_GET_ISINVOLUME_OFFSET))(this);
	}

	::System::Void set_IsInVolume(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D2FCBF2EB44D5A54_SET_ISINVOLUME_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCBF2EB44D5A54_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCBF2EB44D5A54_GETEVENTTYPE_OFFSET))(this);
	}
};
