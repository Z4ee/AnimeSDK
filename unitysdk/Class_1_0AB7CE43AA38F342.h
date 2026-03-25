#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_649;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_0AB7CE43AA38F342_METHOD_1_17B794D886466CBC_OFFSET UNITYSDK_OFFSET(0x11360BE0)
#define CLASS_1_0AB7CE43AA38F342_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11360B90)
#define CLASS_1_0AB7CE43AA38F342_METHOD_1_46A86D219D1820B0_OFFSET UNITYSDK_OFFSET(0x11360900)
#define CLASS_1_0AB7CE43AA38F342_METHOD_1_FCF7CC0F344612FB_OFFSET UNITYSDK_OFFSET(0x11360970)
#define CLASS_1_0AB7CE43AA38F342__CTOR_OFFSET UNITYSDK_OFFSET(0x11360D50)

inline static constexpr unsigned int Class_1_0AB7CE43AA38F342_TypeDefinitionIndex = 53252;

class Class_1_0AB7CE43AA38F342 : public ::System::Object
{
public:
	::RPG::Client::BaseGachaPoolData* Field_1_1; // 0x10
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AB7CE43AA38F342__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_46A86D219D1820B0(::RPG::Client::IAvatarInfoProvider* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_0AB7CE43AA38F342_METHOD_1_46A86D219D1820B0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AB7CE43AA38F342_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_649* Method_1_17B794D886466CBC()
	{
		return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AB7CE43AA38F342_METHOD_1_17B794D886466CBC_OFFSET))(this);
	}

	::RPG::Client::BaseGachaPoolData* Method_1_FCF7CC0F344612FB(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AB7CE43AA38F342_METHOD_1_FCF7CC0F344612FB_OFFSET))(this, a1);
	}
};
