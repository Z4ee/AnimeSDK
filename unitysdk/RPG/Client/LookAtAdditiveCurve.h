#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BDACDF5A33E990DF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATADDITIVECURVE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA70B5E0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_BLEND_OFFSET UNITYSDK_OFFSET(0xA70AB10)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA70AC50)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA70AA60)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_ISBLENDOUT_OFFSET UNITYSDK_OFFSET(0xA70AC80)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_STOPTRACE_OFFSET UNITYSDK_OFFSET(0xA70AC60)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_USESPINENUM_OFFSET UNITYSDK_OFFSET(0xA70AD00)
#define RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_039A661B725702C7_OFFSET UNITYSDK_OFFSET(0xA70ADF0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_4132D1D61E73C31C_OFFSET UNITYSDK_OFFSET(0xA70B430)
#define RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_51284674B86D32D0_OFFSET UNITYSDK_OFFSET(0xA70AD60)
#define RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_76779914A04D87DB_OFFSET UNITYSDK_OFFSET(0xA70AB20)
#define RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xA70AFE0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_9E5102607DED4FAE_OFFSET UNITYSDK_OFFSET(0xA70B060)
#define RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_D0C32DC65A00E8B1_OFFSET UNITYSDK_OFFSET(0xA70B730)
#define RPG_CLIENT_LOOKATADDITIVECURVE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA70AB00)
#define RPG_CLIENT_LOOKATADDITIVECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA70AD20)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtAdditiveCurve_TypeDefinitionIndex = 63141;

	class LookAtAdditiveCurve : public ::System::Object
	{
	public:
		::System::Boolean _Enabled; // 0x10
		::System::Single _Duration; // 0x14
		::UnityEngine::AnimationCurve* _Curve; // 0x18
		::RPG::Client::LookAtAdditiveCurveConstraint* _Constraint; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LookAtAdditiveCurve*>* _InterruptedCurves; // 0x28
		::System::Single _Progress; // 0x30
		::System::Single _Blend; // 0x34
		::System::Boolean _Interrupted; // 0x38
		::System::Single _InterruptedBlendOutTime; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Single get_Blend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_BLEND_OFFSET))(this);
		}

		::System::Single Method_1_76779914A04D87DB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_76779914A04D87DB_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean get_StopTrace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_STOPTRACE_OFFSET))(this);
		}

		::System::Boolean get_IsBlendOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_ISBLENDOUT_OFFSET))(this);
		}

		::System::Int32 get_UseSpineNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_USESPINENUM_OFFSET))(this);
		}

		::System::Void Method_1_51284674B86D32D0(::RPG::Client::LookAtAdditiveCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtAdditiveCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_51284674B86D32D0_OFFSET))(this, a1);
		}

		::System::Void Method_1_039A661B725702C7(::UnityEngine::AnimationCurve* a1, ::RPG::Client::LookAtAdditiveCurveConstraint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::RPG::Client::LookAtAdditiveCurveConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_039A661B725702C7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
		}

		::System::Void Method_1_9E5102607DED4FAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_9E5102607DED4FAE_OFFSET))(this, a1);
		}

		::System::Void Method_1_4132D1D61E73C31C(::UnityEngine::Vector3& a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_4132D1D61E73C31C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_CLEAR_OFFSET))(this);
		}

		::System::Void Method_1_D0C32DC65A00E8B1(::Struct_2_BDACDF5A33E990DF& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BDACDF5A33E990DF&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_METHOD_1_D0C32DC65A00E8B1_OFFSET))(this, a1);
		}
	};
}
