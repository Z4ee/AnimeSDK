#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXASSETREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172BC130)
#define MOLEMOLE_CONFIG_INDEXASSETREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172BBD90)
#define MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x172BC400)
#define MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0x172BC190)
#define MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x172BBE10)
#define MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_3FA063706A9B5149_OFFSET UNITYSDK_OFFSET(0x17295EF0)
#define MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_A8C27B239C77A1A6_OFFSET UNITYSDK_OFFSET(0x172BC440)
#define MOLEMOLE_CONFIG_INDEXASSETREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172BBA50)
#define MOLEMOLE_CONFIG_INDEXASSETREF__CTOR_OFFSET UNITYSDK_OFFSET(0x172BC3F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexAssetRef_TypeDefinitionIndex = 81867;

	class IndexAssetRef : public ::System::Object
	{
	public:
		::System::Int32 bundle; // 0x10
		::System::UInt64 pathHash; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_297EA0FD117460C4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_297EA0FD117460C4_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		::Foundation::AssetPath Method_1_3FA063706A9B5149()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_3FA063706A9B5149_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::Foundation::AssetPath Method_1_A8C27B239C77A1A6(::Il2CppArray<::System::String*>*& a1)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_METHOD_1_A8C27B239C77A1A6_OFFSET))(this, a1);
		}
	};
}
