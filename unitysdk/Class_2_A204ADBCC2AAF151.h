#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseEntityVisibleSystem_1.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }

#define CLASS_2_A204ADBCC2AAF151_METHOD_2_1BC94019AF2AB14C_OFFSET UNITYSDK_OFFSET(0xB2C48B0)
#define CLASS_2_A204ADBCC2AAF151__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C43B0)
#define CLASS_2_A204ADBCC2AAF151__GETCUSTOMVISIBLESOURCE_OFFSET UNITYSDK_OFFSET(0xB2C4860)
#define CLASS_2_A204ADBCC2AAF151__GETDELTATIME_OFFSET UNITYSDK_OFFSET(0xB2C45F0)
#define CLASS_2_A204ADBCC2AAF151__GETENTITYVISIBLECOMPONENTREASON_OFFSET UNITYSDK_OFFSET(0xB2C4810)
#define CLASS_2_A204ADBCC2AAF151__GETLEVELVARINVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0xB2C47C0)
#define CLASS_2_A204ADBCC2AAF151__ONDITHERZEROVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xB2C4650)
#define CLASS_2_A204ADBCC2AAF151__ONTEARDOWN_OFFSET UNITYSDK_OFFSET(0xB2C46B0)

inline static constexpr unsigned int Class_2_A204ADBCC2AAF151_TypeDefinitionIndex = 76921;

class Class_2_A204ADBCC2AAF151 : public ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x68
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x70

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single _GetDeltaTime(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151__GETDELTATIME_OFFSET))(this, a1);
	}

	::System::Void _OnDitherZeroValueChange(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151__ONDITHERZEROVALUECHANGE_OFFSET))(this, a1);
	}

	::System::Void _OnTearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151__ONTEARDOWN_OFFSET))(this);
	}

	::System::UInt32 _GetLevelVarInvisibleReason()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151__GETLEVELVARINVISIBLEREASON_OFFSET))(this);
	}

	::System::UInt32 _GetEntityVisibleComponentReason()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151__GETENTITYVISIBLECOMPONENTREASON_OFFSET))(this);
	}

	::System::UInt32 _GetCustomVisibleSource()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151__GETCUSTOMVISIBLESOURCE_OFFSET))(this);
	}

	::System::Void Method_2_1BC94019AF2AB14C(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A204ADBCC2AAF151_METHOD_2_1BC94019AF2AB14C_OFFSET))(this, a1, a2);
	}
};
