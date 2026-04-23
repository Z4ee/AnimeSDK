#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D35A83CFEBC4DDA6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFreelook3rdBaseChangeParam; }

#define CLASS_1_2C62E4CDE21F302D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA079330)
#define CLASS_1_2C62E4CDE21F302D_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA079A30)
#define CLASS_1_2C62E4CDE21F302D_GET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0xA079A10)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_0166539B63E65600_1_OFFSET UNITYSDK_OFFSET(0xA079690)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_0166539B63E65600_OFFSET UNITYSDK_OFFSET(0xA079850)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA079470)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0xA079A70)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0xA079A50)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_7A8CC0F88CF21DAC_OFFSET UNITYSDK_OFFSET(0xA0795A0)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA0792B0)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA0794E0)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_EE4BBD4EFF054459_OFFSET UNITYSDK_OFFSET(0xA079380)
#define CLASS_1_2C62E4CDE21F302D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA079A90)
#define CLASS_1_2C62E4CDE21F302D_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA079A40)
#define CLASS_1_2C62E4CDE21F302D_SET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0xA079A20)
#define CLASS_1_2C62E4CDE21F302D__CTOR_OFFSET UNITYSDK_OFFSET(0xA0792A0)

inline static constexpr unsigned int Class_1_2C62E4CDE21F302D_TypeDefinitionIndex = 64083;

class Class_1_2C62E4CDE21F302D : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_9; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_8; // 0x18
	::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* Field_1_12; // 0x20
	::System::Single Field_1_2; // 0x28
	::Struct_2_D35A83CFEBC4DDA6 Field_1_6; // 0x2C
	::System::Boolean _IsRecoverying_k__BackingField; // 0x38
	::System::Boolean Field_1_7; // 0x39
	::System::Boolean _IsFinish_k__BackingField; // 0x3A
	::System::Boolean Field_1_10; // 0x3B
	::Struct_2_D35A83CFEBC4DDA6 Field_1_4; // 0x3C
	::Struct_2_D35A83CFEBC4DDA6 Field_1_11; // 0x48
	::Struct_2_D35A83CFEBC4DDA6 Field_1_3; // 0x54
	::Struct_2_D35A83CFEBC4DDA6 Field_1_5; // 0x60

	::System::Void _ctor(::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam*))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EE4BBD4EFF054459(::Struct_2_D35A83CFEBC4DDA6 a1, ::System::Nullable_1<::Struct_2_D35A83CFEBC4DDA6> a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D35A83CFEBC4DDA6, ::System::Nullable_1<::Struct_2_D35A83CFEBC4DDA6>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_EE4BBD4EFF054459_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_7A8CC0F88CF21DAC(::System::Single a1)
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_7A8CC0F88CF21DAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_0166539B63E65600(::System::Single a1)
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_0166539B63E65600_OFFSET))(this, a1);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_0166539B63E65600_1(::System::Single a1)
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_0166539B63E65600_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean get_IsRecoverying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_GET_ISRECOVERYING_OFFSET))(this);
	}

	::System::Void set_IsRecoverying(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_SET_ISRECOVERYING_OFFSET))(this, value);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_SET_ISFINISH_OFFSET))(this, value);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C62E4CDE21F302D_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
