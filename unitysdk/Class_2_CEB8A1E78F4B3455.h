#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_865;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x8CABF40)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_29380239C62AC26B_OFFSET UNITYSDK_OFFSET(0x8CABDD0)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8CABEB0)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8CAC020)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_B4919B17B855CC79_OFFSET UNITYSDK_OFFSET(0x8CABBD0)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x8CABAE0)
#define CLASS_2_CEB8A1E78F4B3455__CTOR_OFFSET UNITYSDK_OFFSET(0x8CABF90)
#define CLASS_2_CEB8A1E78F4B3455__ONBIND_OFFSET UNITYSDK_OFFSET(0x8CAB8A0)
#define CLASS_2_CEB8A1E78F4B3455___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8CABFC0)

inline static constexpr unsigned int Class_2_CEB8A1E78F4B3455_TypeDefinitionIndex = 59092;

class Class_2_CEB8A1E78F4B3455 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	::Class_0_16E4307DCC419505_865* Field_2_4; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::UnityEngine::UI::Image* Field_2_0; // 0x70
	::UnityEngine::Animation* Field_2_2; // 0x78
	::RPG::Client::RPGAnimationEvent* Field_2_3; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_2_B4919B17B855CC79(::Class_0_16E4307DCC419505_865* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_865*))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_B4919B17B855CC79_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::String* Method_2_29380239C62AC26B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_29380239C62AC26B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
