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

#define MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16459650)
#define MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16459660)
#define MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1645A500)
#define MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1645AD80)
#define MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1645AD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 66899;

	class UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarCameraSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::CameraOverrideOption>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::CameraOverrideOption>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43800);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43808);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraRotType>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraRotType>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43810);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43818);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43820);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Rect>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43828);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43830);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraChangeType*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraChangeType*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_UIAvatarCameraSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43838);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarCameraSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIAvatarCameraSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_UIAVATARCAMERASETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
