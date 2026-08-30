#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPUNLOADHITBOX_METHOD_3_344D148D94EC9FFA_OFFSET UNITYSDK_OFFSET(0x1D375940)
#define RPG_GAMECORE_PROPUNLOADHITBOX_METHOD_3_4DA30F4D1ADE4EF1_OFFSET UNITYSDK_OFFSET(0x1D375900)
#define RPG_GAMECORE_PROPUNLOADHITBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D375930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropUnloadHitBox_TypeDefinitionIndex = 21773;

	class PropUnloadHitBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DA30F4D1ADE4EF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropUnloadHitBox*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropUnloadHitBox*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOX_METHOD_3_4DA30F4D1ADE4EF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_344D148D94EC9FFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropUnloadHitBox* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropUnloadHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOX_METHOD_3_344D148D94EC9FFA_OFFSET))(a1, a2);
		}
	};
}
