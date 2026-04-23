#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_910822CB5E4FEDEB_Class_1_0424B7065E7B9A4F;
namespace RPG::Client { class RegionVolume; }
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_910822CB5E4FEDEB_METHOD_1_37B0C889D3BCA15C_OFFSET UNITYSDK_OFFSET(0x94FB6C0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_37EC7E2CB9BA039F_OFFSET UNITYSDK_OFFSET(0x94F87A0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_44F7A41A37B68454_OFFSET UNITYSDK_OFFSET(0x94F80F0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_4E96DABAAA2DEE85_OFFSET UNITYSDK_OFFSET(0x94F84B0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_5031166A21FEF1E8_OFFSET UNITYSDK_OFFSET(0x94F8300)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_664222BCF379D634_OFFSET UNITYSDK_OFFSET(0x94FAB50)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_66709245B767A504_OFFSET UNITYSDK_OFFSET(0x94F8EA0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_6DD94847E2098246_OFFSET UNITYSDK_OFFSET(0x94F8640)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_729D817C512DA11F_OFFSET UNITYSDK_OFFSET(0x94FABC0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_8BAA577C74A95AB7_OFFSET UNITYSDK_OFFSET(0x94FA6B0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_C214D07776921FE2_OFFSET UNITYSDK_OFFSET(0x94F8000)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_ECB8B055A6E32BBF_OFFSET UNITYSDK_OFFSET(0x94F7EC0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_EEC83F6782632FB7_OFFSET UNITYSDK_OFFSET(0x94FAC40)

inline static constexpr unsigned int Class_1_910822CB5E4FEDEB_TypeDefinitionIndex = 57347;

class Class_1_910822CB5E4FEDEB : public ::System::Object
{
public:
	static ::System::Void Method_1_ECB8B055A6E32BBF(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_ECB8B055A6E32BBF_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_C214D07776921FE2(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_C214D07776921FE2_OFFSET))(a1);
	}

	static ::RPG::Client::RuntimeRegionVolume* Method_1_44F7A41A37B68454(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::GameObject* a4, ::System::String* a5)
	{
		return ((::RPG::Client::RuntimeRegionVolume*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_44F7A41A37B68454_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::RuntimeRegionVolume* Method_1_5031166A21FEF1E8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::UnityEngine::GameObject* a5, ::System::String* a6)
	{
		return ((::RPG::Client::RuntimeRegionVolume*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_5031166A21FEF1E8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::Client::RuntimeRegionVolume* Method_1_4E96DABAAA2DEE85(::RPG::GameCore::StageVolumeConfigV2* a1, ::UnityEngine::Transform* a2, ::System::String* a3)
	{
		return ((::RPG::Client::RuntimeRegionVolume*(*)(::RPG::GameCore::StageVolumeConfigV2*, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_4E96DABAAA2DEE85_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::RuntimeRegionVolume* Method_1_6DD94847E2098246(::RPG::GameCore::StageVolumeConfigV2* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::RPG::Client::RuntimeRegionVolume*(*)(::RPG::GameCore::StageVolumeConfigV2*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_6DD94847E2098246_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_37EC7E2CB9BA039F(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_37EC7E2CB9BA039F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_66709245B767A504(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::Class_1_910822CB5E4FEDEB_Class_1_0424B7065E7B9A4F*& a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::Class_1_910822CB5E4FEDEB_Class_1_0424B7065E7B9A4F*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_66709245B767A504_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8BAA577C74A95AB7(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_8BAA577C74A95AB7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_664222BCF379D634(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_664222BCF379D634_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_729D817C512DA11F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_729D817C512DA11F_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_EEC83F6782632FB7(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_EEC83F6782632FB7_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_37B0C889D3BCA15C(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Int32(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_37B0C889D3BCA15C_OFFSET))(a1, a2, a3);
	}
};
