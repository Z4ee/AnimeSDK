#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpecialBpFeature; }

#define RPG_GAMECORE_SETBPFEATURE_METHOD_3_6548632ED61F61A6_OFFSET UNITYSDK_OFFSET(0x18E0E8A0)
#define RPG_GAMECORE_SETBPFEATURE_METHOD_3_82C26879C3C606B7_OFFSET UNITYSDK_OFFSET(0x18E0E820)
#define RPG_GAMECORE_SETBPFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0E870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBpFeature_TypeDefinitionIndex = 22178;

	class SetBpFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SpecialBpFeature* SpecialBpFeature; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82C26879C3C606B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBpFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBpFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPFEATURE_METHOD_3_82C26879C3C606B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6548632ED61F61A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBpFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBpFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPFEATURE_METHOD_3_6548632ED61F61A6_OFFSET))(a1, a2);
		}
	};
}
