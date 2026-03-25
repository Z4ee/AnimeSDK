#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_Struct_2_7B5711D3A8C81549.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class DialogEmitterBehavior_DialogData; }
namespace RPG::Client { class DialogEmitterMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFINSTANCENEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x944BB30)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFUSESIMULATE_OFFSET UNITYSDK_OFFSET(0x944BAA0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x944BAF0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x944ED80)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x944BC60)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_00BC1D03A9F4D997_OFFSET UNITYSDK_OFFSET(0x9452890)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x944EC90)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_14F193ED8E6A3459_OFFSET UNITYSDK_OFFSET(0x9452660)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x944BDF0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x944C340)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_19578FF14D5CC81B_OFFSET UNITYSDK_OFFSET(0x94523D0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x944EC50)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_401F06ADB0C71DD8_OFFSET UNITYSDK_OFFSET(0x944F6A0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x944EB70)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x944EBE0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x944E9B0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x944C440)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9453120)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9453180)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x94531E0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x9453240)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x94532B0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x9453390)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x94530C0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x94510B0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_A2729CBF245B8253_OFFSET UNITYSDK_OFFSET(0x94521F0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x944BEF0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_B5431FFED5A8CE32_OFFSET UNITYSDK_OFFSET(0x9451AC0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x944EA10)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_DBA8CB09BF007EAD_OFFSET UNITYSDK_OFFSET(0x9452800)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_E322D311AC7C7EE8_OFFSET UNITYSDK_OFFSET(0x9452EC0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9453320)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_F49136C3D3312CEA_OFFSET UNITYSDK_OFFSET(0x9452270)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x944BB50)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_SET_IFINSTANCENEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x944BB40)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x9453090)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9453080)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0x94533F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterBehavior_TypeDefinitionIndex = 58060;

	class DialogEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__MainTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogEmitterBehavior_TypeDefinitionIndex)->GetStaticField(0x11920);
		}
		static ::System::Int32* StaticGet_CustomDataID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogEmitterBehavior_TypeDefinitionIndex)->GetStaticField(0x11924);
		}
		// static const ::System::Int32 _InitStaticEmojiCount = 0xF; // 0x0
		// static const ::System::Int32 _InitTextCount = 0xF; // 0x0
		// static const ::System::Int32 _InitBackboardCount = 0x3; // 0x0
		::System::Boolean _IsVisiable; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_Struct_2_7B5711D3A8C81549>* _SimulateAgents; // 0x40
		::System::Single _Timer; // 0x48
		::System::Int32 _CurrentIndex; // 0x4C
		::System::Single _CurrentInterval; // 0x50
		::Il2CppArray<::System::Single>* _HorizionDistanceBuffer; // 0x58
		::System::Int32 _StaticEmojiCounter; // 0x60
		::System::Int32 _TextCounter; // 0x64
		::System::Int32 _BackboardCounter; // 0x68
		::UnityEngine::MaterialPropertyBlock* _StaticEmojiMPB; // 0x70
		::UnityEngine::MaterialPropertyBlock* _TextMPB; // 0x78
		::UnityEngine::MaterialPropertyBlock* _BackboardMPB; // 0x80
		::Il2CppArray<::UnityEngine::Matrix4x4>* _StaticEmojiMatrixList; // 0x88
		::Il2CppArray<::UnityEngine::Matrix4x4>* _TextMatrixList; // 0x90
		::Il2CppArray<::UnityEngine::Matrix4x4>* _BackboardMatrixList; // 0x98
		::Il2CppArray<::UnityEngine::Vector4>* _StaticEmojiCustomDatas; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* _TextCustomDatas; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* _BackboardCustomDatas; // 0xB0
		::TMPro::TMP_FontAsset* _FontAsset; // 0xB8
		::System::Boolean _IfInstanceNeedRefresh_k__BackingField; // 0xC0
		::UnityEngine::Bounds _PatternBounds; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Boolean get_IfUseSimulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFUSESIMULATE_OFFSET))(this);
		}

		::System::Boolean get_IfInstanceNeedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFINSTANCENEEDREFRESH_OFFSET))(this);
		}

		::System::Void set_IfInstanceNeedRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_SET_IFINSTANCENEEDREFRESH_OFFSET))(this, value);
		}

		::System::Void Method_3_F4DD08A31BA3F883()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_F4DD08A31BA3F883_OFFSET))(this);
		}

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_0F2138E056F9294A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_0F2138E056F9294A_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>* Method_3_A2729CBF245B8253()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_A2729CBF245B8253_OFFSET))(this);
		}

		::System::Void Method_3_F49136C3D3312CEA(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_F49136C3D3312CEA_OFFSET))(this, a1);
		}

		::System::Void Method_3_19578FF14D5CC81B(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_19578FF14D5CC81B_OFFSET))(this, a1);
		}

		::RPG::Client::DialogEmitterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_401F06ADB0C71DD8(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_401F06ADB0C71DD8_OFFSET))(this, a1);
		}

		::System::Void Method_3_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_3_4857357D5C1BFCE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET))(this);
		}

		::System::Void Method_3_B1EA412ACAE87C15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
		}

		::System::Void Method_3_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_0076C796B2045359_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_3_DBA8CB09BF007EAD(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_DBA8CB09BF007EAD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_3_E322D311AC7C7EE8(::System::Single a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_E322D311AC7C7EE8_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 Method_3_00BC1D03A9F4D997(::UnityEngine::Vector4 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_00BC1D03A9F4D997_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_14F193ED8E6A3459(::System::Char a1, ::TMPro::TMP_FontAsset* a2, ::UnityEngine::Vector4& a3, ::UnityEngine::Vector4& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::TMPro::TMP_FontAsset*, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_14F193ED8E6A3459_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_B5431FFED5A8CE32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_B5431FFED5A8CE32_OFFSET))(this, a1);
		}

		::System::Void Method_3_81FEFD1B22CE37A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, P0);
		}
	};
}
