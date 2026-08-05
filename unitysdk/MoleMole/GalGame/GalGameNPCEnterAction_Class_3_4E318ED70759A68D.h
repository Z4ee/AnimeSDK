#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameNPCEnterAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DBC390)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DBC3A0)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D_WRITE_OFFSET UNITYSDK_OFFSET(0x19DBCBC0)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBD0A0)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBD060)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex = 65198;

	class GalGameNPCEnterAction_Class_3_4E318ED70759A68D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGameNPCEnterAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex)->GetStaticField(0x4C240);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex)->GetStaticField(0x4C248);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex)->GetStaticField(0x4C250);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex)->GetStaticField(0x4C258);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex)->GetStaticField(0x4C260);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex)->GetStaticField(0x4C268);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_Class_3_4E318ED70759A68D_TypeDefinitionIndex)->GetStaticField(0x4C270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameNPCEnterAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameNPCEnterAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_CLASS_3_4E318ED70759A68D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
