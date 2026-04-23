#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_641;
class Class_0_16E4307DCC419505_643;
class Class_1_BB15C35EB66E7EA8;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }
namespace RPG::Client { class AlleyRouteBird; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x9D17380)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_EMIT_OFFSET UNITYSDK_OFFSET(0x9D17B80)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_GET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0x9D17270)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_0DEBA9294EADE4AB_OFFSET UNITYSDK_OFFSET(0x9D17E20)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_1_OFFSET UNITYSDK_OFFSET(0x9D17600)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_2_OFFSET UNITYSDK_OFFSET(0x9D180B0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0x9D178B0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x9D179E0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x9D176E0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_93569AEF92075BB5_OFFSET UNITYSDK_OFFSET(0x9D17F40)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_B67699D6DDA99366_OFFSET UNITYSDK_OFFSET(0x9D18190)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_BA35AAB815742E34_OFFSET UNITYSDK_OFFSET(0x9D18410)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9D17870)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9D17990)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCOLOR_OFFSET UNITYSDK_OFFSET(0x9D17330)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCONFIG_OFFSET UNITYSDK_OFFSET(0x9D172E0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDPOOL_OFFSET UNITYSDK_OFFSET(0x9D17290)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0x9D17280)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_STOP_OFFSET UNITYSDK_OFFSET(0x9D17C60)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D174C0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D184B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBirdEmitter_TypeDefinitionIndex = 57463;

	class AlleyRouteBirdEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* _BGCcMath_k__BackingField; // 0x18
		::System::Int32 Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x24
		::System::Int32 Field_5_3; // 0x28
		::Class_0_16E4307DCC419505_641* Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x3C
		::Class_1_BB15C35EB66E7EA8* Field_5_7; // 0x40
		::System::String* Field_5_8; // 0x48
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcTrs*>* Field_5_9; // 0x50
		::Class_0_16E4307DCC419505_643* Field_5_10; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_BGCcMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_GET_BGCCMATH_OFFSET))(this);
		}

		::System::Void set_BGCcMath(::BansheeGz::BGSpline::Components::BGCcMath* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SET_BGCCMATH_OFFSET))(this, value);
		}

		::System::Void SetBirdPool(::Class_1_BB15C35EB66E7EA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB15C35EB66E7EA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDPOOL_OFFSET))(this, a1);
		}

		::System::Void SetBirdConfig(::Class_0_16E4307DCC419505_641* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_641*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCONFIG_OFFSET))(this, a1);
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

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs* Method_5_93569AEF92075BB5()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_93569AEF92075BB5_OFFSET))(this);
		}

		::RPG::Client::AlleyRouteBird* Method_5_B67699D6DDA99366(::BansheeGz::BGSpline::Components::BGCcTrs* a1)
		{
			return ((::RPG::Client::AlleyRouteBird*(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcTrs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_B67699D6DDA99366_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs* Method_5_BA35AAB815742E34()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_BA35AAB815742E34_OFFSET))(this);
		}

		::System::Void Method_5_0DEBA9294EADE4AB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_0DEBA9294EADE4AB_OFFSET))(this, a1);
		}

		::System::Void Method_5_660474B0F8C5FECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_METHOD_5_660474B0F8C5FECE_OFFSET))(this);
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
