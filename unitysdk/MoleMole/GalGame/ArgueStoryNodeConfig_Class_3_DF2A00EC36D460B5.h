#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ArgueGeneralUIStateConfig; }
namespace MoleMole::GalGame { class ArgueSplitScreenMoveConfig; }
namespace MoleMole::GalGame { class ArgueStoryNodeConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149E9370)
#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149E9380)
#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5_WRITE_OFFSET UNITYSDK_OFFSET(0x149E9510)
#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x149E9670)
#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5__CTOR_OFFSET UNITYSDK_OFFSET(0x149E9630)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueStoryNodeConfig_Class_3_DF2A00EC36D460B5_TypeDefinitionIndex = 53458;

	class ArgueStoryNodeConfig_Class_3_DF2A00EC36D460B5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::ArgueStoryNodeConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::ArgueGeneralUIStateConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::ArgueGeneralUIStateConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ArgueStoryNodeConfig_Class_3_DF2A00EC36D460B5_TypeDefinitionIndex)->GetStaticField(0x32670);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueSplitScreenMoveConfig*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueSplitScreenMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ArgueStoryNodeConfig_Class_3_DF2A00EC36D460B5_TypeDefinitionIndex)->GetStaticField(0x32678);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ArgueStoryNodeConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ArgueStoryNodeConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::ArgueStoryNodeConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ArgueStoryNodeConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_CLASS_3_DF2A00EC36D460B5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
