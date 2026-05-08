#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class IndexAssetRef; }
namespace MoleMole::Config { class IndexBlockRef; }
namespace MoleMole::Config { class IndexBundleRef; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ASSETINDEX_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x122FB300)
#define MOLEMOLE_CONFIG_ASSETINDEX_FROMFLX_OFFSET UNITYSDK_OFFSET(0x122FADB0)
#define MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x122FAE30)
#define MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x122FB620)
#define MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_207EA35309D0E29E_OFFSET UNITYSDK_OFFSET(0x122FB660)
#define MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_4E5B1AF2427E61CE_OFFSET UNITYSDK_OFFSET(0x122FB8B0)
#define MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_C68CB15A07D0E2EF_OFFSET UNITYSDK_OFFSET(0x122FB360)
#define MOLEMOLE_CONFIG_ASSETINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x122FA7F0)
#define MOLEMOLE_CONFIG_ASSETINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x122FB610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndex_TypeDefinitionIndex = 47742;

	class AssetIndex : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::IndexAssetRef*>* assets; // 0x10
		::Il2CppArray<::MoleMole::Config::IndexBundleRef*>* bundles; // 0x18
		::Il2CppArray<::MoleMole::Config::IndexBlockRef*>* blocks; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_0CB3D614A4DB34A1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_1_207EA35309D0E29E()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_207EA35309D0E29E_OFFSET))(this);
		}

		::System::Boolean Method_1_C68CB15A07D0E2EF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_C68CB15A07D0E2EF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* Method_1_4E5B1AF2427E61CE()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_METHOD_1_4E5B1AF2427E61CE_OFFSET))(this);
		}
	};
}
