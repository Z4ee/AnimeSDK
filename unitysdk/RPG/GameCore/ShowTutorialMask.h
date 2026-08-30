#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALMASK_METHOD_3_3A76149DE1254C16_OFFSET UNITYSDK_OFFSET(0x1D09CC40)
#define RPG_GAMECORE_SHOWTUTORIALMASK_METHOD_3_B1A94EBA28683ED8_OFFSET UNITYSDK_OFFSET(0x1D09CBF0)
#define RPG_GAMECORE_SHOWTUTORIALMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09CC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialMask_TypeDefinitionIndex = 24064;

	class ShowTutorialMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* NodeIDList; // 0x18
		::System::Boolean Show; // 0x20
		::System::Boolean BlockClick; // 0x21
		::System::UInt32 Type; // 0x24
		::System::Single Scale; // 0x28
		::RPG::GameCore::TutorialAnimConfig* AnimConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1A94EBA28683ED8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialMask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialMask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALMASK_METHOD_3_B1A94EBA28683ED8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A76149DE1254C16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialMask* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALMASK_METHOD_3_3A76149DE1254C16_OFFSET))(a1, a2);
		}
	};
}
