#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAPartVariantRes_LoadState.h"
#include "unitysdk/Struct_2_CE7869E2D523A090.h"
#include "unitysdk/System/Object.h"

class Class_1_96ED128DCD0679FC;
class Class_3_6C54BE5953054E2B;
namespace RPG::Client { class BAPartVariantRef; }
namespace RPG::Client { class BatchAnimationVariantAsset; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_1041E4ED3107B921_OFFSET UNITYSDK_OFFSET(0xC8B40D0)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0xC8B4160)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC8B3700)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_3C8D3D5994F57353_OFFSET UNITYSDK_OFFSET(0xC8B3640)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_426F10C86F2F4793_OFFSET UNITYSDK_OFFSET(0xC8B37A0)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC8B47C0)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC8B4750)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_9E0AE5CCF5240C75_OFFSET UNITYSDK_OFFSET(0xC8B4050)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xC8B3750)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC8B42B0)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC8B36B0)
#define RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_CC3053D4FB0528C3_OFFSET UNITYSDK_OFFSET(0xC8B4340)
#define RPG_CLIENT_BAPARTVARIANTRES_RESET_OFFSET UNITYSDK_OFFSET(0xC8B3540)
#define RPG_CLIENT_BAPARTVARIANTRES__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8B4890)
#define RPG_CLIENT_BAPARTVARIANTRES__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B4830)

namespace RPG::Client
{
	inline static constexpr unsigned int BAPartVariantRes_TypeDefinitionIndex = 69487;

	class BAPartVariantRes : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__UsingDitherAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BAPartVariantRes_TypeDefinitionIndex)->GetStaticField(0xED0);
		}
		static ::System::Int32* StaticGet__DitherAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BAPartVariantRes_TypeDefinitionIndex)->GetStaticField(0xED4);
		}
		static ::System::Int32* StaticGet_CommonPartCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BAPartVariantRes_TypeDefinitionIndex)->GetStaticField(0xED8);
		}
		::UnityEngine::Rendering::BatchAnimationInstance* instance; // 0x10
		::Class_3_6C54BE5953054E2B* loadCb; // 0x18
		::Il2CppArray<::Class_1_96ED128DCD0679FC*>* resLods; // 0x20
		::System::Single fadeTime; // 0x28
		::Il2CppArray<::RPG::Client::BAPartVariantRef*>* _loadedRes; // 0x30
		::System::Int32 _currentLod; // 0x38
		::System::Int32 _changeLodMask; // 0x3C
		::System::Boolean _needReleaseRes; // 0x40
		::RPG::Client::BAPartVariantRes_LoadState _loadState; // 0x44
		::System::Single _fadeProgress; // 0x48
		::System::Boolean _isFirstFrame; // 0x4C
		::UnityEngine::MaterialPropertyBlock* _dithermpb; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_RESET_OFFSET))(this);
		}

		::System::Void Method_1_3C8D3D5994F57353(::System::Collections::Generic::Queue_1<::RPG::Client::BAPartVariantRes*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::Client::BAPartVariantRes*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_3C8D3D5994F57353_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::Void Method_1_426F10C86F2F4793(::RPG::Client::BatchAnimationVariantAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_426F10C86F2F4793_OFFSET))(this, a1);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_1_CC3053D4FB0528C3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_CC3053D4FB0528C3_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1041E4ED3107B921(::System::Single a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_1041E4ED3107B921_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_9E0AE5CCF5240C75(::Struct_2_CE7869E2D523A090& a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_CE7869E2D523A090&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_METHOD_1_9E0AE5CCF5240C75_OFFSET))(this, a1, a2);
		}
	};
}
