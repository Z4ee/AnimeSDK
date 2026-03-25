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

#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x9405AD0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x9403CE0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_0A1EBDC04FF09910_OFFSET UNITYSDK_OFFSET(0x9408AB0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x9406190)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9406400)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x94049E0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_22AFCF77865E9802_OFFSET UNITYSDK_OFFSET(0x94090F0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x94063C0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x94062E0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x9406350)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9406130)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x94092B0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9409310)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x9409370)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x94093D0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x9409440)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x9409520)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9409250)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x9403C30)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x9403E70)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x9406C90)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A21BBA85D4EF7B41_OFFSET UNITYSDK_OFFSET(0x9406E40)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_AF7DB9C9316245A8_OFFSET UNITYSDK_OFFSET(0x9408880)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x9404700)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_DBA8CB09BF007EAD_OFFSET UNITYSDK_OFFSET(0x9408A20)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x94094B0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x94072C0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x94064E0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x9409230)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9409200)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9409580)

namespace RPG::Client
{
	inline static constexpr unsigned int ComicDialogEmitterBehavior_TypeDefinitionIndex = 58052;

	class ComicDialogEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__CustomDataID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ComicDialogEmitterBehavior_TypeDefinitionIndex)->GetStaticField(0x11650);
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

		::System::Void Method_3_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Void Method_3_825CC99DD653DEE0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_825CC99DD653DEE0_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
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

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDialogEmitterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ComicDialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_1F3793A40D6D0F7F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_1F3793A40D6D0F7F_OFFSET))(this);
		}

		::System::Void Method_3_F63FE1AA9633F811()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_F63FE1AA9633F811_OFFSET))(this);
		}

		::System::Void Method_3_B1EA412ACAE87C15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
		}

		::System::Void Method_3_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_0076C796B2045359_OFFSET))(this);
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

		::System::Void Method_3_A21BBA85D4EF7B41(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_A21BBA85D4EF7B41_OFFSET))(this, a1);
		}

		::System::Void Method_3_22AFCF77865E9802(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_22AFCF77865E9802_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
