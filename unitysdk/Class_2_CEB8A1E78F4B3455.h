#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_1073;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15E1C990)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E1C900)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x15E1C480)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_B4919B17B855CC79_OFFSET UNITYSDK_OFFSET(0x15E1C580)
#define CLASS_2_CEB8A1E78F4B3455_METHOD_2_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0x15E1C7E0)
#define CLASS_2_CEB8A1E78F4B3455__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1C9E0)
#define CLASS_2_CEB8A1E78F4B3455__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E1C3C0)

inline static constexpr unsigned int Class_2_CEB8A1E78F4B3455_TypeDefinitionIndex = 68887;

class Class_2_CEB8A1E78F4B3455 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::RPGAnimationEvent* Field_2_1; // 0x60
	::UnityEngine::Animation* Field_2_2; // 0x68
	::Class_0_16E4307DCC419505_1073* Field_2_3; // 0x70
	::UnityEngine::UI::Image* Field_2_4; // 0x78
	::UnityEngine::UI::Image* Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_2_B4919B17B855CC79(::Class_0_16E4307DCC419505_1073* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1073*))((::PBYTE)hIl2Cpp + CLASS_2_CEB8A1E78F4B3455_METHOD_2_B4919B17B855CC79_OFFSET))(this, a1);
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
