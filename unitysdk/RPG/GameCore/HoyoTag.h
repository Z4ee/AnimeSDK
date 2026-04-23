#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_HOYOTAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18A07140)
#define RPG_GAMECORE_HOYOTAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x18A070E0)
#define RPG_GAMECORE_HOYOTAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18A071F0)
#define RPG_GAMECORE_HOYOTAG_METHOD_2_6A562E01650ACF04_OFFSET UNITYSDK_OFFSET(0x18A06FB0)
#define RPG_GAMECORE_HOYOTAG_METHOD_2_A41B39264FED25E2_OFFSET UNITYSDK_OFFSET(0x18A07200)
#define RPG_GAMECORE_HOYOTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A070D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTag_TypeDefinitionIndex = 17407;

	class HoyoTag : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Tag; // 0x10
		::System::Int32 TagHash; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6A562E01650ACF04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoyoTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoyoTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_METHOD_2_6A562E01650ACF04_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_GETHASHCODE_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTag* Method_2_A41B39264FED25E2()
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_METHOD_2_A41B39264FED25E2_OFFSET))(this);
		}
	};
}
