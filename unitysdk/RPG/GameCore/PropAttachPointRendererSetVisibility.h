#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_METHOD_3_BAFF0C84B85A6977_OFFSET UNITYSDK_OFFSET(0x1BA1AC50)
#define RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_METHOD_3_E0EE6D9C72FA515F_OFFSET UNITYSDK_OFFSET(0x1BA1ACD0)
#define RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1ACA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAttachPointRendererSetVisibility_TypeDefinitionIndex = 19615;

	class PropAttachPointRendererSetVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicString*>* AttachPoints; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BAFF0C84B85A6977(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttachPointRendererSetVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttachPointRendererSetVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_METHOD_3_BAFF0C84B85A6977_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0EE6D9C72FA515F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttachPointRendererSetVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttachPointRendererSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_METHOD_3_E0EE6D9C72FA515F_OFFSET))(a1, a2);
		}
	};
}
