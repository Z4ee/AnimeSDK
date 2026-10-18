#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_508;
class Class_0_16E4307DCC419505_520;

#define CLASS_3_6C19F81E8EA58A94_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x155B9C10)
#define CLASS_3_6C19F81E8EA58A94_METHOD_3_461891F0FA20B457_OFFSET UNITYSDK_OFFSET(0x155B9950)
#define CLASS_3_6C19F81E8EA58A94_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x155B9170)
#define CLASS_3_6C19F81E8EA58A94__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x155B9200)
#define CLASS_3_6C19F81E8EA58A94__CTOR_OFFSET UNITYSDK_OFFSET(0x155B90E0)
#define CLASS_3_6C19F81E8EA58A94__REBUILD_OFFSET UNITYSDK_OFFSET(0x155B93E0)

inline static constexpr unsigned int Class_3_6C19F81E8EA58A94_TypeDefinitionIndex = 62719;

class Class_3_6C19F81E8EA58A94 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::Class_0_16E4307DCC419505_520* EOEACGLNPMC; // 0x28
	::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> FFFFJCOACPK; // 0x30
	::RPG::GameCore::AvatarBaseType GIEAOGNLGFP; // 0x3C

	::System::Void _ctor(::RPG::GameCore::AvatarBaseType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_520* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_520*))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94__REBUILD_OFFSET))(this);
	}

	::System::Void Method_3_461891F0FA20B457(::Class_0_16E4307DCC419505_508* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_508*))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94_METHOD_3_461891F0FA20B457_OFFSET))(this, a1);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}
};
