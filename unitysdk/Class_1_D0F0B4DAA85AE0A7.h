#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0F0B4DAA85AE0A7_State.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_D0F0B4DAA85AE0A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155CE890)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x155CE8E0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_38D202FDE61EA186_OFFSET UNITYSDK_OFFSET(0x155CDBB0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_8BA30F6D1A9F8664_OFFSET UNITYSDK_OFFSET(0x155CE7A0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0x155CE2D0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x155CE180)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x155CE0C0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x155CE830)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_CB3626B1D60C1D1F_OFFSET UNITYSDK_OFFSET(0x155CE240)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_E3224D4A48D53F34_OFFSET UNITYSDK_OFFSET(0x155CEBB0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x155CDBA0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x155CDF30)
#define CLASS_1_D0F0B4DAA85AE0A7__CTOR_OFFSET UNITYSDK_OFFSET(0x155CEC10)

inline static constexpr unsigned int Class_1_D0F0B4DAA85AE0A7_TypeDefinitionIndex = 60830;

class Class_1_D0F0B4DAA85AE0A7 : public ::System::Object
{
public:
	// static const ::System::String* ICGPAOJCNDL; // 0x0
	// static const ::System::String* KLDEBAINFPE; // 0x0
	// static const ::System::String* EJFJJOMNMIC; // 0x0
	// static const ::System::Single LIDJCPGAGEB; // 0x0
	// static const ::System::Single DIFMKFDPIMD; // 0x0
	// static const ::System::Single FPFLGNDIMEN; // 0x0
	::RPG::Client::UIController* ABHEKFGPPMN; // 0x10
	::RPG::Client::UIController* KDPBOIALOFP; // 0x18
	::System::Single PGMIOKKLHIE; // 0x20
	::System::Boolean FKEKCJLGGLO; // 0x24
	::Class_1_D0F0B4DAA85AE0A7_State DLNIGFGLPLJ; // 0x28
	::System::UInt32 MJPJJAPCBNA; // 0x2C
	::RPG::GameCore::ELevelPerformanceType DBLMPDKBMLH; // 0x30
	::System::Int32 JFFABCKMMGF; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_38D202FDE61EA186(::UnityEngine::RenderTexture* a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_38D202FDE61EA186_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_92193DE475EFDCC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_92193DE475EFDCC9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3224D4A48D53F34(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_E3224D4A48D53F34_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Boolean Method_1_8BA30F6D1A9F8664(::RPG::Client::UIController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_8BA30F6D1A9F8664_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB3626B1D60C1D1F(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_CB3626B1D60C1D1F_OFFSET))(this, a1);
	}
};
