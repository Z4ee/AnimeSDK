#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D35A83CFEBC4DDA6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraFreelook3rdBaseChangeParam; }

#define CLASS_1_78B03B04E15725BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169A3D20)
#define CLASS_1_78B03B04E15725BC_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x169A4440)
#define CLASS_1_78B03B04E15725BC_GET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0x169A4420)
#define CLASS_1_78B03B04E15725BC_METHOD_1_0166539B63E65600_1_OFFSET UNITYSDK_OFFSET(0x169A40A0)
#define CLASS_1_78B03B04E15725BC_METHOD_1_0166539B63E65600_OFFSET UNITYSDK_OFFSET(0x169A4260)
#define CLASS_1_78B03B04E15725BC_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x169A3E80)
#define CLASS_1_78B03B04E15725BC_METHOD_1_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x169A4480)
#define CLASS_1_78B03B04E15725BC_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x169A4460)
#define CLASS_1_78B03B04E15725BC_METHOD_1_7A8CC0F88CF21DAC_OFFSET UNITYSDK_OFFSET(0x169A3FB0)
#define CLASS_1_78B03B04E15725BC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x169A3CA0)
#define CLASS_1_78B03B04E15725BC_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x169A3EF0)
#define CLASS_1_78B03B04E15725BC_METHOD_1_C8B9E2928328C81B_OFFSET UNITYSDK_OFFSET(0x169A3D70)
#define CLASS_1_78B03B04E15725BC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x169A44A0)
#define CLASS_1_78B03B04E15725BC_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x169A4450)
#define CLASS_1_78B03B04E15725BC_SET_ISRECOVERYING_OFFSET UNITYSDK_OFFSET(0x169A4430)
#define CLASS_1_78B03B04E15725BC__CTOR_OFFSET UNITYSDK_OFFSET(0x169A3C90)

inline static constexpr unsigned int Class_1_78B03B04E15725BC_TypeDefinitionIndex = 66409;

class Class_1_78B03B04E15725BC : public ::System::Object
{
public:
	::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* Field_1_0; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_1; // 0x18
	::RPG::Client::CameraBlendCurve* Field_1_2; // 0x20
	::Struct_2_D35A83CFEBC4DDA6 Field_1_3; // 0x28
	::Struct_2_D35A83CFEBC4DDA6 Field_1_4; // 0x34
	::System::Single Field_1_5; // 0x40
	::Struct_2_D35A83CFEBC4DDA6 Field_1_6; // 0x44
	::Struct_2_D35A83CFEBC4DDA6 Field_1_7; // 0x50
	::System::Boolean _IsRecoverying_k__BackingField; // 0x5C
	::System::Boolean Field_1_9; // 0x5D
	::System::Boolean Field_1_10; // 0x5E
	::System::Boolean _IsFinish_k__BackingField; // 0x5F
	::Struct_2_D35A83CFEBC4DDA6 Field_1_12; // 0x60

	::System::Void _ctor(::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam*))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C8B9E2928328C81B(::Struct_2_D35A83CFEBC4DDA6 a1, ::System::Nullable_1<::Struct_2_D35A83CFEBC4DDA6> a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D35A83CFEBC4DDA6, ::System::Nullable_1<::Struct_2_D35A83CFEBC4DDA6>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_C8B9E2928328C81B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_7A8CC0F88CF21DAC(::System::Single a1)
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_7A8CC0F88CF21DAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_0166539B63E65600(::System::Single a1)
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_0166539B63E65600_OFFSET))(this, a1);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_0166539B63E65600_1(::System::Single a1)
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_0166539B63E65600_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean get_IsRecoverying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_GET_ISRECOVERYING_OFFSET))(this);
	}

	::System::Void set_IsRecoverying(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_SET_ISRECOVERYING_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_SET_ISFINISH_OFFSET))(this, a1);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Struct_2_D35A83CFEBC4DDA6 Method_1_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_D35A83CFEBC4DDA6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78B03B04E15725BC_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
