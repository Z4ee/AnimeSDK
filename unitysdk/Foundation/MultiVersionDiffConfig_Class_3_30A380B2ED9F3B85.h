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

#define FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E9BBC30)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1E9BBC40)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85_WRITE_OFFSET UNITYSDK_OFFSET(0x1E9BBDD0)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BBF30)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BBEF0)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionDiffConfig_Class_3_30A380B2ED9F3B85_TypeDefinitionIndex = 7942;

	class MultiVersionDiffConfig_Class_3_30A380B2ED9F3B85 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::Foundation::MultiVersionDiffConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionInfo*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionDiffConfig_Class_3_30A380B2ED9F3B85_TypeDefinitionIndex)->GetStaticField(0x6730);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionErrorRef*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionErrorRef*>*>**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionDiffConfig_Class_3_30A380B2ED9F3B85_TypeDefinitionIndex)->GetStaticField(0x6738);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::Foundation::MultiVersionDiffConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::Foundation::MultiVersionDiffConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_CLASS_3_30A380B2ED9F3B85_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
