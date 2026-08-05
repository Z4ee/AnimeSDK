#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B564590)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B5641F0)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B564850)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_METHOD_1_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x1B5645F0)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_METHOD_1_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x1B564270)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B563EB0)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B564840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBlockRef_TypeDefinitionIndex = 75993;

	class IndexBlockRef : public ::System::Object
	{
	public:
		::System::UInt64 blockHashName; // 0x10
		::System::Byte location; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_METHOD_1_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_METHOD_1_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_METHOD_1_128774387667156B_OFFSET))(this);
		}
	};
}
