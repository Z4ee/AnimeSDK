#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_27C5423F8C6A95F7;
class Class_1_59912FDC614328FF;

#define CLASS_3_6872044F0F8B51D9_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x11D57F60)
#define CLASS_3_6872044F0F8B51D9_METHOD_3_2D44A8D1B5BE380D_OFFSET UNITYSDK_OFFSET(0x11D58580)
#define CLASS_3_6872044F0F8B51D9_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11D588C0)
#define CLASS_3_6872044F0F8B51D9__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x11D57FF0)
#define CLASS_3_6872044F0F8B51D9__CTOR_OFFSET UNITYSDK_OFFSET(0x11D57E80)
#define CLASS_3_6872044F0F8B51D9__REBUILD_OFFSET UNITYSDK_OFFSET(0x11D58060)

inline static constexpr unsigned int Class_3_6872044F0F8B51D9_TypeDefinitionIndex = 57816;

class Class_3_6872044F0F8B51D9 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::Class_1_59912FDC614328FF* Field_3_2; // 0x28
	::Class_1_27C5423F8C6A95F7* Field_3_1; // 0x30
	::Struct_2_BC950E36747FB4C9 Field_3_0; // 0x38
	::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> Field_3_3; // 0x40

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_1_27C5423F8C6A95F7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_1_27C5423F8C6A95F7*))((::PBYTE)hIl2Cpp + CLASS_3_6872044F0F8B51D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0AB718BEE9EA06D7(::Class_1_59912FDC614328FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59912FDC614328FF*))((::PBYTE)hIl2Cpp + CLASS_3_6872044F0F8B51D9_METHOD_3_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6872044F0F8B51D9__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6872044F0F8B51D9__REBUILD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_2D44A8D1B5BE380D(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_6872044F0F8B51D9_METHOD_3_2D44A8D1B5BE380D_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6872044F0F8B51D9_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
