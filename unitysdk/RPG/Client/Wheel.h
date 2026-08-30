#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Wheel_MoveType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_WHEEL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x168006A0)
#define RPG_CLIENT_WHEEL_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x167FFDD0)
#define RPG_CLIENT_WHEEL_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x168005B0)
#define RPG_CLIENT_WHEEL_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16800640)
#define RPG_CLIENT_WHEEL_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x168004C0)
#define RPG_CLIENT_WHEEL_METHOD_1_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0x167FFA50)
#define RPG_CLIENT_WHEEL_METHOD_1_6CB15CD2E359A29C_OFFSET UNITYSDK_OFFSET(0x167FFF90)
#define RPG_CLIENT_WHEEL_METHOD_1_8853398907028921_OFFSET UNITYSDK_OFFSET(0x167FF8A0)
#define RPG_CLIENT_WHEEL_METHOD_1_8C4F5769C49BF3B7_OFFSET UNITYSDK_OFFSET(0x167FF9F0)
#define RPG_CLIENT_WHEEL_METHOD_1_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x167FFC30)
#define RPG_CLIENT_WHEEL_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x167FFBE0)
#define RPG_CLIENT_WHEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x167FF7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Wheel_TypeDefinitionIndex = 70725;

	class Wheel : public ::System::Object
	{
	public:
		::RPG::Client::Wheel_MoveType WheelMoveType; // 0x10
		::System::Int32 PatternNum; // 0x14
		::UnityEngine::Renderer* Render0; // 0x18
		::System::String* ShaderAttribName; // 0x20
		::System::Int32 DefaultNum0; // 0x28
		::UnityEngine::AnimationCurve* AnimCur0; // 0x30
		::System::Single DurationNum0; // 0x38
		::System::Single DurationReset; // 0x3C
		::System::Int32 CircleNum0; // 0x40
		::System::Single CurrentValue; // 0x44
		::System::Single DefaultStateValue; // 0x48
		::System::Single TargetStateValue; // 0x4C
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x50
		::System::Int32 TargetNum; // 0x58
		::System::Int32 _CurrentNum; // 0x5C
		::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* _SpriteList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_8853398907028921(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_8853398907028921_OFFSET))(this, a1);
		}

		::System::Void Method_1_515AB539783606E0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_515AB539783606E0_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
		}

		::System::Void Method_1_A9DAF3FE2888211B(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_A9DAF3FE2888211B_OFFSET))(this, a1);
		}

		::System::Void Method_1_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_1_6CB15CD2E359A29C(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_6CB15CD2E359A29C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_45714050EDEF8291()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_45714050EDEF8291_OFFSET))(this);
		}

		::System::Single Method_1_8C4F5769C49BF3B7(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_8C4F5769C49BF3B7_OFFSET))(this, a1);
		}

		::System::Void Method_1_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_1_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_FINALIZE_OFFSET))(this);
		}
	};
}
