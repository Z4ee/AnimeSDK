#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3E8412A97A3D0DF7_2_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB435E10)
#define CLASS_1_3E8412A97A3D0DF7_2_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB435DF0)
#define CLASS_1_3E8412A97A3D0DF7_2_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB435E20)
#define CLASS_1_3E8412A97A3D0DF7_2_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB435E00)
#define CLASS_1_3E8412A97A3D0DF7_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB435E30)

inline static constexpr unsigned int Class_1_3E8412A97A3D0DF7_2_TypeDefinitionIndex = 80610;

class Class_1_3E8412A97A3D0DF7_2 : public ::System::Object
{
public:
	::System::String* _Desc_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_2_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_2_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_Desc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_2_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_2_SET_DESC_OFFSET))(this, a1);
	}
};
