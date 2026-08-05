#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCFadeAction_FadeType.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A2EF0)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A2F00)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6_WRITE_OFFSET UNITYSDK_OFFSET(0x136A37C0)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A3D00)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6__CTOR_OFFSET UNITYSDK_OFFSET(0x136A3CC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex = 68239;

	class GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGameNPCFadeAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D570);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D578);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D580);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D588);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D590);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameNPCFadeAction_FadeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameNPCFadeAction_FadeType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D598);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D5A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_Class_3_FF999C04FF26B9B6_TypeDefinitionIndex)->GetStaticField(0x4D5A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameNPCFadeAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCFadeAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameNPCFadeAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCFadeAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_CLASS_3_FF999C04FF26B9B6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
