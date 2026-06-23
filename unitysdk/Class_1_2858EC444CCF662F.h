#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97.h"
#include "unitysdk/Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UrbanMapMeshHeightInfo; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_2858EC444CCF662F_METHOD_1_01F6D6781788AB62_OFFSET UNITYSDK_OFFSET(0x1441B500)
#define CLASS_1_2858EC444CCF662F_METHOD_1_03454CD87CB8226B_OFFSET UNITYSDK_OFFSET(0x14420F30)
#define CLASS_1_2858EC444CCF662F_METHOD_1_161CE82DE0497A06_OFFSET UNITYSDK_OFFSET(0x14420490)
#define CLASS_1_2858EC444CCF662F_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1441A4D0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_1F60219C80AEA9A6_OFFSET UNITYSDK_OFFSET(0x1441CBC0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_23286C4E1BC884C6_OFFSET UNITYSDK_OFFSET(0x1441DB50)
#define CLASS_1_2858EC444CCF662F_METHOD_1_2527D92F050F86D5_OFFSET UNITYSDK_OFFSET(0x1441A1C0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x1441C2B0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_39CE704DA554E47B_OFFSET UNITYSDK_OFFSET(0x144205A0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_431477787D58DFDD_OFFSET UNITYSDK_OFFSET(0x1441D130)
#define CLASS_1_2858EC444CCF662F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1441C830)
#define CLASS_1_2858EC444CCF662F_METHOD_1_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x1441B810)
#define CLASS_1_2858EC444CCF662F_METHOD_1_486AF1E6C0038D4C_1_OFFSET UNITYSDK_OFFSET(0x1441C2A0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x1441B8D0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x14420E80)
#define CLASS_1_2858EC444CCF662F_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x14420ED0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14420E70)
#define CLASS_1_2858EC444CCF662F_METHOD_1_541535654D13B35D_OFFSET UNITYSDK_OFFSET(0x1441A540)
#define CLASS_1_2858EC444CCF662F_METHOD_1_607112B48EA5DC32_OFFSET UNITYSDK_OFFSET(0x1441BFD0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_60DACDE1C2CDD71F_OFFSET UNITYSDK_OFFSET(0x1441CA50)
#define CLASS_1_2858EC444CCF662F_METHOD_1_67D04068F791BA12_OFFSET UNITYSDK_OFFSET(0x1441B240)
#define CLASS_1_2858EC444CCF662F_METHOD_1_77195FD7E9A92F9D_OFFSET UNITYSDK_OFFSET(0x1441B630)
#define CLASS_1_2858EC444CCF662F_METHOD_1_816BFE60B2DD5A9E_OFFSET UNITYSDK_OFFSET(0x1441DE00)
#define CLASS_1_2858EC444CCF662F_METHOD_1_87C5D508B87EDB0C_OFFSET UNITYSDK_OFFSET(0x1441DB40)
#define CLASS_1_2858EC444CCF662F_METHOD_1_9037F1E5607EA334_OFFSET UNITYSDK_OFFSET(0x1441D740)
#define CLASS_1_2858EC444CCF662F_METHOD_1_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x1441FE40)
#define CLASS_1_2858EC444CCF662F_METHOD_1_98AF69A4B7665FE1_OFFSET UNITYSDK_OFFSET(0x144200E0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1441EA20)
#define CLASS_1_2858EC444CCF662F_METHOD_1_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x1441A1A0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_A2C7696BD0B96C07_OFFSET UNITYSDK_OFFSET(0x14420EE0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_AFDF4B7598FBFD2E_OFFSET UNITYSDK_OFFSET(0x1441D560)
#define CLASS_1_2858EC444CCF662F_METHOD_1_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0x1441C940)
#define CLASS_1_2858EC444CCF662F_METHOD_1_BDA76F015BC79B63_OFFSET UNITYSDK_OFFSET(0x1441F4C0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14420E90)
#define CLASS_1_2858EC444CCF662F_METHOD_1_D1488CDBB6E94B89_OFFSET UNITYSDK_OFFSET(0x1441B8E0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x14420F00)
#define CLASS_1_2858EC444CCF662F_METHOD_1_FF798D152DDA9A15_1_OFFSET UNITYSDK_OFFSET(0x14420EF0)
#define CLASS_1_2858EC444CCF662F_METHOD_1_FF798D152DDA9A15_OFFSET UNITYSDK_OFFSET(0x14420480)
#define CLASS_1_2858EC444CCF662F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1441A190)
#define CLASS_1_2858EC444CCF662F__CTOR_OFFSET UNITYSDK_OFFSET(0x1441A170)

inline static constexpr unsigned int Class_1_2858EC444CCF662F_TypeDefinitionIndex = 51959;

