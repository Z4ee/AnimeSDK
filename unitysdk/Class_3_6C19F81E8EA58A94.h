#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_420;
class Class_0_16E4307DCC419505_433;

#define CLASS_3_6C19F81E8EA58A94_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1A6D3320)
#define CLASS_3_6C19F81E8EA58A94_METHOD_3_461891F0FA20B457_OFFSET UNITYSDK_OFFSET(0x1A6D3060)
#define CLASS_3_6C19F81E8EA58A94_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x1A6D2880)
#define CLASS_3_6C19F81E8EA58A94__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x1A6D2910)
#define CLASS_3_6C19F81E8EA58A94__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D27F0)
#define CLASS_3_6C19F81E8EA58A94__REBUILD_OFFSET UNITYSDK_OFFSET(0x1A6D2AF0)

inline static constexpr unsigned int Class_3_6C19F81E8EA58A94_TypeDefinitionIndex = 62786;

class Class_3_6C19F81E8EA58A94 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::Class_0_16E4307DCC419505_433* EOEACGLNPMC; // 0x28
	::RPG::GameCore::AvatarBaseType GIEAOGNLGFP; // 0x30
	::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> FFFFJCOACPK; // 0x34

	::System::Void _ctor(::RPG::GameCore::AvatarBaseType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_433* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_433*))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94__REBUILD_OFFSET))(this);
	}

	::System::Void Method_3_461891F0FA20B457(::Class_0_16E4307DCC419505_420* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94_METHOD_3_461891F0FA20B457_OFFSET))(this, a1);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C19F81E8EA58A94_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}
};
