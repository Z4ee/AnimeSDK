#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8D9090)
#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8D9000)
#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x8D90F0)
#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_METHOD_2_E4D020DE71A7D4FC_OFFSET UNITYSDK_OFFSET(0x8D9120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RuntimeSetMemberData_TypeDefinitionIndex = 52824;

	struct alignas(8) RuntimeSetMemberData
	{
		::System::String* nameId; // 0x10
		::System::Collections::Generic::List_1<::System::Boolean>* activeStates; // 0x18

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_E4D020DE71A7D4FC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_METHOD_2_E4D020DE71A7D4FC_OFFSET))(this, a1, a2);
		}
	};
}
