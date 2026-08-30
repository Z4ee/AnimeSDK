#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_METHOD_3_0F87088D27DE0E06_OFFSET UNITYSDK_OFFSET(0x1D2AF170)
#define RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_METHOD_3_CAA94928AD66A297_OFFSET UNITYSDK_OFFSET(0x1D2AF1B0)
#define RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AF1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCharacterOutlineTargetRender_TypeDefinitionIndex = 22548;

	class ModifyCharacterOutlineTargetRender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Reset; // 0x20
		::Il2CppArray<::System::String*>* AddRenderNameList; // 0x28
		::Il2CppArray<::System::String*>* RemoveRenderNameList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F87088D27DE0E06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_METHOD_3_0F87088D27DE0E06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CAA94928AD66A297(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCharacterOutlineTargetRender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_METHOD_3_CAA94928AD66A297_OFFSET))(a1, a2);
		}
	};
}
