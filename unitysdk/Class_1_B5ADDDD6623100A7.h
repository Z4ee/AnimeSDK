#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1117;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System { class String; }

#define CLASS_1_B5ADDDD6623100A7_METHOD_1_78921489596CCDCD_OFFSET UNITYSDK_OFFSET(0x142D93A0)
#define CLASS_1_B5ADDDD6623100A7_METHOD_1_B1FA97B4943ABDA7_OFFSET UNITYSDK_OFFSET(0x142D99A0)
#define CLASS_1_B5ADDDD6623100A7_METHOD_1_F7D17E748C78B648_OFFSET UNITYSDK_OFFSET(0x142D97E0)

inline static constexpr unsigned int Class_1_B5ADDDD6623100A7_TypeDefinitionIndex = 69638;

class Class_1_B5ADDDD6623100A7 : public ::System::Object
{
public:
	static ::System::String* Method_1_78921489596CCDCD(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::String*(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5ADDDD6623100A7_METHOD_1_78921489596CCDCD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F7D17E748C78B648(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5ADDDD6623100A7_METHOD_1_F7D17E748C78B648_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B1FA97B4943ABDA7(::Class_0_16E4307DCC419505_1117* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_1117*))((::PBYTE)hIl2Cpp + CLASS_1_B5ADDDD6623100A7_METHOD_1_B1FA97B4943ABDA7_OFFSET))(a1);
	}
};
