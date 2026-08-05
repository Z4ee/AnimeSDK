#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_STRINGBOOLPAIR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x802970)
#define MOLEMOLE_CONFIG_STRINGBOOLPAIR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8028E0)
#define MOLEMOLE_CONFIG_STRINGBOOLPAIR_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x8029D0)
#define MOLEMOLE_CONFIG_STRINGBOOLPAIR_METHOD_2_F777B3BEDBE68D53_OFFSET UNITYSDK_OFFSET(0x802A00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StringBoolPair_TypeDefinitionIndex = 59622;

	struct alignas(8) StringBoolPair
	{
		::System::String* Key; // 0x10
		::System::Boolean Value; // 0x18

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STRINGBOOLPAIR_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STRINGBOOLPAIR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STRINGBOOLPAIR_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_F777B3BEDBE68D53(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STRINGBOOLPAIR_METHOD_2_F777B3BEDBE68D53_OFFSET))(this, a1, a2);
		}
	};
}
