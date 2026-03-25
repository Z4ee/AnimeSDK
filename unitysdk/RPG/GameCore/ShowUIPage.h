#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UIImageNode; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWUIPAGE_METHOD_3_CF802499BF115A7D_OFFSET UNITYSDK_OFFSET(0x17707330)
#define RPG_GAMECORE_SHOWUIPAGE_METHOD_3_F7D9A1BCA0F8AA59_OFFSET UNITYSDK_OFFSET(0x177072B0)
#define RPG_GAMECORE_SHOWUIPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17707300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowUIPage_TypeDefinitionIndex = 22114;

	class ShowUIPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AssetPath; // 0x18
		::System::Boolean WaitShowPageFinish; // 0x20
		::Il2CppArray<::RPG::GameCore::UIImageNode*>* UIImageNodes; // 0x28
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x30
		::System::Single LifeTime; // 0x38
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUIPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7D9A1BCA0F8AA59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUIPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUIPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUIPAGE_METHOD_3_F7D9A1BCA0F8AA59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF802499BF115A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUIPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUIPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUIPAGE_METHOD_3_CF802499BF115A7D_OFFSET))(a1, a2);
		}
	};
}
