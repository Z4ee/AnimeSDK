#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_SKILLTREEGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18901A60)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18901AA0)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x18901AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeGrowthGuide___c_TypeDefinitionIndex = 62636;

	class SkillTreeGrowthGuide___c : public ::System::Object
	{
	public:
		static ::RPG::Client::SkillTreeGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::SkillTreeGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(SkillTreeGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x34D70);
		}
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_836*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_836*>**)Il2CppClass::FromTypeDefinitionIndex(SkillTreeGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x34D78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_836* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_836*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, a1);
		}
	};
}
