#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1494ACD0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1494A310)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1494B0E0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1494A390)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_METHOD_1_4ECA99273B8D9FC8_OFFSET UNITYSDK_OFFSET(0x1494AD30)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14949AA0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1494B0D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBundleRef_TypeDefinitionIndex = 70271;

	class IndexBundleRef : public ::System::Object
	{
	public:
		::System::UInt32 blockIndex; // 0x10
		::System::UInt64 bundleHashName; // 0x18
		::System::UInt64 bundleHash; // 0x20
		::System::UInt32 offset; // 0x28
		::Il2CppArray<::System::Int32>* children; // 0x30
		::System::UInt32 fileSize; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4ECA99273B8D9FC8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_METHOD_1_4ECA99273B8D9FC8_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}
	};
}