class Class_1_2858EC444CCF662F : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_62()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2858EC444CCF662F_TypeDefinitionIndex)->GetStaticField(0xA000);
	}
	::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>* Field_1_28; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_1_22; // 0x18
	::System::Func_1<::System::Boolean>* Field_1_52; // 0x20
	::UnityEngine::Camera* Field_1_0; // 0x28
	::System::Func_1<::System::Boolean>* Field_1_51; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::UrbanMapMeshHeightInfo*>* Field_1_44; // 0x38
	::UnityEngine::Transform* Field_1_45; // 0x40
	::System::Single Field_1_25; // 0x48
	::System::Single Field_1_40; // 0x4C
	::System::Single Field_1_16; // 0x50
	::UnityEngine::Vector2 Field_1_53; // 0x54
	::System::Single Field_1_7; // 0x5C
	::System::Single Field_1_17; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_41; // 0x64
	::System::Single Field_1_38; // 0x74
	::UnityEngine::Vector3 Field_1_15; // 0x78
	::UnityEngine::Bounds Field_1_13; // 0x84
	::System::Single Field_1_59; // 0x9C
	::UnityEngine::Vector2 Field_1_55; // 0xA0
	::UnityEngine::Vector2 Field_1_39; // 0xA8
	::UnityEngine::Bounds Field_1_12; // 0xB0
	::System::Single Field_1_19; // 0xC8
	::System::Single Field_1_11; // 0xCC
	::System::Single Field_1_3; // 0xD0
	::UnityEngine::Vector3 Field_1_2; // 0xD4
	::System::Single Field_1_21; // 0xE0
	::System::Single Field_1_18; // 0xE4
	::System::Single Field_1_42; // 0xE8
	::System::Single Field_1_60; // 0xEC
	::UnityEngine::Vector3 Field_1_14; // 0xF0
	::System::Boolean Field_1_33; // 0xFC
	::System::Boolean Field_1_31; // 0xFD
	::System::Boolean Field_1_32; // 0xFE
	::System::Single Field_1_29; // 0x100
	::System::Single Field_1_6; // 0x104
	::System::Single Field_1_37; // 0x108
	::UnityEngine::Vector3 Field_1_57; // 0x10C
	::UnityEngine::Vector3 Field_1_1; // 0x118
	::System::Single Field_1_23; // 0x124
	::System::Single Field_1_43; // 0x128
	::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191 Field_1_27; // 0x12C
	::System::Single Field_1_10; // 0x148
	::System::Single Field_1_20; // 0x14C
	::System::Single Field_1_61; // 0x150
	::UnityEngine::Vector3 Field_1_34; // 0x154
	::UnityEngine::Vector3 Field_1_36; // 0x160
	::System::Single Field_1_5; // 0x16C
	::UnityEngine::Vector2 Field_1_54; // 0x170
	::System::Single Field_1_9; // 0x178
	::System::Single Field_1_46; // 0x17C
	::System::Single Field_1_30; // 0x180
	::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191 Field_1_26; // 0x184
	::UnityEngine::Vector3 Field_1_56; // 0x1A0
	::System::Single Field_1_35; // 0x1AC
	::System::Single Field_1_4; // 0x1B0
	::System::Single Field_1_49; // 0x1B4
	::System::Boolean Field_1_47; // 0x1B8
	::System::Boolean Field_1_58; // 0x1B9
	::System::Boolean Field_1_48; // 0x1BA
	::System::Boolean Field_1_50; // 0x1BB
	::System::Single Field_1_24; // 0x1BC
	::System::Single Field_1_8; // 0x1C0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F__CCTOR_OFFSET))();
	}

	::UnityEngine::Bounds Method_1_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_A2846FC5EA0763C6_OFFSET))(this);
	}

	::System::Boolean Method_1_2527D92F050F86D5(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_2527D92F050F86D5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_01F6D6781788AB62(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_01F6D6781788AB62_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_541535654D13B35D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_541535654D13B35D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_77195FD7E9A92F9D(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_77195FD7E9A92F9D_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_486AF1E6C0038D4C_OFFSET))(this);
	}

	::System::Boolean Method_1_D1488CDBB6E94B89(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_D1488CDBB6E94B89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_607112B48EA5DC32(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_607112B48EA5DC32_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_486AF1E6C0038D4C_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single Method_1_B67DCF72B717FA9F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_B67DCF72B717FA9F_OFFSET))(this);
	}

	::System::Boolean Method_1_60DACDE1C2CDD71F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_60DACDE1C2CDD71F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1F60219C80AEA9A6(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::MoleMole::Cameras::CameraTrackBlending* a13, ::UnityEngine::Bounds a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::UnityEngine::Vector2 a17, ::UnityEngine::Vector2 a18, ::UnityEngine::Vector2 a19, ::System::Boolean a20)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_1F60219C80AEA9A6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
	}

	::System::Void Method_1_AFDF4B7598FBFD2E(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_AFDF4B7598FBFD2E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_9037F1E5607EA334(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_9037F1E5607EA334_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>* Method_1_87C5D508B87EDB0C()
	{
		return ((::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_87C5D508B87EDB0C_OFFSET))(this);
	}

	::System::Void Method_1_23286C4E1BC884C6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_23286C4E1BC884C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_816BFE60B2DD5A9E(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_816BFE60B2DD5A9E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void Method_1_BDA76F015BC79B63(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_BDA76F015BC79B63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FF798D152DDA9A15(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_FF798D152DDA9A15_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D04068F791BA12(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_67D04068F791BA12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_431477787D58DFDD(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::UnityEngine::Bounds a13, ::UnityEngine::Vector2 a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::UnityEngine::Vector2 a17, ::UnityEngine::Vector2 a18, ::System::Boolean a19, ::MoleMole::Cameras::CameraTrackBlending* a20)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_431477787D58DFDD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
	}

	::System::Void Method_1_39CE704DA554E47B(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_39CE704DA554E47B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_A2C7696BD0B96C07(::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97>*))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_A2C7696BD0B96C07_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF798D152DDA9A15_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_FF798D152DDA9A15_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_161CE82DE0497A06(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_161CE82DE0497A06_OFFSET))(this, a1, a2);
	}

	::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191 Method_1_98AF69A4B7665FE1(::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191 a1, ::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191 a2, ::System::Single a3)
	{
		return ((::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191(*)(::PVOID, ::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191, ::Class_1_2858EC444CCF662F_Struct_2_D192A2DF33C35191, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_98AF69A4B7665FE1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_03454CD87CB8226B(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::UnityEngine::Bounds a13, ::UnityEngine::Vector2 a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::UnityEngine::Vector2 a17, ::UnityEngine::Vector2 a18, ::System::Boolean a19)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_METHOD_1_03454CD87CB8226B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}
};
