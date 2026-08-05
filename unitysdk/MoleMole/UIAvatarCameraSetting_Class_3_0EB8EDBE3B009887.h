#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraRotType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraChangeType; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192FA4E0)
#define MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192FA4F0)
#define MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887_WRITE_OFFSET UNITYSDK_OFFSET(0x192FB2F0)
#define MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887__CCTOR_OFFSET UNITYSDK_OFFSET(0x192FBB50)
#define MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887__CTOR_OFFSET UNITYSDK_OFFSET(0x192FBB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex = 62664;

	class UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarCameraSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4AB70);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraRotType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraRotType>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4AB78);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4AB80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraChangeType*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraChangeType*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4AB88);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::CameraOverrideOption>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::CameraOverrideOption>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4AB90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4AB98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4ABA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Rect>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_Class_3_0EB8EDBE3B009887_TypeDefinitionIndex)->GetStaticField(0x4ABA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarCameraSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIAvatarCameraSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_CLASS_3_0EB8EDBE3B009887_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
