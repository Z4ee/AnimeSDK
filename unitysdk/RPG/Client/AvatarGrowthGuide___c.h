#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA1530)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA1570)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x9DA1580)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuide___c_TypeDefinitionIndex = 60343;

	class AvatarGrowthGuide___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x34370);
		}
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_747*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_747*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x34378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_747* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_747*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, x);
		}
	};
}
