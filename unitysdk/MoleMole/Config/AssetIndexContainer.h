#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class AssetIndex; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116F4EB0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116F4BF0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_05E10F4A3388E492_OFFSET UNITYSDK_OFFSET(0x116F5300)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x116F5410)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_12AFB229059D08D7_OFFSET UNITYSDK_OFFSET(0x116F61F0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x116F4F10)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_1A27B6D09FE50326_OFFSET UNITYSDK_OFFSET(0x116F6D80)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_2A2408D9CB219D81_1_OFFSET UNITYSDK_OFFSET(0x116F6240)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_2A2408D9CB219D81_OFFSET UNITYSDK_OFFSET(0x116F5190)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_3096E66776FB7F38_OFFSET UNITYSDK_OFFSET(0x116F5F10)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x116F53A0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x116F4C70)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_66C47ED41C56178D_OFFSET UNITYSDK_OFFSET(0x116F8060)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_6FC404522D289D24_OFFSET UNITYSDK_OFFSET(0x116F6320)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_CA31659CE304C271_OFFSET UNITYSDK_OFFSET(0x116F5230)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_CA8263EA3545CDFF_OFFSET UNITYSDK_OFFSET(0x116F62D0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_CCB11C3744AAA431_OFFSET UNITYSDK_OFFSET(0x116F5450)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116F4AA0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x116F50F0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x116F50E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_TypeDefinitionIndex = 54203;

	class AssetIndexContainer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::System::ValueTuple_2<::System::UInt64, ::MoleMole::Config::AssetIndexContainer*>>** StaticGet_AssetIndexCacheDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::System::ValueTuple_2<::System::UInt64, ::MoleMole::Config::AssetIndexContainer*>>**)Il2CppClass::FromTypeDefinitionIndex(AssetIndexContainer_TypeDefinitionIndex)->GetStaticField(0x4F890);
		}
		// static const ::System::String* ASSET_INDEX_FILE_PREFIX; // 0x0
		::MoleMole::Config::AssetIndex* assetIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::System::String* Method_1_2A2408D9CB219D81(::Foundation::ResourceFileType a1)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_2A2408D9CB219D81_OFFSET))(a1);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_128774387667156B_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* Method_1_CCB11C3744AAA431(::MoleMole::Config::AssetIndexContainer* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::MoleMole::Config::AssetIndexContainer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_CCB11C3744AAA431_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* Method_1_3096E66776FB7F38(::System::IO::Stream* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_3096E66776FB7F38_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* Method_1_12AFB229059D08D7()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_12AFB229059D08D7_OFFSET))(this);
		}

		static ::System::String* Method_1_2A2408D9CB219D81_1(::Foundation::ResourceFileType a1)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_2A2408D9CB219D81_1_OFFSET))(a1);
		}

		::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
		}

		static ::System::String* Method_1_CA31659CE304C271(::Foundation::ResourceFileType a1)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_CA31659CE304C271_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_1_CA8263EA3545CDFF()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_CA8263EA3545CDFF_OFFSET))(this);
		}

		static ::MoleMole::Config::AssetIndexContainer* Method_1_6FC404522D289D24(::System::String* a1, ::Foundation::ResourceFileType a2, ::System::Boolean& a3)
		{
			return ((::MoleMole::Config::AssetIndexContainer*(*)(::System::String*, ::Foundation::ResourceFileType, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_6FC404522D289D24_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::System::Void Method_1_1A27B6D09FE50326(::Il2CppArray<::System::Byte>* a1, ::MoleMole::Config::AssetIndexContainer* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::MoleMole::Config::AssetIndexContainer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_1A27B6D09FE50326_OFFSET))(a1, a2);
		}

		::System::Void Method_1_66C47ED41C56178D(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_66C47ED41C56178D_OFFSET))(this, a1);
		}

		static ::System::String* Method_1_05E10F4A3388E492(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_05E10F4A3388E492_OFFSET))(a1);
		}
	};
}
