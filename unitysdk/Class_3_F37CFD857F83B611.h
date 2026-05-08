#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_4.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectOverrideConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_E41C1EFCBD73D3C9_9;
class EtherEyesOutlineRenderer;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class EtherEyesRibbonGenerator; }
namespace MoleMole { class MonoAnimatorPlaybackPlugin; }
namespace MoleMole::Config { class EtherEyesObjectTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_F37CFD857F83B611_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10502680)
#define CLASS_3_F37CFD857F83B611_METHOD_3_29F0C501FEEE7583_OFFSET UNITYSDK_OFFSET(0x10502BA0)
#define CLASS_3_F37CFD857F83B611_METHOD_3_50472A5B86F66A5C_OFFSET UNITYSDK_OFFSET(0x10502D40)
#define CLASS_3_F37CFD857F83B611_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x10502F20)
#define CLASS_3_F37CFD857F83B611_METHOD_3_CA1B85EB53072DDA_OFFSET UNITYSDK_OFFSET(0x10502770)
#define CLASS_3_F37CFD857F83B611_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x10502FB0)
#define CLASS_3_F37CFD857F83B611_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10501FB0)
#define CLASS_3_F37CFD857F83B611__CCTOR_OFFSET UNITYSDK_OFFSET(0x105026D0)
#define CLASS_3_F37CFD857F83B611__CTOR_OFFSET UNITYSDK_OFFSET(0x10502750)

inline static constexpr unsigned int Class_3_F37CFD857F83B611_TypeDefinitionIndex = 80965;

class Class_3_F37CFD857F83B611 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_39 = 0xAD; // 0x0
	::DG::Tweening::Tweener* Field_3_20; // 0x48
	::System::String* Field_3_36; // 0x50
	::UnityEngine::Material* Field_3_17; // 0x58
	::EtherEyesOutlineRenderer* Field_3_29; // 0x60
	::DG::Tweening::Tweener* Field_3_23; // 0x68
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_3_28; // 0x70
	::DG::Tweening::Tweener* Field_3_21; // 0x78
	::MoleMole::Config::EtherEyesFixConfig Field_3_31; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_24; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::EtherEyesRibbonGenerator*>* Field_3_33; // 0xB0
	::MoleMole::MonoAnimatorPlaybackPlugin* Field_3_32; // 0xB8
	::MoleMole::EntityHandle Field_3_25; // 0xC0
	::MoleMole::EntityHandle Field_3_26; // 0xD0
	::UnityEngine::Material* Field_3_34; // 0xE0
	::Foundation::AssetRequestHandle Field_3_18; // 0xE8
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_27; // 0x108
	::DG::Tweening::Tweener* Field_3_22; // 0x110
	::DG::Tweening::Tweener* Field_3_16; // 0x118
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_3_19; // 0x120
	::MoleMole::Config::EtherEyesObjectConfig Field_3_0; // 0x128
	::System::Single Field_3_7; // 0x140
	::System::Single Field_3_38; // 0x144
	::Enum_3_D2BBBB758B896E04_4 Field_3_30; // 0x148
	::System::Boolean Field_3_13; // 0x14C
	::System::Boolean Field_3_11; // 0x14D
	::MoleMole::Config::EtherEyesObjectSize Field_3_35; // 0x150
	::System::Single Field_3_3; // 0x154
	::System::Boolean Field_3_14; // 0x158
	::System::Boolean Field_3_12; // 0x159
	::System::Boolean Field_3_2; // 0x15A
	::System::Boolean Field_3_9; // 0x15B
	::System::Boolean Field_3_5; // 0x15C
	::System::Boolean Field_3_8; // 0x15D
	::MoleMole::Config::EtherEyesObjectOverrideConfig Field_3_1; // 0x15E
	::System::Boolean Field_3_37; // 0x161
	::System::Single Field_3_6; // 0x164
	::System::Boolean Field_3_4; // 0x168
	::System::Boolean Field_3_15; // 0x169
	::System::Boolean Field_3_10; // 0x16A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611_GETCLASSID_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Method_3_CA1B85EB53072DDA()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611_METHOD_3_CA1B85EB53072DDA_OFFSET))(this);
	}

	::System::Void Method_3_29F0C501FEEE7583(::Class_3_E41C1EFCBD73D3C9_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E41C1EFCBD73D3C9_9*))((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611_METHOD_3_29F0C501FEEE7583_OFFSET))(this, a1);
	}

	::System::Void Method_3_50472A5B86F66A5C(::MoleMole::Config::EtherEyesObjectTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EtherEyesObjectTrait*))((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611_METHOD_3_50472A5B86F66A5C_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_F37CFD857F83B611* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F37CFD857F83B611*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F37CFD857F83B611_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
