#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_742452531DFCB28E_Class_1_1620A2D1EC696230;
namespace RPG::Client { class Effect_DynamicWavesManager; }
namespace RPG::Client { class MonoSurfaceInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_742452531DFCB28E_METHOD_1_076BC548E188B1A5_OFFSET UNITYSDK_OFFSET(0xCEBEF70)
#define CLASS_1_742452531DFCB28E_METHOD_1_10B3793F4A3065D8_OFFSET UNITYSDK_OFFSET(0xCEBD7D0)
#define CLASS_1_742452531DFCB28E_METHOD_1_2085AC9B13B12497_OFFSET UNITYSDK_OFFSET(0xCEBECF0)
#define CLASS_1_742452531DFCB28E_METHOD_1_35E4F99B279DBF07_OFFSET UNITYSDK_OFFSET(0xCEBE500)
#define CLASS_1_742452531DFCB28E_METHOD_1_398AAE6E04386FDF_OFFSET UNITYSDK_OFFSET(0xCEBEEE0)
#define CLASS_1_742452531DFCB28E_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xCEBCA50)
#define CLASS_1_742452531DFCB28E_METHOD_1_551F6E4A8B334E67_OFFSET UNITYSDK_OFFSET(0xCEBE8F0)
#define CLASS_1_742452531DFCB28E_METHOD_1_8B54665516FDB603_OFFSET UNITYSDK_OFFSET(0xCEBEB80)
#define CLASS_1_742452531DFCB28E_METHOD_1_944F9B3C4FE2CC6E_OFFSET UNITYSDK_OFFSET(0xCEBE300)
#define CLASS_1_742452531DFCB28E_METHOD_1_96423E189D7E47C7_OFFSET UNITYSDK_OFFSET(0xCEBF030)
#define CLASS_1_742452531DFCB28E_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xCEBC9F0)
#define CLASS_1_742452531DFCB28E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCEBC970)
#define CLASS_1_742452531DFCB28E_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xCEBC8F0)
#define CLASS_1_742452531DFCB28E_METHOD_1_9E603F5EEA8E2F6F_OFFSET UNITYSDK_OFFSET(0xCEBE110)
#define CLASS_1_742452531DFCB28E_METHOD_1_A8E1DD82F4F68969_OFFSET UNITYSDK_OFFSET(0xCEBE430)
#define CLASS_1_742452531DFCB28E_METHOD_1_AB86C4C133551BD3_OFFSET UNITYSDK_OFFSET(0xCEBD1D0)
#define CLASS_1_742452531DFCB28E_METHOD_1_AD11EA2CE90B48AD_OFFSET UNITYSDK_OFFSET(0xCEBDC30)
#define CLASS_1_742452531DFCB28E_METHOD_1_AEC0F36B5E7AF176_OFFSET UNITYSDK_OFFSET(0xCEBEE00)
#define CLASS_1_742452531DFCB28E_METHOD_1_B05509DD26461CF5_OFFSET UNITYSDK_OFFSET(0xCEBD780)
#define CLASS_1_742452531DFCB28E_METHOD_1_D0D2329D63BD2F5C_1_OFFSET UNITYSDK_OFFSET(0xCEBD6C0)
#define CLASS_1_742452531DFCB28E_METHOD_1_D0D2329D63BD2F5C_OFFSET UNITYSDK_OFFSET(0xCEBD600)
#define CLASS_1_742452531DFCB28E_METHOD_1_F9F94C44432E00C6_OFFSET UNITYSDK_OFFSET(0xCEBE3B0)
#define CLASS_1_742452531DFCB28E_METHOD_1_FF5F80043B58E82C_OFFSET UNITYSDK_OFFSET(0xCEBD960)
#define CLASS_1_742452531DFCB28E__CTOR_OFFSET UNITYSDK_OFFSET(0xCEBC700)

inline static constexpr unsigned int Class_1_742452531DFCB28E_TypeDefinitionIndex = 64978;

class Class_1_742452531DFCB28E : public ::System::Object
{
public:
	static ::Class_1_742452531DFCB28E** StaticGet_Field_1_0()
	{
		return (::Class_1_742452531DFCB28E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_742452531DFCB28E_TypeDefinitionIndex)->GetStaticField(0x68C90);
	}
	::UnityEngine::ComputeShader* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_742452531DFCB28E_Class_1_1620A2D1EC696230*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::MonoSurfaceInfo*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager*>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E__CTOR_OFFSET))(this);
	}

	static ::Class_1_742452531DFCB28E* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_742452531DFCB28E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_AB86C4C133551BD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_AB86C4C133551BD3_OFFSET))(this);
	}

	::System::String* Method_1_D0D2329D63BD2F5C(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_D0D2329D63BD2F5C_OFFSET))(this, a1);
	}

	::System::String* Method_1_D0D2329D63BD2F5C_1(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_D0D2329D63BD2F5C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B05509DD26461CF5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_B05509DD26461CF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_FF5F80043B58E82C(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_FF5F80043B58E82C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AD11EA2CE90B48AD(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_AD11EA2CE90B48AD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_9E603F5EEA8E2F6F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_9E603F5EEA8E2F6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_944F9B3C4FE2CC6E(::System::Int32 a1, ::RPG::Client::MonoSurfaceInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MonoSurfaceInfo*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_944F9B3C4FE2CC6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F9F94C44432E00C6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_F9F94C44432E00C6_OFFSET))(this, a1);
	}

	::RPG::GameCore::SurfaceType Method_1_A8E1DD82F4F68969(::System::Int32 a1)
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_A8E1DD82F4F68969_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_1_35E4F99B279DBF07(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::RPG::GameCore::SurfaceType& a3)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_35E4F99B279DBF07_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::SurfaceType Method_1_551F6E4A8B334E67(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::SurfaceType a3)
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_551F6E4A8B334E67_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_10B3793F4A3065D8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_10B3793F4A3065D8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B54665516FDB603(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_8B54665516FDB603_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color Method_1_2085AC9B13B12497(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_2085AC9B13B12497_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEC0F36B5E7AF176(::RPG::Client::Effect_DynamicWavesManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_AEC0F36B5E7AF176_OFFSET))(this, a1);
	}

	::System::Void Method_1_398AAE6E04386FDF(::RPG::Client::Effect_DynamicWavesManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_398AAE6E04386FDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_076BC548E188B1A5(::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_076BC548E188B1A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_96423E189D7E47C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_METHOD_1_96423E189D7E47C7_OFFSET))(this);
	}
};
