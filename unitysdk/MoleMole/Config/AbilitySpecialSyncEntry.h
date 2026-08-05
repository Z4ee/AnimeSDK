#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177C3170)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x177C2D90)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x177C31D0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x177C2E10)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x177C34A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialSyncEntry_TypeDefinitionIndex = 56753;

	class AbilitySpecialSyncEntry : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AbilitySpecials; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
		}
	};
}
