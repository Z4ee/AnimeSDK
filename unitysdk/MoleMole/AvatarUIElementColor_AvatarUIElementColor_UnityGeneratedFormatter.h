#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class AvatarUIElementColor; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE946CA0)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE946CB0)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE946E90)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE947040)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE947000)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColor_AvatarUIElementColor_UnityGeneratedFormatter_TypeDefinitionIndex = 64287;

	class AvatarUIElementColor_AvatarUIElementColor_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AvatarUIElementColor*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarUIElementColor_AvatarUIElementColor_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AD10);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(AvatarUIElementColor_AvatarUIElementColor_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AD18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarUIElementColor*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarUIElementColor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::AvatarUIElementColor*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarUIElementColor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_AVATARUIELEMENTCOLOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
