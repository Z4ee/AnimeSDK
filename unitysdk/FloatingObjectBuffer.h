#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FloatingProxyParticle.h"
#include "unitysdk/System/Object.h"

class WaveFloating;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define FLOATINGOBJECTBUFFER_GET_SIMPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1188ED20)
#define FLOATINGOBJECTBUFFER_METHOD_1_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x1188F1B0)
#define FLOATINGOBJECTBUFFER_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x1188F960)
#define FLOATINGOBJECTBUFFER_METHOD_1_920CE21000EB4B8F_OFFSET UNITYSDK_OFFSET(0x1188F3C0)
#define FLOATINGOBJECTBUFFER_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1188FC80)
#define FLOATINGOBJECTBUFFER_METHOD_1_AE231BEA38F773A1_OFFSET UNITYSDK_OFFSET(0x1188ED70)
#define FLOATINGOBJECTBUFFER_METHOD_1_C440F43DE8FB4205_1_OFFSET UNITYSDK_OFFSET(0x1188F470)
#define FLOATINGOBJECTBUFFER_METHOD_1_C440F43DE8FB4205_OFFSET UNITYSDK_OFFSET(0x1188F420)
#define FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1188FB10)
#define FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1188FB50)
#define FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1188F4C0)
#define FLOATINGOBJECTBUFFER_METHOD_1_D2DA768232E640DF_1_OFFSET UNITYSDK_OFFSET(0x1188FC10)
#define FLOATINGOBJECTBUFFER_METHOD_1_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x1188FBA0)
#define FLOATINGOBJECTBUFFER_METHOD_1_E22A64CA6B665CC8_OFFSET UNITYSDK_OFFSET(0x1188F500)
#define FLOATINGOBJECTBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1188FCD0)

inline static constexpr unsigned int FloatingObjectBuffer_TypeDefinitionIndex = 44240;

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

	::System::Void Method_1_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_35942D7A8A374AB0_OFFSET))(this);
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

	::System::Void Method_1_E22A64CA6B665CC8(::System::Collections::Generic::List_1<::FloatingProxyParticle>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FloatingProxyParticle>*))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_E22A64CA6B665CC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_1_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_D2DA768232E640DF_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_1_D2DA768232E640DF_1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_D2DA768232E640DF_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
