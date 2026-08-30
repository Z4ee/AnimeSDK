#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_5ABDB6923F1580D3_OFFSET UNITYSDK_OFFSET(0x1D182720)
#define RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_EC6C39C043541243_OFFSET UNITYSDK_OFFSET(0x1D1827A0)
#define RPG_GAMECORE_PROPSETVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D182770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetVisibility_TypeDefinitionIndex = 20160;

	class PropSetVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::Il2CppArray<::System::String*>* SpecifiedRelativePaths; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5ABDB6923F1580D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_5ABDB6923F1580D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC6C39C043541243(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_EC6C39C043541243_OFFSET))(a1, a2);
		}
	};
}
