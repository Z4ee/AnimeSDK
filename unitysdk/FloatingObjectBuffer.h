#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FloatingProxyParticle.h"
#include "unitysdk/System/Object.h"

class WaveFloating;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define FLOATINGOBJECTBUFFER_GET_SIMPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x15615E30)
#define FLOATINGOBJECTBUFFER_METHOD_1_33FF6C2A9A5A7FC3_OFFSET UNITYSDK_OFFSET(0x15616690)
#define FLOATINGOBJECTBUFFER_METHOD_1_920CE21000EB4B8F_OFFSET UNITYSDK_OFFSET(0x15616550)
#define FLOATINGOBJECTBUFFER_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15616E40)
#define FLOATINGOBJECTBUFFER_METHOD_1_9B4F9A6EF59CF365_1_OFFSET UNITYSDK_OFFSET(0x15616DC0)
#define FLOATINGOBJECTBUFFER_METHOD_1_9B4F9A6EF59CF365_OFFSET UNITYSDK_OFFSET(0x15616D40)
#define FLOATINGOBJECTBUFFER_METHOD_1_AE231BEA38F773A1_OFFSET UNITYSDK_OFFSET(0x15615E80)
#define FLOATINGOBJECTBUFFER_METHOD_1_C440F43DE8FB4205_1_OFFSET UNITYSDK_OFFSET(0x15616600)
#define FLOATINGOBJECTBUFFER_METHOD_1_C440F43DE8FB4205_OFFSET UNITYSDK_OFFSET(0x156165B0)
#define FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15616CB0)
#define FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15616CF0)
#define FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15616650)
#define FLOATINGOBJECTBUFFER_METHOD_1_CCF7A015FEFCDABD_OFFSET UNITYSDK_OFFSET(0x15616B00)
#define FLOATINGOBJECTBUFFER_METHOD_1_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x15616370)
#define FLOATINGOBJECTBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x15616E90)

inline static constexpr unsigned int FloatingObjectBuffer_TypeDefinitionIndex = 47954;

class FloatingObjectBuffer : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Texture*>* renderTextures; // 0x10
	::UnityEngine::Texture2D* textureStage; // 0x18
	::System::Collections::Generic::List_1<::FloatingProxyParticle>* simParticlesRaw; // 0x20
	::System::Int32 id; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SimParticleCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_GET_SIMPARTICLECOUNT_OFFSET))(this);
	}

	::System::Void Method_1_AE231BEA38F773A1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_AE231BEA38F773A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_1_920CE21000EB4B8F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_920CE21000EB4B8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C440F43DE8FB4205(::WaveFloating* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveFloating*))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_C440F43DE8FB4205_OFFSET))(this, a1);
	}

	::System::Void Method_1_C440F43DE8FB4205_1(::WaveFloating* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveFloating*))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_C440F43DE8FB4205_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_33FF6C2A9A5A7FC3(::System::Collections::Generic::List_1<::FloatingProxyParticle>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FloatingProxyParticle>*))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_33FF6C2A9A5A7FC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCF7A015FEFCDABD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_CCF7A015FEFCDABD_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_1_9B4F9A6EF59CF365()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_9B4F9A6EF59CF365_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_1_9B4F9A6EF59CF365_1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_9B4F9A6EF59CF365_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
