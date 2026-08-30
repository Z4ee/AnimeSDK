#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_910822CB5E4FEDEB_Class_1_5E2F6DA9758C1430;
namespace RPG::Client { class RegionVolume; }
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_910822CB5E4FEDEB_METHOD_1_11B5E81B00AC122A_OFFSET UNITYSDK_OFFSET(0x188A19D0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_2938A513B472FDE6_OFFSET UNITYSDK_OFFSET(0x188A1B40)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_37B0C889D3BCA15C_OFFSET UNITYSDK_OFFSET(0x188A5130)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_44F7A41A37B68454_OFFSET UNITYSDK_OFFSET(0x188A1C70)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_4E96DABAAA2DEE85_OFFSET UNITYSDK_OFFSET(0x188A2030)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_5031166A21FEF1E8_OFFSET UNITYSDK_OFFSET(0x188A1E80)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_664222BCF379D634_OFFSET UNITYSDK_OFFSET(0x188A4790)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_67D55B0E86233209_OFFSET UNITYSDK_OFFSET(0x188A4880)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_6DD94847E2098246_OFFSET UNITYSDK_OFFSET(0x188A21C0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_729D817C512DA11F_OFFSET UNITYSDK_OFFSET(0x188A4800)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_893B308297FB2272_OFFSET UNITYSDK_OFFSET(0x188A29B0)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_BC2BB01F59BD67F8_OFFSET UNITYSDK_OFFSET(0x188A2320)
#define CLASS_1_910822CB5E4FEDEB_METHOD_1_CFB6C0E919AC0DEC_OFFSET UNITYSDK_OFFSET(0x188A42A0)

inline static constexpr unsigned int Class_1_910822CB5E4FEDEB_TypeDefinitionIndex = 62254;

class Class_1_910822CB5E4FEDEB : public ::System::Object
{
public:
	static ::System::Void Method_1_11B5E81B00AC122A(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_11B5E81B00AC122A_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_2938A513B472FDE6(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_2938A513B472FDE6_OFFSET))(a1);
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

	static ::System::Boolean Method_1_BC2BB01F59BD67F8(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_BC2BB01F59BD67F8_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_893B308297FB2272(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::Class_1_910822CB5E4FEDEB_Class_1_5E2F6DA9758C1430*& a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::Class_1_910822CB5E4FEDEB_Class_1_5E2F6DA9758C1430*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_893B308297FB2272_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_CFB6C0E919AC0DEC(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_CFB6C0E919AC0DEC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_664222BCF379D634(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_664222BCF379D634_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_729D817C512DA11F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_729D817C512DA11F_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_67D55B0E86233209(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_67D55B0E86233209_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_37B0C889D3BCA15C(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Int32(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_METHOD_1_37B0C889D3BCA15C_OFFSET))(a1, a2, a3);
	}
};
