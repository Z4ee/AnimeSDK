#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D6B8F0)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D6B530)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17D6BB00)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x17D6B5B0)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_METHOD_1_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0x17D6B950)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D6B1F0)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6BAF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexChunkRef_TypeDefinitionIndex = 58227;

	class IndexChunkRef : public ::System::Object
	{
	public:
		::System::UInt64 chunkHash; // 0x10
		::System::UInt32 fileSize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_METHOD_1_9144040ECD391705_OFFSET))(this, a1, a2);
		}
	};
}
