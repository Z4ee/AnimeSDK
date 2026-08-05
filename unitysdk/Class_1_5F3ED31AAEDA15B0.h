#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F3ED31AAEDA15B0_Enum_3_E77CA70DD180A8DC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/Struct_2_AE36917A57939791.h"
#include "unitysdk/Struct_2_BCEA3C06DDE2274F.h"
#include "unitysdk/Struct_2_FD11E06FCEBA5113.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7DB115CD9B835DB7;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIHollowChessPieceEffectAttachPoint; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5F3ED31AAEDA15B0_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1141C9D0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1141E040)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x11422AD0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0x1141DBA0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_296526A57F9C96BE_OFFSET UNITYSDK_OFFSET(0x1141DBC0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1141CA30)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11423750)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_4A4515201D6864D6_OFFSET UNITYSDK_OFFSET(0x1141DF90)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x11423A40)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_525AF194767081EE_OFFSET UNITYSDK_OFFSET(0x11422B30)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x1141D460)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x1141D9C0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_6F9C00F0721990E3_OFFSET UNITYSDK_OFFSET(0x11422E20)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_709D8097E5FF96FD_OFFSET UNITYSDK_OFFSET(0x1141CEB0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_752471840F8BFE78_OFFSET UNITYSDK_OFFSET(0x1141CDE0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_7AA2D3F854EBC0E0_OFFSET UNITYSDK_OFFSET(0x1141D6F0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_85C0C0D45789A64C_OFFSET UNITYSDK_OFFSET(0x1141E050)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x11423A60)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x11423A50)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1141DA50)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_B59CD6E733FA1F5C_OFFSET UNITYSDK_OFFSET(0x114237B0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1141D7F0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_BA446D4D3EBC6EEF_OFFSET UNITYSDK_OFFSET(0x1141D570)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_C32CC33BF0371575_OFFSET UNITYSDK_OFFSET(0x1141CD10)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_C7E790C9FF4C9C11_OFFSET UNITYSDK_OFFSET(0x11422AC0)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_C8A39BEF948E863C_OFFSET UNITYSDK_OFFSET(0x1141D160)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1141C990)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_D1DF5502C4A2301A_OFFSET UNITYSDK_OFFSET(0x1141DB50)
#define CLASS_1_5F3ED31AAEDA15B0_METHOD_1_D8054E7A69837E92_OFFSET UNITYSDK_OFFSET(0x1141DFF0)
#define CLASS_1_5F3ED31AAEDA15B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1141CD80)
#define CLASS_1_5F3ED31AAEDA15B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1141C3F0)

inline static constexpr unsigned int Class_1_5F3ED31AAEDA15B0_TypeDefinitionIndex = 87786;

class Class_1_5F3ED31AAEDA15B0 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F3ED31AAEDA15B0_TypeDefinitionIndex)->GetStaticField(0x46810);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_12()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F3ED31AAEDA15B0_TypeDefinitionIndex)->GetStaticField(0x10570);
	}
	::System::Func_2<::Class_1_5F3ED31AAEDA15B0_Enum_3_E77CA70DD180A8DC, ::UnityEngine::RenderTexture*>* Field_1_14; // 0x10
	::UnityEngine::Material* Field_1_9; // 0x18
	::System::String* Field_1_0; // 0x20
	::MoleMole::UIHollowChessPieceEffectAttachPoint* Field_1_13; // 0x28
	::UnityEngine::MeshRenderer* Field_1_11; // 0x30
	::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_8; // 0x38
	::UnityEngine::GameObject* Field_1_6; // 0x40
	::MoleMole::IVideoPlayer* Field_1_7; // 0x48
	::UnityEngine::GameObject* Field_1_4; // 0x50
	::UnityEngine::Material* Field_1_10; // 0x58
	::MoleMole::Config::ConfigHollowChessboard* Field_1_15; // 0x60

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Destructor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_DESTRUCTOR_OFFSET))(this);
	}

	::System::Void Method_1_C32CC33BF0371575(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_C32CC33BF0371575_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_752471840F8BFE78(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_752471840F8BFE78_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_C8A39BEF948E863C(::MoleMole::UIHollowChessPieceParticle_AttachPointType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle_AttachPointType))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_C8A39BEF948E863C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_BA446D4D3EBC6EEF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_BA446D4D3EBC6EEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AA2D3F854EBC0E0(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_7AA2D3F854EBC0E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_D1DF5502C4A2301A(::System::Func_2<::Class_1_5F3ED31AAEDA15B0_Enum_3_E77CA70DD180A8DC, ::UnityEngine::RenderTexture*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Class_1_5F3ED31AAEDA15B0_Enum_3_E77CA70DD180A8DC, ::UnityEngine::RenderTexture*>*))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_D1DF5502C4A2301A_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_21631744E68FDB6A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_21631744E68FDB6A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_296526A57F9C96BE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_296526A57F9C96BE_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_D8054E7A69837E92()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_D8054E7A69837E92_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4A4515201D6864D6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_4A4515201D6864D6_OFFSET))(this);
	}

	::System::Void Method_1_709D8097E5FF96FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_709D8097E5FF96FD_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_1_85C0C0D45789A64C(::Struct_2_BCEA3C06DDE2274F& a1, ::Struct_2_BCEA3C06DDE2274F& a2, ::Class_2_7DB115CD9B835DB7* a3, ::System::Boolean a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BCEA3C06DDE2274F&, ::Struct_2_BCEA3C06DDE2274F&, ::Class_2_7DB115CD9B835DB7*, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_85C0C0D45789A64C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::IVideoPlayer* Method_1_C7E790C9FF4C9C11()
	{
		return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_C7E790C9FF4C9C11_OFFSET))(this);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Boolean Method_1_525AF194767081EE(::Struct_2_AE36917A57939791& a1, ::Struct_2_AE36917A57939791& a2, ::Class_2_7DB115CD9B835DB7* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_AE36917A57939791&, ::Struct_2_AE36917A57939791&, ::Class_2_7DB115CD9B835DB7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_525AF194767081EE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6F9C00F0721990E3(::Struct_2_BCEA3C06DDE2274F& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BCEA3C06DDE2274F&))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_6F9C00F0721990E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_B59CD6E733FA1F5C(::Struct_2_FD11E06FCEBA5113 a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD11E06FCEBA5113, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_B59CD6E733FA1F5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_5F3ED31AAEDA15B0_METHOD_1_8B20DD98E594CC7F_OFFSET))(this, a1);
	}
};
