#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0F0B4DAA85AE0A7_State.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_D0F0B4DAA85AE0A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158E0DF0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x158E0E40)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x158E0340)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_38D202FDE61EA186_OFFSET UNITYSDK_OFFSET(0x158DFF40)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x158E05F0)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158E0550)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0x158E0710)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_8BA30F6D1A9F8664_OFFSET UNITYSDK_OFFSET(0x158E0C80)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x158E0D10)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_CB3626B1D60C1D1F_OFFSET UNITYSDK_OFFSET(0x158E0680)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_E0492FF50E9027C9_OFFSET UNITYSDK_OFFSET(0x158E1190)
#define CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x158DFF30)
#define CLASS_1_D0F0B4DAA85AE0A7__CTOR_OFFSET UNITYSDK_OFFSET(0x158E11F0)

inline static constexpr unsigned int Class_1_D0F0B4DAA85AE0A7_TypeDefinitionIndex = 60733;

class Class_1_D0F0B4DAA85AE0A7 : public ::System::Object
{
public:
	// static const ::System::String* ICGPAOJCNDL; // 0x0
	// static const ::System::String* KLDEBAINFPE; // 0x0
	// static const ::System::String* EJFJJOMNMIC; // 0x0
	// static const ::System::Single LIDJCPGAGEB; // 0x0
	// static const ::System::Single DIFMKFDPIMD; // 0x0
	// static const ::System::Single FPFLGNDIMEN; // 0x0
	::RPG::Client::UIController* KDPBOIALOFP; // 0x10
	::RPG::Client::UIController* ABHEKFGPPMN; // 0x18
	::System::UInt32 MJPJJAPCBNA; // 0x20
	::System::Int32 JFFABCKMMGF; // 0x24
	::System::Boolean FKEKCJLGGLO; // 0x28
	::RPG::GameCore::ELevelPerformanceType DBLMPDKBMLH; // 0x2C
	::System::Single PGMIOKKLHIE; // 0x30
	::Class_1_D0F0B4DAA85AE0A7_State DLNIGFGLPLJ; // 0x34

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

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_64865938ADBCB300(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_64865938ADBCB300_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E0492FF50E9027C9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_E0492FF50E9027C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F0B4DAA85AE0A7_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
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
