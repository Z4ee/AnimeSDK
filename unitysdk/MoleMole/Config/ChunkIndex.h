#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class IndexChunkRef; }
namespace MoleMole::Config { class IndexFileRef; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHUNKINDEX_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D32480)
#define MOLEMOLE_CONFIG_CHUNKINDEX_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D32080)
#define MOLEMOLE_CONFIG_CHUNKINDEX_METHOD_1_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x12D32100)
#define MOLEMOLE_CONFIG_CHUNKINDEX_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12D32720)
#define MOLEMOLE_CONFIG_CHUNKINDEX_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x12D324E0)
#define MOLEMOLE_CONFIG_CHUNKINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12D31CA0)
#define MOLEMOLE_CONFIG_CHUNKINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x12D32710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChunkIndex_TypeDefinitionIndex = 67977;

	class ChunkIndex : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::IndexFileRef*>* files; // 0x10
		::Il2CppArray<::MoleMole::Config::IndexChunkRef*>* chunks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_METHOD_1_0CB3D614A4DB34A1_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
		}
	};
}
