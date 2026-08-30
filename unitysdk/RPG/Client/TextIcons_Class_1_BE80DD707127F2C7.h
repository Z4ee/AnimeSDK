#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextIcons; }

#define RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7_BUILD_OFFSET UNITYSDK_OFFSET(0xE1D0020)
#define RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7_GETICONASPECTS_OFFSET UNITYSDK_OFFSET(0xE1CFFD0)
#define RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7__CTOR_OFFSET UNITYSDK_OFFSET(0xE1C9500)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_Class_1_BE80DD707127F2C7_TypeDefinitionIndex = 72605;

	class TextIcons_Class_1_BE80DD707127F2C7 : public ::System::Object
	{
	public:
		::RPG::Client::TextIcons* GFAGBNEHELN; // 0x10
		::System::Boolean PJEIPLHJOBH; // 0x18

		::System::Void _ctor(::RPG::Client::TextIcons* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextIcons*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Single>* GetIconAspects()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7_GETICONASPECTS_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7_BUILD_OFFSET))(this);
		}
	};
}
