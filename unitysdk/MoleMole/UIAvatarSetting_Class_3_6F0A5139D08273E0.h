#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIAvatarSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18956360)
#define MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18956370)
#define MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0_WRITE_OFFSET UNITYSDK_OFFSET(0x189566A0)
#define MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x189568E0)
#define MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0__CTOR_OFFSET UNITYSDK_OFFSET(0x189568A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSetting_Class_3_6F0A5139D08273E0_TypeDefinitionIndex = 84149;

	class UIAvatarSetting_Class_3_6F0A5139D08273E0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarSetting_Class_3_6F0A5139D08273E0_TypeDefinitionIndex)->GetStaticField(0x32AE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarSetting_Class_3_6F0A5139D08273E0_TypeDefinitionIndex)->GetStaticField(0x32AE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarSetting_Class_3_6F0A5139D08273E0_TypeDefinitionIndex)->GetStaticField(0x32AF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIAvatarSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_CLASS_3_6F0A5139D08273E0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
