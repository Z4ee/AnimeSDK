#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ArgueScreenShiftMode.h"
#include "unitysdk/MoleMole/GalGame/DoubleScreenShiftState.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ArgueSplitScreenMoveConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DBBF00)
#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DBBF10)
#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA_WRITE_OFFSET UNITYSDK_OFFSET(0x19DBC0A0)
#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBC200)
#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBC1C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueSplitScreenMoveConfig_Class_3_E99676926A96A2DA_TypeDefinitionIndex = 70871;

	class ArgueSplitScreenMoveConfig_Class_3_E99676926A96A2DA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::ArgueSplitScreenMoveConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueScreenShiftMode>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueScreenShiftMode>**)Il2CppClass::FromTypeDefinitionIndex(ArgueSplitScreenMoveConfig_Class_3_E99676926A96A2DA_TypeDefinitionIndex)->GetStaticField(0x4C230);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::DoubleScreenShiftState>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::DoubleScreenShiftState>**)Il2CppClass::FromTypeDefinitionIndex(ArgueSplitScreenMoveConfig_Class_3_E99676926A96A2DA_TypeDefinitionIndex)->GetStaticField(0x4C238);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ArgueSplitScreenMoveConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ArgueSplitScreenMoveConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::ArgueSplitScreenMoveConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ArgueSplitScreenMoveConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_CLASS_3_E99676926A96A2DA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
