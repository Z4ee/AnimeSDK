#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class UIAvatarLightSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1928DF80)
#define MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1928DF90)
#define MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1_WRITE_OFFSET UNITYSDK_OFFSET(0x1928EC90)
#define MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1928F490)
#define MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1928F450)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex = 48502;

	class UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarLightSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A48);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Cubemap*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Cubemap*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A50);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightChangeSettings>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightChangeSettings>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A68);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A70);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_Class_3_7C89E7175BCEB9B1_TypeDefinitionIndex)->GetStaticField(0x51A78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarLightSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIAvatarLightSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_CLASS_3_7C89E7175BCEB9B1_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
