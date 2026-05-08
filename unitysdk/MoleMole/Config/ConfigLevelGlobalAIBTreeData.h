#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1241E710)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1241DFA0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_METHOD_1_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0x1241E770)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1241E020)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1241ED50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelGlobalAIBTreeData_TypeDefinitionIndex = 68814;

	class ConfigLevelGlobalAIBTreeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatItems; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolItems; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* StringItems; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_METHOD_1_C7F9ED430E054F62_OFFSET))(this, a1, a2);
		}
	};
}
