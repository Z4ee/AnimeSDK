#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_CCF20DC2AAC0169A;

#define CLASS_1_1C87E05DC1AC3C04_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x17EB2800)
#define CLASS_1_1C87E05DC1AC3C04_GET_POSITIONINFO_OFFSET UNITYSDK_OFFSET(0x17EB27E0)
#define CLASS_1_1C87E05DC1AC3C04_SET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x17EB2810)
#define CLASS_1_1C87E05DC1AC3C04_SET_POSITIONINFO_OFFSET UNITYSDK_OFFSET(0x17EB27F0)
#define CLASS_1_1C87E05DC1AC3C04__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB2820)

inline static constexpr unsigned int Class_1_1C87E05DC1AC3C04_TypeDefinitionIndex = 63059;

class Class_1_1C87E05DC1AC3C04 : public ::System::Object
{
public:
	::Class_1_CCF20DC2AAC0169A* _PositionInfo_k__BackingField; // 0x10
	::RPG::Client::TextID _ContentTextID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C87E05DC1AC3C04__CTOR_OFFSET))(this);
	}

	::Class_1_CCF20DC2AAC0169A* get_PositionInfo()
	{
		return ((::Class_1_CCF20DC2AAC0169A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C87E05DC1AC3C04_GET_POSITIONINFO_OFFSET))(this);
	}

	::System::Void set_PositionInfo(::Class_1_CCF20DC2AAC0169A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + CLASS_1_1C87E05DC1AC3C04_SET_POSITIONINFO_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ContentTextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C87E05DC1AC3C04_GET_CONTENTTEXTID_OFFSET))(this);
	}

	::System::Void set_ContentTextID(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_1C87E05DC1AC3C04_SET_CONTENTTEXTID_OFFSET))(this, a1);
	}
};
