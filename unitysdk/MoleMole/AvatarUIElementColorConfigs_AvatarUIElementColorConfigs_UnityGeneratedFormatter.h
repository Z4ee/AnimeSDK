#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarUIElementColor; }
namespace MoleMole { class AvatarUIElementColorConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x134681D0)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x134681E0)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13468310)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13468450)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13468410)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColorConfigs_AvatarUIElementColorConfigs_UnityGeneratedFormatter_TypeDefinitionIndex = 44397;

	class AvatarUIElementColorConfigs_AvatarUIElementColorConfigs_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AvatarUIElementColorConfigs*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarUIElementColorConfigs_AvatarUIElementColorConfigs_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40B20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarUIElementColorConfigs*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarUIElementColorConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::AvatarUIElementColorConfigs*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarUIElementColorConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_AVATARUIELEMENTCOLORCONFIGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
