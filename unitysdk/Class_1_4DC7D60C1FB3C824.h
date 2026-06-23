#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A55CA11900DC55FE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigTimelineCamera_CameraCurveGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4DC7D60C1FB3C824_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151F6800)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_0A888ADA55827819_OFFSET UNITYSDK_OFFSET(0x151F71F0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_178EA063585DE2C4_OFFSET UNITYSDK_OFFSET(0x151F87A0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_1E6CA4B463058047_OFFSET UNITYSDK_OFFSET(0x151F70E0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_208CCBFF1B8F62A7_1_OFFSET UNITYSDK_OFFSET(0x151F7B80)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x151F6F30)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_27F287B1045999E8_OFFSET UNITYSDK_OFFSET(0x151F8520)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_3E8C7E78003D17FB_OFFSET UNITYSDK_OFFSET(0x151F82C0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x151F6C20)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_4ACC2F8684BE1D57_OFFSET UNITYSDK_OFFSET(0x151F7F80)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x151F7D00)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_4DB14E9CF0E552EE_OFFSET UNITYSDK_OFFSET(0x151F8090)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_5ADC654B7B75957A_OFFSET UNITYSDK_OFFSET(0x151F7C40)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_5E256ABCBB78EAD2_OFFSET UNITYSDK_OFFSET(0x151F7250)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x151F78D0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_8E64D6357918B560_OFFSET UNITYSDK_OFFSET(0x151F76A0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_9035FEE44752EB8E_OFFSET UNITYSDK_OFFSET(0x151F6C00)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_90A476C0D1BA2FC9_1_OFFSET UNITYSDK_OFFSET(0x151F7EA0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_90A476C0D1BA2FC9_OFFSET UNITYSDK_OFFSET(0x151F7DB0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_9D88E5402AD63A48_OFFSET UNITYSDK_OFFSET(0x151F77F0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_9E14C8E365DFCB60_OFFSET UNITYSDK_OFFSET(0x151F7980)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x151F7BA0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_AAE44609DDD73F41_OFFSET UNITYSDK_OFFSET(0x151F7300)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_ACC7C04D05A7D67E_OFFSET UNITYSDK_OFFSET(0x151F69C0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_DBBF8A9CF80D2D00_OFFSET UNITYSDK_OFFSET(0x151F6F50)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_DF64B90BA25AAE64_OFFSET UNITYSDK_OFFSET(0x151F8620)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_F26109FDE858206E_OFFSET UNITYSDK_OFFSET(0x151F8140)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_F75C0E617E8805AE_OFFSET UNITYSDK_OFFSET(0x151F68A0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_F78C032061CEA1F7_1_OFFSET UNITYSDK_OFFSET(0x151F6FA0)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_F78C032061CEA1F7_OFFSET UNITYSDK_OFFSET(0x151F7040)
#define CLASS_1_4DC7D60C1FB3C824_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x151F8730)
#define CLASS_1_4DC7D60C1FB3C824__CTOR_1_OFFSET UNITYSDK_OFFSET(0x151F66A0)
#define CLASS_1_4DC7D60C1FB3C824__CTOR_OFFSET UNITYSDK_OFFSET(0x151F6500)

inline static constexpr unsigned int Class_1_4DC7D60C1FB3C824_TypeDefinitionIndex = 53531;

class Class_1_4DC7D60C1FB3C824 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* Field_1_1; // 0x10
	::System::Single Field_1_4; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x1C
	::System::Boolean Field_1_6; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Single Field_1_7; // 0x2C
	::UnityEngine::Quaternion Field_1_3; // 0x30
	::System::Single Field_1_8; // 0x40

	::System::Void _ctor(::MoleMole::ConfigTimelineCamera_CameraCurveGroup* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3, ::System::Nullable_1<::System::Single> a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineCamera_CameraCurveGroup*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3, ::System::Nullable_1<::System::Single> a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_F75C0E617E8805AE(::System::Single a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Nullable_1<::UnityEngine::Quaternion> a5)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_F75C0E617E8805AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_9035FEE44752EB8E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_9035FEE44752EB8E_OFFSET))(this);
	}

	::System::Single Method_1_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Boolean Method_1_DBBF8A9CF80D2D00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_DBBF8A9CF80D2D00_OFFSET))(this);
	}

	::System::Boolean Method_1_F78C032061CEA1F7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_F78C032061CEA1F7_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_0A888ADA55827819()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_0A888ADA55827819_OFFSET))(this);
	}

	::Struct_2_A55CA11900DC55FE Method_1_5E256ABCBB78EAD2(::System::Single a1)
	{
		return ((::Struct_2_A55CA11900DC55FE(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_5E256ABCBB78EAD2_OFFSET))(this, a1);
	}

	::System::Single Method_1_8E64D6357918B560(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_8E64D6357918B560_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1E6CA4B463058047(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_1E6CA4B463058047_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F78C032061CEA1F7_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_F78C032061CEA1F7_1_OFFSET))(this);
	}

	::System::Single Method_1_9D88E5402AD63A48(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_9D88E5402AD63A48_OFFSET))(this, a1);
	}

	::System::Single Method_1_208CCBFF1B8F62A7_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_208CCBFF1B8F62A7_1_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_5ADC654B7B75957A(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_5ADC654B7B75957A_OFFSET))(this, a1);
	}

	::System::Single Method_1_9E14C8E365DFCB60(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_9E14C8E365DFCB60_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_4ACC2F8684BE1D57(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_4ACC2F8684BE1D57_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DB14E9CF0E552EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_4DB14E9CF0E552EE_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_ACC7C04D05A7D67E(::System::Single a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::Quaternion a5)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_ACC7C04D05A7D67E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_F26109FDE858206E(::System::Single a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Nullable_1<::UnityEngine::Vector3> a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_F26109FDE858206E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_3E8C7E78003D17FB(::System::Single a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::UnityEngine::Quaternion a6)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_3E8C7E78003D17FB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::Struct_2_A55CA11900DC55FE Method_1_AAE44609DDD73F41(::System::Single a1, ::Struct_2_A55CA11900DC55FE& a2)
	{
		return ((::Struct_2_A55CA11900DC55FE(*)(::PVOID, ::System::Single, ::Struct_2_A55CA11900DC55FE&))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_AAE44609DDD73F41_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_27F287B1045999E8(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_27F287B1045999E8_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_DF64B90BA25AAE64(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_DF64B90BA25AAE64_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_90A476C0D1BA2FC9(::System::Single a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_90A476C0D1BA2FC9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::Struct_2_A55CA11900DC55FE Method_1_178EA063585DE2C4(::System::Single a1, ::Struct_2_A55CA11900DC55FE& a2)
	{
		return ((::Struct_2_A55CA11900DC55FE(*)(::PVOID, ::System::Single, ::Struct_2_A55CA11900DC55FE&))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_178EA063585DE2C4_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_90A476C0D1BA2FC9_1(::System::Single a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_4DC7D60C1FB3C824_METHOD_1_90A476C0D1BA2FC9_1_OFFSET))(this, a1, a2);
	}
};
