#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeadIconDisplayData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HEADICONUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A06A220)
#define RPG_CLIENT_HEADICONUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06A260)
#define RPG_CLIENT_HEADICONUTILS___C__SORTHEADICONDISPLAYDATALIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A06A270)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadIconUtils___c_TypeDefinitionIndex = 65716;

	class HeadIconUtils___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HeadIconUtils___c** StaticGet___9()
		{
			return (::RPG::Client::HeadIconUtils___c**)Il2CppClass::FromTypeDefinitionIndex(HeadIconUtils___c_TypeDefinitionIndex)->GetStaticField(0x573D0);
		}
		static ::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(HeadIconUtils___c_TypeDefinitionIndex)->GetStaticField(0x573D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortHeadIconDisplayDataList_b__4_0(::RPG::Client::HeadIconDisplayData* a1, ::RPG::Client::HeadIconDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C__SORTHEADICONDISPLAYDATALIST_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}
