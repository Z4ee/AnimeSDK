#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_METHOD_3_03190612B8A3CDF5_OFFSET UNITYSDK_OFFSET(0x1B4368E0)
#define RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_METHOD_3_10AB6AE4EE6B1B3A_OFFSET UNITYSDK_OFFSET(0x1B436920)
#define RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B436910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandLiftToAnchor_TypeDefinitionIndex = 20174;

	class SwitchHandLiftToAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::RPG::GameCore::DynamicString* AnchorID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03190612B8A3CDF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandLiftToAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandLiftToAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_METHOD_3_03190612B8A3CDF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10AB6AE4EE6B1B3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandLiftToAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandLiftToAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_METHOD_3_10AB6AE4EE6B1B3A_OFFSET))(a1, a2);
		}
	};
}
