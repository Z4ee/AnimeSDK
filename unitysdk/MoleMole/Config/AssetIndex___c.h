#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IndexAssetRef; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_ASSETINDEX___C_METHOD_1_130AE7FAA8C8CA98_OFFSET UNITYSDK_OFFSET(0x1B5447A0)
#define MOLEMOLE_CONFIG_ASSETINDEX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B544750)
#define MOLEMOLE_CONFIG_ASSETINDEX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B544790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndex___c_TypeDefinitionIndex = 56059;

	class AssetIndex___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::MoleMole::Config::IndexAssetRef*, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::MoleMole::Config::IndexAssetRef*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetIndex___c_TypeDefinitionIndex)->GetStaticField(0x3F5E0);
		}
		static ::MoleMole::Config::AssetIndex___c** StaticGet___9()
		{
			return (::MoleMole::Config::AssetIndex___c**)Il2CppClass::FromTypeDefinitionIndex(AssetIndex___c_TypeDefinitionIndex)->GetStaticField(0x3F5E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_130AE7FAA8C8CA98(::MoleMole::Config::IndexAssetRef* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Config::IndexAssetRef*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX___C_METHOD_1_130AE7FAA8C8CA98_OFFSET))(this, a1);
		}
	};
}
