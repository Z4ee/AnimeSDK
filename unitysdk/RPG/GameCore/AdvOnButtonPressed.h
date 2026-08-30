#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVONBUTTONPRESSED_METHOD_3_241511C486366CA3_OFFSET UNITYSDK_OFFSET(0x1D6C1FB0)
#define RPG_GAMECORE_ADVONBUTTONPRESSED_METHOD_3_CBA7E34C1344B324_OFFSET UNITYSDK_OFFSET(0x1D6C1FF0)
#define RPG_GAMECORE_ADVONBUTTONPRESSED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C1FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvOnButtonPressed_TypeDefinitionIndex = 20301;

	class AdvOnButtonPressed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ButtonName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPressedCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONBUTTONPRESSED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_241511C486366CA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOnButtonPressed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOnButtonPressed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONBUTTONPRESSED_METHOD_3_241511C486366CA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBA7E34C1344B324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOnButtonPressed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOnButtonPressed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONBUTTONPRESSED_METHOD_3_CBA7E34C1344B324_OFFSET))(a1, a2);
		}
	};
}
