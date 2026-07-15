#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_METHOD_3_9548BA0246A89723_OFFSET UNITYSDK_OFFSET(0x1B436C40)
#define RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_METHOD_3_96CDFCBDAB8A46AA_OFFSET UNITYSDK_OFFSET(0x1B436C00)
#define RPG_GAMECORE_SWITCHHANDRESETTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B436C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandResetTransform_TypeDefinitionIndex = 20170;

	class SwitchHandResetTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18
		::RPG::GameCore::DynamicString* AnchorID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96CDFCBDAB8A46AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandResetTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandResetTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_METHOD_3_96CDFCBDAB8A46AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9548BA0246A89723(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandResetTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandResetTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_METHOD_3_9548BA0246A89723_OFFSET))(a1, a2);
		}
	};
}
