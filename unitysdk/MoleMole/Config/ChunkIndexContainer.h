#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ChunkIndex; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x122FF570)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x122FF2A0)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x122FF7B0)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x122FF5D0)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_39F8E53C91EAFE69_OFFSET UNITYSDK_OFFSET(0x122FF7F0)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x122FF320)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_CA31659CE304C271_OFFSET UNITYSDK_OFFSET(0x122FFCF0)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x122FF150)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x122FF7A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChunkIndexContainer_TypeDefinitionIndex = 80543;

	class ChunkIndexContainer : public ::System::Object
	{
	public:
		::MoleMole::Config::ChunkIndex* chunkIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ChunkIndexContainer* Method_1_39F8E53C91EAFE69(::System::String* a1)
		{
			return ((::MoleMole::Config::ChunkIndexContainer*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_39F8E53C91EAFE69_OFFSET))(a1);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::System::String* Method_1_CA31659CE304C271(::Foundation::ResourceFileType a1)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_METHOD_1_CA31659CE304C271_OFFSET))(a1);
		}
	};
}
