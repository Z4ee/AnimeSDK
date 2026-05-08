#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D1E36A18B0B6134C;
class Class_3_1309C27AF04ABEA2;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_4104D55F3637796D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1142D2F0)
#define CLASS_3_4104D55F3637796D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1142D680)
#define CLASS_3_4104D55F3637796D_METHOD_3_3D176F1649D10EB8_OFFSET UNITYSDK_OFFSET(0x1142E4C0)
#define CLASS_3_4104D55F3637796D_METHOD_3_4585497DA4AAA148_OFFSET UNITYSDK_OFFSET(0x1142EAD0)
#define CLASS_3_4104D55F3637796D_METHOD_3_575A4B17257752F2_OFFSET UNITYSDK_OFFSET(0x1142FBD0)
#define CLASS_3_4104D55F3637796D_METHOD_3_9730B29A129ACD76_OFFSET UNITYSDK_OFFSET(0x11430810)
#define CLASS_3_4104D55F3637796D_METHOD_3_AD826B25465D0838_OFFSET UNITYSDK_OFFSET(0x1142F500)
#define CLASS_3_4104D55F3637796D_METHOD_3_B298CA29795F1733_OFFSET UNITYSDK_OFFSET(0x1142F930)
#define CLASS_3_4104D55F3637796D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x114315E0)
#define CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11430E90)
#define CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1142F470)
#define CLASS_3_4104D55F3637796D_METHOD_3_D5E6919FC0984296_OFFSET UNITYSDK_OFFSET(0x11430F20)
#define CLASS_3_4104D55F3637796D_METHOD_3_D7325ACD7C7433D1_OFFSET UNITYSDK_OFFSET(0x1142DEF0)
#define CLASS_3_4104D55F3637796D_METHOD_3_E34CD12B7397C94F_OFFSET UNITYSDK_OFFSET(0x11430670)
#define CLASS_3_4104D55F3637796D_METHOD_3_EC9083BAABC2F3BA_OFFSET UNITYSDK_OFFSET(0x1142D830)
#define CLASS_3_4104D55F3637796D_UPDATE_OFFSET UNITYSDK_OFFSET(0x1142D520)
#define CLASS_3_4104D55F3637796D__CTOR_OFFSET UNITYSDK_OFFSET(0x1142D7E0)

inline static constexpr unsigned int Class_3_4104D55F3637796D_TypeDefinitionIndex = 41121;

class Class_3_4104D55F3637796D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_EC9083BAABC2F3BA(::Class_3_1309C27AF04ABEA2* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::Class_1_D1E36A18B0B6134C* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Class_3_1309C27AF04ABEA2*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::Class_1_D1E36A18B0B6134C*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_EC9083BAABC2F3BA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_4585497DA4AAA148(::Class_3_1309C27AF04ABEA2* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_1309C27AF04ABEA2*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_4585497DA4AAA148_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_AD826B25465D0838(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_AD826B25465D0838_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B298CA29795F1733(::Class_3_1309C27AF04ABEA2* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_1309C27AF04ABEA2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_B298CA29795F1733_OFFSET))(a1, a2);
	}

	::System::Void Method_3_575A4B17257752F2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_575A4B17257752F2_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_E34CD12B7397C94F(::Class_3_4875884AB352B34E* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_1309C27AF04ABEA2* a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_1309C27AF04ABEA2*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_E34CD12B7397C94F_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_3_3D176F1649D10EB8(::Class_3_1309C27AF04ABEA2* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Int32 a4, ::Class_1_D1E36A18B0B6134C* a5, ::System::Boolean a6)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_1309C27AF04ABEA2*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Int32, ::Class_1_D1E36A18B0B6134C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_3D176F1649D10EB8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_9730B29A129ACD76(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::UnityEngine::Transform*& a3)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_9730B29A129ACD76_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D5E6919FC0984296(::Class_3_1309C27AF04ABEA2* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_1309C27AF04ABEA2*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_D5E6919FC0984296_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_3_D7325ACD7C7433D1(::Class_3_1309C27AF04ABEA2* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Int32 a4, ::Class_1_D1E36A18B0B6134C* a5, ::System::Boolean a6)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_1309C27AF04ABEA2*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Int32, ::Class_1_D1E36A18B0B6134C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_D7325ACD7C7433D1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
