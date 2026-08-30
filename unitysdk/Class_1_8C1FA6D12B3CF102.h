#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/OutlinePost/TrainPartyBuildOutlineState.h"
#include "unitysdk/System/Object.h"

class Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404;
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_1_8C1FA6D12B3CF102_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15777860)
#define CLASS_1_8C1FA6D12B3CF102_METHOD_1_3360767BB2C4A5D4_OFFSET UNITYSDK_OFFSET(0x15777B20)
#define CLASS_1_8C1FA6D12B3CF102_METHOD_1_7698449B1E4FFB67_OFFSET UNITYSDK_OFFSET(0x15777410)
#define CLASS_1_8C1FA6D12B3CF102_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x157778E0)
#define CLASS_1_8C1FA6D12B3CF102_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15777A60)
#define CLASS_1_8C1FA6D12B3CF102_METHOD_1_BCAE7F7048277762_OFFSET UNITYSDK_OFFSET(0x15777800)
#define CLASS_1_8C1FA6D12B3CF102_METHOD_1_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x15777930)
#define CLASS_1_8C1FA6D12B3CF102__CCTOR_OFFSET UNITYSDK_OFFSET(0x15777D00)
#define CLASS_1_8C1FA6D12B3CF102__CTOR_OFFSET UNITYSDK_OFFSET(0x157772E0)

inline static constexpr unsigned int Class_1_8C1FA6D12B3CF102_TypeDefinitionIndex = 74272;

class Class_1_8C1FA6D12B3CF102 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DPOBOPKPMHI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C1FA6D12B3CF102_TypeDefinitionIndex)->GetStaticField(0x38940);
	}
	::Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404* JJBOPOPCOCH; // 0x10
	::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* FJECIBLPPIJ; // 0x18
	::Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404* AOKKCIPBODJ; // 0x20
	::Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404* LKGBNJEFHLB; // 0x28
	::UnityEngine::Material* NCNJEKDLNEN; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* ABAJIOEFDFB; // 0x38
	::UnityEngine::GameObject* GHKKPFEJLBP; // 0x40
	::UnityEngine::MeshRenderer* JAMDAALMOAL; // 0x48
	::System::Boolean AABHPGANPJG; // 0x50

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::MeshRenderer* a2, ::UnityEngine::Material* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3360767BB2C4A5D4(::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_METHOD_1_3360767BB2C4A5D4_OFFSET))(this, a1);
	}

	::Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404* Method_1_BCAE7F7048277762(::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState a1)
	{
		return ((::Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404*(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_METHOD_1_BCAE7F7048277762_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7698449B1E4FFB67(::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_METHOD_1_7698449B1E4FFB67_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_1_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_METHOD_1_F74441856239DF08_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
