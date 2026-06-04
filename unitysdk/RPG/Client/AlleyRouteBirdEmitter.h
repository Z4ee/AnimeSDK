#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_664;
class Class_0_16E4307DCC419505_666;
class Class_1_BB15C35EB66E7EA8;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }
namespace RPG::Client { class AlleyRouteBird; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xB306DA0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_EMIT_OFFSET UNITYSDK_OFFSET(0xB3077A0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_GET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0xB306C90)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_1_OFFSET UNITYSDK_OFFSET(0xB3071C0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_2_OFFSET UNITYSDK_OFFSET(0xB307CC0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0xB3074E0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_413756351A6E8A48_OFFSET UNITYSDK_OFFSET(0xB307A50)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_8BBAEEFBF2212B92_OFFSET UNITYSDK_OFFSET(0xB307B60)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xB3072A0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_B67699D6DDA99366_OFFSET UNITYSDK_OFFSET(0xB307DA0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xB307610)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB3074A0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3075C0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CFFF42C2DBAED4BB_OFFSET UNITYSDK_OFFSET(0xB308020)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCOLOR_OFFSET UNITYSDK_OFFSET(0xB306D50)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCONFIG_OFFSET UNITYSDK_OFFSET(0xB306D00)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDPOOL_OFFSET UNITYSDK_OFFSET(0xB306CB0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0xB306CA0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_STOP_OFFSET UNITYSDK_OFFSET(0xB307880)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB306EE0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB308120)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBirdEmitter_TypeDefinitionIndex = 58275;

	class AlleyRouteBirdEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* _BGCcMath_k__BackingField; // 0x18
		::System::Int32 Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x24
		::System::Int32 Field_5_3; // 0x28
		::Class_0_16E4307DCC419505_664* Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x3C
		::Class_1_BB15C35EB66E7EA8* Field_5_7; // 0x40
		::System::String* Field_5_8; // 0x48
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcTrs*>* Field_5_9; // 0x50
		::Class_0_16E4307DCC419505_666* Field_5_10; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_BGCcMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_GET_BGCCMATH_OFFSET))(this);
		}

		::System::Void set_BGCcMath(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SET_BGCCMATH_OFFSET))(this, a1);
		}

		::System::Void SetBirdPool(::Class_1_BB15C35EB66E7EA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB15C35EB66E7EA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDPOOL_OFFSET))(this, a1);
		}

		::System::Void SetBirdConfig(::Class_0_16E4307DCC419505_664* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_664*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetBirdColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCOLOR_OFFSET))(this, a1);
		}

		::System::Void BindComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_BINDCOMPONENTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_UPDATE_OFFSET))(this);
		}

		::System::Void Emit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_EMIT_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_STOP_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs* Method_5_8BBAEEFBF2212B92()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_8BBAEEFBF2212B92_OFFSET))(this);
		}

		::RPG::Client::AlleyRouteBird* Method_5_B67699D6DDA99366(::BansheeGz::BGSpline::Components::BGCcTrs* a1)
		{
			return ((::RPG::Client::AlleyRouteBird*(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcTrs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_B67699D6DDA99366_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs* Method_5_CFFF42C2DBAED4BB()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CFFF42C2DBAED4BB_OFFSET))(this);
		}

		::System::Void Method_5_413756351A6E8A48(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_413756351A6E8A48_OFFSET))(this, a1);
		}

		::System::Void Method_5_C56DC3B2E26040B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_C56DC3B2E26040B8_OFFSET))(this);
		}

		::System::Single Method_5_3ABD0165571B5EF8()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_OFFSET))(this);
		}

		::System::Single Method_5_3ABD0165571B5EF8_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_1_OFFSET))(this);
		}

		::System::Single Method_5_3ABD0165571B5EF8_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_2_OFFSET))(this);
		}
	};
}
