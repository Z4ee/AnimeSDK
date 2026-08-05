#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_A6E47B602565A201;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXFILEREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E8910)
#define MOLEMOLE_CONFIG_INDEXFILEREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E8580)
#define MOLEMOLE_CONFIG_INDEXFILEREF_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B4E8B70)
#define MOLEMOLE_CONFIG_INDEXFILEREF_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x1B4E8600)
#define MOLEMOLE_CONFIG_INDEXFILEREF_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x1B4E8970)
#define MOLEMOLE_CONFIG_INDEXFILEREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B4E8130)
#define MOLEMOLE_CONFIG_INDEXFILEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E8B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexFileRef_TypeDefinitionIndex = 82959;

	class IndexFileRef : public ::System::Object
	{
	public:
		::System::UInt64 fileHash; // 0x10
		::Il2CppArray<::Class_1_A6E47B602565A201*>* chunks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
		}
	};
}
