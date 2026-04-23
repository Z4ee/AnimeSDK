#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/FloatCurveFrame.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/Vector3CurveFrame.h"
#include "unitysdk/RPG/Vector4CurveFrame.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_METHOD_3_65F446DB51D703AF_OFFSET UNITYSDK_OFFSET(0x18B350D0)
#define RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_METHOD_3_F159647A5247B37D_OFFSET UNITYSDK_OFFSET(0x18B35150)
#define RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B35120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierPlayerChangeEffect_TypeDefinitionIndex = 19220;

	class ModifierPlayerChangeEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MaxDuration; // 0x18
		::Il2CppArray<::System::String*>* TargetRendererNames; // 0x20
		::Il2CppArray<::RPG::FloatCurveFrame>* FloatKeyframes; // 0x28
		::Il2CppArray<::RPG::Vector3CurveFrame>* Vector3Keyframes; // 0x30
		::Il2CppArray<::RPG::Vector4CurveFrame>* Vector4Keyframes; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65F446DB51D703AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierPlayerChangeEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierPlayerChangeEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_METHOD_3_65F446DB51D703AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F159647A5247B37D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierPlayerChangeEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierPlayerChangeEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_METHOD_3_F159647A5247B37D_OFFSET))(a1, a2);
		}
	};
}
