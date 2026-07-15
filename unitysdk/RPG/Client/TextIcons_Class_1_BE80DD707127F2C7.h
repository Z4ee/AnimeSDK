#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextIcons; }

#define RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7_BUILD_OFFSET UNITYSDK_OFFSET(0x194805A0)
#define RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7_GETICONASPECTS_OFFSET UNITYSDK_OFFSET(0x19480550)
#define RPG_CLIENT_TEXTICONS_CLASS_1_BE80DD707127F2C7__CTOR_OFFSET UNITYSDK_OFFSET(0x19479A60)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_Class_1_BE80DD707127F2C7_TypeDefinitionIndex = 69389;

	class TextIcons_Class_1_BE80DD707127F2C7 : public ::System::Object
	{
	public:
		::RPG::Client::TextIcons* Field_1_0; // 0x10
		::System::Boolean Field_1_1; // 0x18

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
