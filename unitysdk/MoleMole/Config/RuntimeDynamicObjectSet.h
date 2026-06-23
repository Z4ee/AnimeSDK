#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/RuntimeSetMemberData.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x879370)
#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8792E0)
#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_METHOD_2_B9F93B03B69BDD87_OFFSET UNITYSDK_OFFSET(0x8793D0)
#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x8793E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RuntimeDynamicObjectSet_TypeDefinitionIndex = 73881;

	struct alignas(8) RuntimeDynamicObjectSet
	{
		::System::String* setNameId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimeSetMemberData>* setMembers; // 0x18

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_B9F93B03B69BDD87(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_METHOD_2_B9F93B03B69BDD87_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}
