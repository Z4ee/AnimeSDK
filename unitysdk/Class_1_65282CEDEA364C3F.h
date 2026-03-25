#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_65282CEDEA364C3F_CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_65282CEDEA364C3F_Class_1_758E39C4D9004E9F;
namespace RPG::GameCore { class AnchorInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_65282CEDEA364C3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115D4FF0)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x115D5B30)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x115D5970)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_44E501854C0276A6_OFFSET UNITYSDK_OFFSET(0x115D5570)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x115D5030)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_4948497ADBCA9913_OFFSET UNITYSDK_OFFSET(0x115D58E0)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_55DD92EAA484AA84_OFFSET UNITYSDK_OFFSET(0x115D50C0)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_BAFD112E268F782F_OFFSET UNITYSDK_OFFSET(0x115D59F0)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x115D4DE0)
#define CLASS_1_65282CEDEA364C3F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x115D5C70)
#define CLASS_1_65282CEDEA364C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x115D4DD0)

inline static constexpr unsigned int Class_1_65282CEDEA364C3F_TypeDefinitionIndex = 64086;

class Class_1_65282CEDEA364C3F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_65282CEDEA364C3F_CameraState, ::Class_1_65282CEDEA364C3F_Class_1_758E39C4D9004E9F*>* Field_1_1; // 0x10
	::RPG::GameCore::AnchorInfo* Field_1_3; // 0x18
	::RPG::GameCore::AnchorInfo* Field_1_4; // 0x20
	::Class_1_65282CEDEA364C3F_Class_1_758E39C4D9004E9F* Field_1_2; // 0x28
	::System::Boolean Field_1_0; // 0x30
	::System::Single Field_1_14; // 0x34
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_15; // 0x3C
	::System::Single Field_1_10; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_12; // 0x48
	::System::Single Field_1_7; // 0x4C
	::UnityEngine::Vector3 Field_1_16; // 0x50
	::System::Single Field_1_11; // 0x5C
	::System::Single Field_1_6; // 0x60
	::System::Single Field_1_9; // 0x64
	::System::Single Field_1_13; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_44E501854C0276A6(::RPG::GameCore::AnchorInfo* a1, ::RPG::GameCore::AnchorInfo* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*, ::RPG::GameCore::AnchorInfo*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_44E501854C0276A6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::Class_1_65282CEDEA364C3F_Class_1_758E39C4D9004E9F* Method_1_4948497ADBCA9913(::Class_1_65282CEDEA364C3F_CameraState a1)
	{
		return ((::Class_1_65282CEDEA364C3F_Class_1_758E39C4D9004E9F*(*)(::PVOID, ::Class_1_65282CEDEA364C3F_CameraState))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_4948497ADBCA9913_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAFD112E268F782F(::Class_1_65282CEDEA364C3F_CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_65282CEDEA364C3F_CameraState))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_BAFD112E268F782F_OFFSET))(this, a1);
	}

	::System::Void Method_1_55DD92EAA484AA84()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_55DD92EAA484AA84_OFFSET))(this);
	}

	::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65282CEDEA364C3F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
