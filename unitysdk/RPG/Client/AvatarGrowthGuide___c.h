#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x913FFD0)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9140010)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x9140020)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuide___c_TypeDefinitionIndex = 53216;

	class AvatarGrowthGuide___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_648*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_648*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x36D60);
		}
		static ::RPG::Client::AvatarGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x36D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_648* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_648*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, x);
		}
	};
}
