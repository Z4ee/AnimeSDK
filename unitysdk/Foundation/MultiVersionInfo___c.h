#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionInfo_CheckAssetPathDelegate; }
namespace System { class String; }

#define FOUNDATION_MULTIVERSIONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6974C0)
#define FOUNDATION_MULTIVERSIONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F697500)
#define FOUNDATION_MULTIVERSIONINFO___C__ISALLNOTNULLOREMPTY_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F6975B0)
#define FOUNDATION_MULTIVERSIONINFO___C__ISSUFFIXCORRECT_B__17_0_OFFSET UNITYSDK_OFFSET(0x1F697650)
#define FOUNDATION_MULTIVERSIONINFO___C__ISVALID_B__15_0_OFFSET UNITYSDK_OFFSET(0x1F697510)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo___c_TypeDefinitionIndex = 8240;

	class MultiVersionInfo___c : public ::System::Object
	{
	public:
		static ::Foundation::MultiVersionInfo_CheckAssetPathDelegate** StaticGet___9__17_0()
		{
			return (::Foundation::MultiVersionInfo_CheckAssetPathDelegate**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionInfo___c_TypeDefinitionIndex)->GetStaticField(0x7030);
		}
		static ::Foundation::MultiVersionInfo_CheckAssetPathDelegate** StaticGet___9__15_0()
		{
			return (::Foundation::MultiVersionInfo_CheckAssetPathDelegate**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionInfo___c_TypeDefinitionIndex)->GetStaticField(0x7038);
		}
		static ::Foundation::MultiVersionInfo_CheckAssetPathDelegate** StaticGet___9__16_0()
		{
			return (::Foundation::MultiVersionInfo_CheckAssetPathDelegate**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionInfo___c_TypeDefinitionIndex)->GetStaticField(0x7040);
		}
		static ::Foundation::MultiVersionInfo___c** StaticGet___9()
		{
			return (::Foundation::MultiVersionInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionInfo___c_TypeDefinitionIndex)->GetStaticField(0x7048);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsValid_b__15_0(::System::String* path, ::Foundation::MultiVer type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__ISVALID_B__15_0_OFFSET))(this, path, type);
		}

		::System::Boolean _IsAllNOTNullOrEmpty_b__16_0(::System::String* path, ::Foundation::MultiVer type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__ISALLNOTNULLOREMPTY_B__16_0_OFFSET))(this, path, type);
		}

		::System::Boolean _IsSuffixCorrect_b__17_0(::System::String* path, ::Foundation::MultiVer multiVerType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__ISSUFFIXCORRECT_B__17_0_OFFSET))(this, path, multiVerType);
		}
	};
}
