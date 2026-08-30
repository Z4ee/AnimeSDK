#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_0_16E4307DCC419505_1129;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x13501010)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x13500B00)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13500F80)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_B4919B17B855CC79_OFFSET UNITYSDK_OFFSET(0x13500C00)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0x13500E60)
#define CLASS_2_CEB8A1E78F4B3455__CTOR_OFFSET UNITYSDK_OFFSET(0x13501060)
#define CLASS_2_CEB8A1E78F4B3455__ONBIND_OFFSET UNITYSDK_OFFSET(0x13500A40)

inline static constexpr unsigned int Class_2_CEB8A1E78F4B3455_TypeDefinitionIndex = 72086;

class Class_2_CEB8A1E78F4B3455 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* KKNLLHMIHEA; // 0x0
	::Class_0_16E4307DCC419505_1129* EEHODNKAAMH; // 0x60
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x68
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x70
	::UnityEngine::UI::Image* OJKPNKKJADJ; // 0x78
	::UnityEngine::Animation* KCOAILOHDND; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_2_B4919B17B855CC79(::Class_0_16E4307DCC419505_1129* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1129*))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_B4919B17B855CC79_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::String* Method_2_CD5C08A2521794A0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_CD5C08A2521794A0_OFFSET))(this);
	}
};
