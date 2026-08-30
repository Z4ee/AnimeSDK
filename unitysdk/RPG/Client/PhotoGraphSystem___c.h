#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_58E5F1B9DB1659B4;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA8A590)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDA8A5D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__STARTTRACKPHOTO_B__14_0_OFFSET UNITYSDK_OFFSET(0xDA8A5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSystem___c_TypeDefinitionIndex = 61015;

	class PhotoGraphSystem___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PhotoGraphSystem___c** StaticGet___9()
		{
			return (::RPG::Client::PhotoGraphSystem___c**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem___c_TypeDefinitionIndex)->GetStaticField(0x544A0);
		}
		static ::System::Comparison_1<::Class_1_58E5F1B9DB1659B4*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_1_58E5F1B9DB1659B4*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem___c_TypeDefinitionIndex)->GetStaticField(0x544A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _StartTrackPhoto_b__14_0(::Class_1_58E5F1B9DB1659B4* a1, ::Class_1_58E5F1B9DB1659B4* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_58E5F1B9DB1659B4*, ::Class_1_58E5F1B9DB1659B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__STARTTRACKPHOTO_B__14_0_OFFSET))(this, a1, a2);
		}
	};
}
