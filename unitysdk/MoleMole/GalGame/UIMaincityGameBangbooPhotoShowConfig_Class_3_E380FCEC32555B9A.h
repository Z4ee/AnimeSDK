#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class UIMaincityGameBangbooPhotoShowConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A8020)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A8030)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A_WRITE_OFFSET UNITYSDK_OFFSET(0x136A8340)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A8560)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x136A8520)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int UIMaincityGameBangbooPhotoShowConfig_Class_3_E380FCEC32555B9A_TypeDefinitionIndex = 80128;

	class UIMaincityGameBangbooPhotoShowConfig_Class_3_E380FCEC32555B9A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_Class_3_E380FCEC32555B9A_TypeDefinitionIndex)->GetStaticField(0x4D6C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_Class_3_E380FCEC32555B9A_TypeDefinitionIndex)->GetStaticField(0x4D6C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_Class_3_E380FCEC32555B9A_TypeDefinitionIndex)->GetStaticField(0x4D6D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameBangbooPhotoShowConfig_Class_3_E380FCEC32555B9A_TypeDefinitionIndex)->GetStaticField(0x4D6D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameBangbooPhotoShowConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_CLASS_3_E380FCEC32555B9A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
