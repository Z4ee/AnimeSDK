#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraTalkCondition; }
namespace RPG::GameCore { class ChimeraTalkContent; }

#define RPG_GAMECORE_CHIMERATALK_METHOD_2_22BD114E9F4D79BE_OFFSET UNITYSDK_OFFSET(0x1880A0B0)
#define RPG_GAMECORE_CHIMERATALK_METHOD_2_B9749D744FD7ADF1_OFFSET UNITYSDK_OFFSET(0x1880A200)
#define RPG_GAMECORE_CHIMERATALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18809480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalk_TypeDefinitionIndex = 15013;

	class ChimeraTalk : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraTalkContent* TalkConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::ChimeraTalkCondition*>* Conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_22BD114E9F4D79BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALK_METHOD_2_22BD114E9F4D79BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B9749D744FD7ADF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALK_METHOD_2_B9749D744FD7ADF1_OFFSET))(a1, a2);
		}
	};
}
