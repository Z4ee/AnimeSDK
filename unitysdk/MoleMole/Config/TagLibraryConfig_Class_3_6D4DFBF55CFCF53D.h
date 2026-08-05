#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BA0390)
#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA03A0)
#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D_WRITE_OFFSET UNITYSDK_OFFSET(0x19BA0530)
#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA0690)
#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA0650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TagLibraryConfig_Class_3_6D4DFBF55CFCF53D_TypeDefinitionIndex = 55353;

	class TagLibraryConfig_Class_3_6D4DFBF55CFCF53D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::TagLibraryConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(TagLibraryConfig_Class_3_6D4DFBF55CFCF53D_TypeDefinitionIndex)->GetStaticField(0x48980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::TagLibraryConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::TagLibraryConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_CLASS_3_6D4DFBF55CFCF53D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
