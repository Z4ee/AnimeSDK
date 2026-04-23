#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_2AE9FC3995804AA7;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace System { class Exception; }

#define CLASS_1_8C66314070BE1DFC_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A272F0)
#define CLASS_1_8C66314070BE1DFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A27340)
#define CLASS_1_8C66314070BE1DFC_METHOD_1_3B3B17EEC8D0417A_OFFSET UNITYSDK_OFFSET(0x9A273B0)
#define CLASS_1_8C66314070BE1DFC_METHOD_1_6D58C177FA29984C_OFFSET UNITYSDK_OFFSET(0x9A271A0)
#define CLASS_1_8C66314070BE1DFC_METHOD_1_AAC50C44B9E263D9_OFFSET UNITYSDK_OFFSET(0x9A275D0)
#define CLASS_1_8C66314070BE1DFC_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x9A27140)
#define CLASS_1_8C66314070BE1DFC_ONALLOC_OFFSET UNITYSDK_OFFSET(0x9A27220)
#define CLASS_1_8C66314070BE1DFC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x9A27270)
#define CLASS_1_8C66314070BE1DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x9A27710)

inline static constexpr unsigned int Class_1_8C66314070BE1DFC_TypeDefinitionIndex = 62260;

class Class_1_8C66314070BE1DFC : public ::System::Object
{
public:
	::Class_1_2AE9FC3995804AA7* Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D58C177FA29984C(::RPG::GameCore::RogueTournMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_METHOD_1_6D58C177FA29984C_OFFSET))(this, a1);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_3B3B17EEC8D0417A(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Exception*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Exception*&))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_METHOD_1_3B3B17EEC8D0417A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AAC50C44B9E263D9(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_8C66314070BE1DFC_METHOD_1_AAC50C44B9E263D9_OFFSET))(this, a1);
	}
};
