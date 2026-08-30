#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_A414F16B7A0C1067_OFFSET UNITYSDK_OFFSET(0x1D0E1C50)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_BC19A0CF4C651BB1_OFFSET UNITYSDK_OFFSET(0x1D0E1C10)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E1C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDragonDogPropSpawnerParam_TypeDefinitionIndex = 18368;

	class FiveDimDragonDogPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean FaceLeft; // 0x10
		::System::Boolean EnableOverrideMoveSpeed; // 0x11
		::System::Single MoveSpeedOverride; // 0x14
		::System::Boolean HasAttachEntity; // 0x18
		::System::String* AttachPresetName; // 0x20
		::System::String* AttachPointName; // 0x28
		::System::String* BindLevelVarName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC19A0CF4C651BB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_BC19A0CF4C651BB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A414F16B7A0C1067(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_A414F16B7A0C1067_OFFSET))(a1, a2);
		}
	};
}
