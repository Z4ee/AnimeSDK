#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::GalGame { class MainCityChatCameraParamFixed; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118C6CA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118C6CB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813_WRITE_OFFSET UNITYSDK_OFFSET(0x118C6F30)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813__CCTOR_OFFSET UNITYSDK_OFFSET(0x118C7120)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813__CTOR_OFFSET UNITYSDK_OFFSET(0x118C70E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamFixed_Class_3_0D21152D1D6F3813_TypeDefinitionIndex = 85800;

	class MainCityChatCameraParamFixed_Class_3_0D21152D1D6F3813 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCameraParamFixed*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCameraParamFixed_Class_3_0D21152D1D6F3813_TypeDefinitionIndex)->GetStaticField(0x3CB20);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCameraParamFixed_Class_3_0D21152D1D6F3813_TypeDefinitionIndex)->GetStaticField(0x3CB28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCameraParamFixed*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamFixed*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCameraParamFixed*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamFixed*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_CLASS_3_0D21152D1D6F3813_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
