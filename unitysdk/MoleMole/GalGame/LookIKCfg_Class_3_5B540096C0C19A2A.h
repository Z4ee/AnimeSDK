#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatIKType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class LookIKCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A4AE0)
#define MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A4AF0)
#define MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A_WRITE_OFFSET UNITYSDK_OFFSET(0x136A4F40)
#define MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A5210)
#define MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A__CTOR_OFFSET UNITYSDK_OFFSET(0x136A51D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int LookIKCfg_Class_3_5B540096C0C19A2A_TypeDefinitionIndex = 56292;

	class LookIKCfg_Class_3_5B540096C0C19A2A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::LookIKCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatIKType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatIKType>**)Il2CppClass::FromTypeDefinitionIndex(LookIKCfg_Class_3_5B540096C0C19A2A_TypeDefinitionIndex)->GetStaticField(0x4D5E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LookIKCfg_Class_3_5B540096C0C19A2A_TypeDefinitionIndex)->GetStaticField(0x4D5E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LookIKCfg_Class_3_5B540096C0C19A2A_TypeDefinitionIndex)->GetStaticField(0x4D5F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LookIKCfg_Class_3_5B540096C0C19A2A_TypeDefinitionIndex)->GetStaticField(0x4D5F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::LookIKCfg*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::LookIKCfg*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_CLASS_3_5B540096C0C19A2A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
