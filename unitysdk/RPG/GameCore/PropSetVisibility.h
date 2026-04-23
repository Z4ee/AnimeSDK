#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_7982506B62293525_OFFSET UNITYSDK_OFFSET(0x18C75120)
#define RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_8B4AB4C7C40E0BEF_OFFSET UNITYSDK_OFFSET(0x18C74FD0)
#define RPG_GAMECORE_PROPSETVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18C75090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetVisibility_TypeDefinitionIndex = 19350;

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

		static ::System::Void Method_3_8B4AB4C7C40E0BEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_8B4AB4C7C40E0BEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7982506B62293525(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY_METHOD_3_7982506B62293525_OFFSET))(a1, a2);
		}
	};
}
