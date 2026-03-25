#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0ACF520A830B24C7_Class_1_FDB184180E579C9E;
namespace RPG::Client { class Effect_DynamicWavesManager; }
namespace RPG::Client { class MonoSurfaceInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_0ACF520A830B24C7_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xD7DA4A0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_2A63F6B581CB1CA9_OFFSET UNITYSDK_OFFSET(0xD7D88B0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_2E28495CC5A0D8E2_OFFSET UNITYSDK_OFFSET(0xD7D92E0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_398AAE6E04386FDF_OFFSET UNITYSDK_OFFSET(0xD7DA360)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xD7D8160)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_49280D40069D9A01_OFFSET UNITYSDK_OFFSET(0xD7DA2D0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_5662C1BDA0021FA4_OFFSET UNITYSDK_OFFSET(0xD7D97C0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_6382CC4B1E0B8868_OFFSET UNITYSDK_OFFSET(0xD7D9050)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_66CB0237666DEA15_OFFSET UNITYSDK_OFFSET(0xD7DA1D0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_686049F979FD7D2F_OFFSET UNITYSDK_OFFSET(0xD7D8E70)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_73FE85A91355E904_OFFSET UNITYSDK_OFFSET(0xD7D9BC0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_75E2FBE7F8B7BE2D_OFFSET UNITYSDK_OFFSET(0xD7DA0B0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_8325BFE286558C48_OFFSET UNITYSDK_OFFSET(0xD7D9960)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_868C75966CA63116_OFFSET UNITYSDK_OFFSET(0xD7D8EC0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xD7D8100)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD7D8080)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_98BD33D1B1849CB6_OFFSET UNITYSDK_OFFSET(0xD7D9B00)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xD7D8000)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_AEDE5B9FE04FF966_OFFSET UNITYSDK_OFFSET(0xD7D9E70)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_C313DA2C50C3A367_OFFSET UNITYSDK_OFFSET(0xD7DA3F0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_D0D2329D63BD2F5C_1_OFFSET UNITYSDK_OFFSET(0xD7D8DA0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_D0D2329D63BD2F5C_OFFSET UNITYSDK_OFFSET(0xD7D8CD0)
#define CLASS_1_0ACF520A830B24C7_METHOD_1_DC13DCFA502E580F_OFFSET UNITYSDK_OFFSET(0xD7D9A50)
#define CLASS_1_0ACF520A830B24C7__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D7E10)

inline static constexpr unsigned int Class_1_0ACF520A830B24C7_TypeDefinitionIndex = 56811;

class Class_1_0ACF520A830B24C7 : public ::System::Object
{
public:
	static ::Class_1_0ACF520A830B24C7** StaticGet_Field_1_0()
	{
		return (::Class_1_0ACF520A830B24C7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0ACF520A830B24C7_TypeDefinitionIndex)->GetStaticField(0x46C70);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0ACF520A830B24C7_Class_1_FDB184180E579C9E*>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager*>* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::MonoSurfaceInfo*>* Field_1_3; // 0x30
	::UnityEngine::ComputeShader* Field_1_2; // 0x38
	::System::Boolean Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7__CTOR_OFFSET))(this);
	}

	static ::Class_1_0ACF520A830B24C7* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_0ACF520A830B24C7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_2A63F6B581CB1CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_2A63F6B581CB1CA9_OFFSET))(this);
	}

	::System::String* Method_1_D0D2329D63BD2F5C(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_D0D2329D63BD2F5C_OFFSET))(this, a1);
	}

	::System::String* Method_1_D0D2329D63BD2F5C_1(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_D0D2329D63BD2F5C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_686049F979FD7D2F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_686049F979FD7D2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_6382CC4B1E0B8868(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_6382CC4B1E0B8868_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2E28495CC5A0D8E2(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_2E28495CC5A0D8E2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_5662C1BDA0021FA4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_5662C1BDA0021FA4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8325BFE286558C48(::System::Int32 a1, ::RPG::Client::MonoSurfaceInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MonoSurfaceInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_8325BFE286558C48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC13DCFA502E580F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_DC13DCFA502E580F_OFFSET))(this, a1);
	}

	::RPG::GameCore::SurfaceType Method_1_98BD33D1B1849CB6(::System::Int32 a1)
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_98BD33D1B1849CB6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_73FE85A91355E904(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::RPG::GameCore::SurfaceType& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_73FE85A91355E904_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::SurfaceType Method_1_AEDE5B9FE04FF966(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::SurfaceType a3)
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_AEDE5B9FE04FF966_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_868C75966CA63116(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_868C75966CA63116_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_75E2FBE7F8B7BE2D(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_75E2FBE7F8B7BE2D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color Method_1_66CB0237666DEA15(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_66CB0237666DEA15_OFFSET))(this, a1);
	}

	::System::Void Method_1_49280D40069D9A01(::RPG::Client::Effect_DynamicWavesManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_49280D40069D9A01_OFFSET))(this, a1);
	}

	::System::Void Method_1_398AAE6E04386FDF(::RPG::Client::Effect_DynamicWavesManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_398AAE6E04386FDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C313DA2C50C3A367(::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_C313DA2C50C3A367_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}
};
