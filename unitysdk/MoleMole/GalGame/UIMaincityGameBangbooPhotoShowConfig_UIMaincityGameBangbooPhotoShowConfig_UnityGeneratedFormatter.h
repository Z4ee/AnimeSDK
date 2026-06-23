#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class UIMaincityGameBangbooPhotoShowConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x151302F0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15130300)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15130650)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x151308A0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15130860)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int UIMaincityGameBangbooPhotoShowConfig_UIMaincityGameBangbooPhotoShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 71564;

	class UIMaincityGameBangbooPhotoShowConfig_UIMaincityGameBangbooPhotoShowConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_UIMaincityGameBangbooPhotoShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41120);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_UIMaincityGameBangbooPhotoShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41128);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_UIMaincityGameBangbooPhotoShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41130);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_UIMaincityGameBangbooPhotoShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41138);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
