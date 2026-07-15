#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_METHOD_3_812B30A261FD3B0A_OFFSET UNITYSDK_OFFSET(0x1AADA890)
#define RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_METHOD_3_B7DD1B10ABB59A5F_OFFSET UNITYSDK_OFFSET(0x1AADA8E0)
#define RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADA8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveShotCameraTemplate_TypeDefinitionIndex = 20042;

	class ActiveShotCameraTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TemplatePath; // 0x18
		::System::Boolean IsActive; // 0x20
		::RPG::GameCore::TargetEvaluator* SecondTarget; // 0x28
		::RPG::GameCore::TargetEvaluator* FirstTarget; // 0x30
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_812B30A261FD3B0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveShotCameraTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveShotCameraTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_METHOD_3_812B30A261FD3B0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7DD1B10ABB59A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveShotCameraTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveShotCameraTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_METHOD_3_B7DD1B10ABB59A5F_OFFSET))(a1, a2);
		}
	};
}
