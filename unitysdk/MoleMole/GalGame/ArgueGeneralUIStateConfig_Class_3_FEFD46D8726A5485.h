#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ArgueGeneralUIState.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ArgueGeneralUIStateConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DBBB80)
#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DBBB90)
#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485_WRITE_OFFSET UNITYSDK_OFFSET(0x19DBBD20)
#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBBE80)
#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBBE40)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueGeneralUIStateConfig_Class_3_FEFD46D8726A5485_TypeDefinitionIndex = 66175;

	class ArgueGeneralUIStateConfig_Class_3_FEFD46D8726A5485 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::ArgueGeneralUIStateConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ArgueGeneralUIStateConfig_Class_3_FEFD46D8726A5485_TypeDefinitionIndex)->GetStaticField(0x4C220);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueGeneralUIState>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ArgueGeneralUIState>**)Il2CppClass::FromTypeDefinitionIndex(ArgueGeneralUIStateConfig_Class_3_FEFD46D8726A5485_TypeDefinitionIndex)->GetStaticField(0x4C228);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ArgueGeneralUIStateConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ArgueGeneralUIStateConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::ArgueGeneralUIStateConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ArgueGeneralUIStateConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_CLASS_3_FEFD46D8726A5485_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
