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

#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFINSTANCENEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x18095270)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFUSESIMULATE_OFFSET UNITYSDK_OFFSET(0x180951E0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x18095230)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x18098790)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_00BC1D03A9F4D997_OFFSET UNITYSDK_OFFSET(0x1809CA80)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x18098690)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_14F193ED8E6A3459_OFFSET UNITYSDK_OFFSET(0x1809C850)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x18095B80)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_270488173B023B4A_OFFSET UNITYSDK_OFFSET(0x1809C2A0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x180983D0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_304A1E888A828F96_OFFSET UNITYSDK_OFFSET(0x1809C320)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18098650)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18098570)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x180985E0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18098370)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_634BCF4C65B50CBB_OFFSET UNITYSDK_OFFSET(0x1809BA10)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x18095CE0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x180953A0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_87D15601B8D27F72_OFFSET UNITYSDK_OFFSET(0x180991B0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_9A4DCB2B4ADEB8A9_OFFSET UNITYSDK_OFFSET(0x18095670)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x18095570)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x1809ADD0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x18095290)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_C2D2C3AC848DE1F1_OFFSET UNITYSDK_OFFSET(0x1809C560)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_DBA8CB09BF007EAD_OFFSET UNITYSDK_OFFSET(0x1809C9F0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_E322D311AC7C7EE8_OFFSET UNITYSDK_OFFSET(0x1809D0B0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_SET_IFINSTANCENEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x18095280)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1809D280)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1809D270)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterBehavior_TypeDefinitionIndex = 67699;

	class DialogEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__MainTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogEmitterBehavior_TypeDefinitionIndex)->GetStaticField(0x144F0);
		}
		static ::System::Int32* StaticGet_CustomDataID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogEmitterBehavior_TypeDefinitionIndex)->GetStaticField(0x144F4);
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

		::System::Void set_IfInstanceNeedRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_SET_IFINSTANCENEEDREFRESH_OFFSET))(this, a1);
		}

		::System::Void Method_3_BA1BB49741CFDFE1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_BA1BB49741CFDFE1_OFFSET))(this);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>* Method_3_270488173B023B4A()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_270488173B023B4A_OFFSET))(this);
		}

		::System::Void Method_3_304A1E888A828F96(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_304A1E888A828F96_OFFSET))(this, a1);
		}

		::System::Void Method_3_C2D2C3AC848DE1F1(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_C2D2C3AC848DE1F1_OFFSET))(this, a1);
		}

		::RPG::Client::DialogEmitterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_87D15601B8D27F72(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_87D15601B8D27F72_OFFSET))(this, a1);
		}

		::System::Void Method_3_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_19844080C13BA28F_OFFSET))(this);
		}

		::System::Void Method_3_821BBDC04720A2EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_821BBDC04720A2EB_OFFSET))(this);
		}

		::System::Void Method_3_9A4DCB2B4ADEB8A9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_9A4DCB2B4ADEB8A9_OFFSET))(this);
		}

		::System::Void Method_3_87318FF00D6BC7EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_87318FF00D6BC7EB_OFFSET))(this);
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

		::System::Void Method_3_634BCF4C65B50CBB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_634BCF4C65B50CBB_OFFSET))(this, a1);
		}

		::System::Void Method_3_AB7ED27CAB69BE58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_METHOD_3_AB7ED27CAB69BE58_OFFSET))(this);
		}
	};
}
