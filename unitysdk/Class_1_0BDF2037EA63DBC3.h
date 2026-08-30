#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0BDF2037EA63DBC3_Class_1_FDB184180E579C9E;
namespace RPG::Client { class Effect_DynamicWavesManager; }
namespace RPG::Client { class MonoSurfaceInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_076BC548E188B1A5_OFFSET UNITYSDK_OFFSET(0xE5C9CA0)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_10B3793F4A3065D8_OFFSET UNITYSDK_OFFSET(0xE5C85C0)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_2085AC9B13B12497_OFFSET UNITYSDK_OFFSET(0xE5C9A70)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xE5C7670)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_551F6E4A8B334E67_OFFSET UNITYSDK_OFFSET(0xE5C9620)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_8B54665516FDB603_OFFSET UNITYSDK_OFFSET(0xE5C9900)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_944F9B3C4FE2CC6E_OFFSET UNITYSDK_OFFSET(0xE5C9110)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_96423E189D7E47C7_OFFSET UNITYSDK_OFFSET(0xE5C9D60)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xE5C7610)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE5C7590)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xE5C7510)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_9E603F5EEA8E2F6F_OFFSET UNITYSDK_OFFSET(0xE5C8F20)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_A8E1DD82F4F68969_OFFSET UNITYSDK_OFFSET(0xE5C9240)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_AB86C4C133551BD3_OFFSET UNITYSDK_OFFSET(0xE5C7F90)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_AD11EA2CE90B48AD_OFFSET UNITYSDK_OFFSET(0xE5C8A20)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_B05509DD26461CF5_OFFSET UNITYSDK_OFFSET(0xE5C8570)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_B8EBB847A64D99A1_OFFSET UNITYSDK_OFFSET(0xE5C9310)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_CAAEDF841AABB653_OFFSET UNITYSDK_OFFSET(0xE5C9C30)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_D0D2329D63BD2F5C_1_OFFSET UNITYSDK_OFFSET(0xE5C84B0)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_D0D2329D63BD2F5C_OFFSET UNITYSDK_OFFSET(0xE5C83F0)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_F9F94C44432E00C6_OFFSET UNITYSDK_OFFSET(0xE5C91C0)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_FEB3BC692CE53B5F_OFFSET UNITYSDK_OFFSET(0xE5C9B80)
#define CLASS_1_0BDF2037EA63DBC3_METHOD_1_FF5F80043B58E82C_OFFSET UNITYSDK_OFFSET(0xE5C8750)
#define CLASS_1_0BDF2037EA63DBC3__CTOR_OFFSET UNITYSDK_OFFSET(0xE5C7320)

inline static constexpr unsigned int Class_1_0BDF2037EA63DBC3_TypeDefinitionIndex = 69476;

class Class_1_0BDF2037EA63DBC3 : public ::System::Object
{
public:
	static ::Class_1_0BDF2037EA63DBC3** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_0BDF2037EA63DBC3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0BDF2037EA63DBC3_TypeDefinitionIndex)->GetStaticField(0x6A060);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::MonoSurfaceInfo*>* GBMLJEOOMAM; // 0x10
	::UnityEngine::ComputeShader* GMIAMAPBIEH; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* BBEKMIJHEGA; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* LIBFAHMAMFL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0BDF2037EA63DBC3_Class_1_FDB184180E579C9E*>* BFPKJAJCALI; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager*>* CHFEJGOMNFD; // 0x38
	::System::Boolean IAKEBNJDMEG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3__CTOR_OFFSET))(this);
	}

	static ::Class_1_0BDF2037EA63DBC3* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_0BDF2037EA63DBC3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_AB86C4C133551BD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_AB86C4C133551BD3_OFFSET))(this);
	}

	::System::String* Method_1_D0D2329D63BD2F5C(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_D0D2329D63BD2F5C_OFFSET))(this, a1);
	}

	::System::String* Method_1_D0D2329D63BD2F5C_1(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_D0D2329D63BD2F5C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B05509DD26461CF5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_B05509DD26461CF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_FF5F80043B58E82C(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_FF5F80043B58E82C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AD11EA2CE90B48AD(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_AD11EA2CE90B48AD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_9E603F5EEA8E2F6F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_9E603F5EEA8E2F6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_944F9B3C4FE2CC6E(::System::Int32 a1, ::RPG::Client::MonoSurfaceInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MonoSurfaceInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_944F9B3C4FE2CC6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F9F94C44432E00C6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_F9F94C44432E00C6_OFFSET))(this, a1);
	}

	::RPG::GameCore::SurfaceType Method_1_A8E1DD82F4F68969(::System::Int32 a1)
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_A8E1DD82F4F68969_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_1_B8EBB847A64D99A1(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::RPG::GameCore::SurfaceType& a3)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_B8EBB847A64D99A1_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::SurfaceType Method_1_551F6E4A8B334E67(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::SurfaceType a3)
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_551F6E4A8B334E67_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_10B3793F4A3065D8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_10B3793F4A3065D8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B54665516FDB603(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_8B54665516FDB603_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color Method_1_2085AC9B13B12497(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_2085AC9B13B12497_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEB3BC692CE53B5F(::RPG::Client::Effect_DynamicWavesManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_FEB3BC692CE53B5F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CAAEDF841AABB653(::RPG::Client::Effect_DynamicWavesManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_CAAEDF841AABB653_OFFSET))(this, a1);
	}

	::System::Void Method_1_076BC548E188B1A5(::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_076BC548E188B1A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_96423E189D7E47C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_METHOD_1_96423E189D7E47C7_OFFSET))(this);
	}
};
