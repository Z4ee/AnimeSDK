#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813EBB0)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1813EBF0)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1813EC00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuide___c_TypeDefinitionIndex = 62620;

	class AvatarGrowthGuide___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_836*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_836*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x56A70);
		}
		static ::RPG::Client::AvatarGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x56A78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_836* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_836*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, a1);
		}
	};
}
