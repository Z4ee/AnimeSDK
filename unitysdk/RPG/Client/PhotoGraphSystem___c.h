#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_58E5F1B9DB1659B4;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC81010)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC81050)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__STARTTRACKPHOTO_B__14_0_OFFSET UNITYSDK_OFFSET(0xAC81060)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSystem___c_TypeDefinitionIndex = 56179;

	class PhotoGraphSystem___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PhotoGraphSystem___c** StaticGet___9()
		{
			return (::RPG::Client::PhotoGraphSystem___c**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem___c_TypeDefinitionIndex)->GetStaticField(0x62F80);
		}
		static ::System::Comparison_1<::Class_1_58E5F1B9DB1659B4*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_1_58E5F1B9DB1659B4*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem___c_TypeDefinitionIndex)->GetStaticField(0x62F88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _StartTrackPhoto_b__14_0(::Class_1_58E5F1B9DB1659B4* trigger, ::Class_1_58E5F1B9DB1659B4* eventTrigger)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_58E5F1B9DB1659B4*, ::Class_1_58E5F1B9DB1659B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__STARTTRACKPHOTO_B__14_0_OFFSET))(this, trigger, eventTrigger);
		}
	};
}
