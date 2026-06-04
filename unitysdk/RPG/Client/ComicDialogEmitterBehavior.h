#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComicDialogEmitterBehavior_Struct_2_F7C243F317D8E44A_2.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class ComicDialogEmitterMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xB6F13A0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_0A1EBDC04FF09910_OFFSET UNITYSDK_OFFSET(0xB6F47D0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB6F1CD0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_218124418542E081_OFFSET UNITYSDK_OFFSET(0xB6EF220)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_22AFCF77865E9802_OFFSET UNITYSDK_OFFSET(0xB6F4E10)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB6F1C90)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_41782CE468D1B24D_OFFSET UNITYSDK_OFFSET(0xB6F2820)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB6F1BB0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xB6F1C20)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB6F19F0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0xB6F2E80)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xB6EF2D0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB6F4FD0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xB6F5030)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xB6F5090)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xB6F50F0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xB6F5150)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xB6F5210)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB6F4F70)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xB6F1A50)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xB6F0070)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0xB6EFD10)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xB6F25D0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0xB6EF460)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_AF7DB9C9316245A8_OFFSET UNITYSDK_OFFSET(0xB6F45A0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_DBA8CB09BF007EAD_OFFSET UNITYSDK_OFFSET(0xB6F4740)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB6F51B0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xB6F1DC0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6F4F50)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F4F20)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB6F5270)

namespace RPG::Client
{
	inline static constexpr unsigned int ComicDialogEmitterBehavior_TypeDefinitionIndex = 66266;

	class ComicDialogEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__CustomDataID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ComicDialogEmitterBehavior_TypeDefinitionIndex)->GetStaticField(0x13D20);
		}
		// static const ::System::Int32 _MaxTextCount = 0x100; // 0x0
		// static const ::System::Int32 _MaxBackboardCount = 0x40; // 0x0
		// static const ::System::Int32 _NormalTextSize = 0x32; // 0x0
		::System::Boolean _IsVisiable; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ComicDialogEmitterBehavior_Struct_2_F7C243F317D8E44A_2>* _SimulateAgents; // 0x40
		::System::Int32 _CurrentIndex; // 0x48
		::System::Single _Timer; // 0x4C
		::System::Int32 _StaticEmojiCounter; // 0x50
		::System::Int32 _TextCounter; // 0x54
		::System::Int32 _BackboardCounter; // 0x58
		::UnityEngine::MaterialPropertyBlock* _TextMPB; // 0x60
		::UnityEngine::MaterialPropertyBlock* _BackboardMPB; // 0x68
		::Il2CppArray<::UnityEngine::Matrix4x4>* _TextMatrixList; // 0x70
		::Il2CppArray<::UnityEngine::Matrix4x4>* _BackboardMatrixList; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* _TextCustomDatas; // 0x80
		::Il2CppArray<::UnityEngine::Vector4>* _BackboardCustomDatas; // 0x88
		::Il2CppArray<::System::Boolean>* _DialogDisplayBuffer; // 0x90
		::UnityEngine::Vector3 _CameraPos; // 0x98
		::TMPro::TMP_FontAsset* _FontAsset; // 0xA8
		::System::Boolean _IfPreviewAudio; // 0xB0
		::UnityEngine::Vector3 _PlayerPos; // 0xB4
		::UnityEngine::Bounds _PatternBounds; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_3_A41DCE32DA5A80B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A41DCE32DA5A80B1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDialogEmitterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ComicDialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_8B5E3014AFF7F8EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_8B5E3014AFF7F8EA_OFFSET))(this);
		}

		::System::Void Method_3_4857357D5C1BFCE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET))(this);
		}

		::System::Void Method_3_A002848F130F70CA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET))(this);
		}

		::System::Void Method_3_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5176DC743E478510_OFFSET))(this);
		}

		::System::Boolean Method_3_AF7DB9C9316245A8(::System::Char a1, ::TMPro::TMP_FontAsset* a2, ::UnityEngine::Vector4& a3, ::UnityEngine::Vector4& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::TMPro::TMP_FontAsset*, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_AF7DB9C9316245A8_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 Method_3_DBA8CB09BF007EAD(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_DBA8CB09BF007EAD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_3_0A1EBDC04FF09910(::UnityEngine::Vector4 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_0A1EBDC04FF09910_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_41782CE468D1B24D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_41782CE468D1B24D_OFFSET))(this, a1);
		}

		::System::Void Method_3_22AFCF77865E9802(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_22AFCF77865E9802_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
