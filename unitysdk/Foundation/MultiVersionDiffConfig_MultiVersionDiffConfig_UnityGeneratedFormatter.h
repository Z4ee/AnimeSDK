#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Foundation { class MultiVersionDiffConfig; }
namespace Foundation { class MultiVersionErrorRef; }
namespace Foundation { class MultiVersionInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E372780)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1E372790)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E372970)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E372B10)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E372AD0)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionDiffConfig_MultiVersionDiffConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 7739;

	class MultiVersionDiffConfig_MultiVersionDiffConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::Foundation::MultiVersionDiffConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionErrorRef*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionErrorRef*>*>**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionDiffConfig_MultiVersionDiffConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x7490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionInfo*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionDiffConfig_MultiVersionDiffConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x7498);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::Foundation::MultiVersionDiffConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::Foundation::MultiVersionDiffConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_MULTIVERSIONDIFFCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
