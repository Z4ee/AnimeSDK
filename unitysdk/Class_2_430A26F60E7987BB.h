#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_107.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }

#define CLASS_2_430A26F60E7987BB_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x12AA9D40)
#define CLASS_2_430A26F60E7987BB_METHOD_2_4D1308B985836BAF_OFFSET UNITYSDK_OFFSET(0x12AAA250)
#define CLASS_2_430A26F60E7987BB_METHOD_2_6A644CA0AAFD6666_OFFSET UNITYSDK_OFFSET(0x12AA9D50)
#define CLASS_2_430A26F60E7987BB_METHOD_2_D5AFFC297CB7D110_OFFSET UNITYSDK_OFFSET(0x12AA9FD0)
#define CLASS_2_430A26F60E7987BB__CTOR_OFFSET UNITYSDK_OFFSET(0x12AAA540)

inline static constexpr unsigned int Class_2_430A26F60E7987BB_TypeDefinitionIndex = 61049;

class Class_2_430A26F60E7987BB : public ::Class_1_43BD383C98B4C0C5_107
{
public:
	::Class_1_2670985A37556FEA* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430A26F60E7987BB__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430A26F60E7987BB_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_2_6A644CA0AAFD6666(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_430A26F60E7987BB_METHOD_2_6A644CA0AAFD6666_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_D5AFFC297CB7D110()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430A26F60E7987BB_METHOD_2_D5AFFC297CB7D110_OFFSET))(this);
	}

	::System::UInt32 Method_2_4D1308B985836BAF(::RPG::GameCore::FixPoint a1, ::System::String* a2, ::System::Int32& a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_430A26F60E7987BB_METHOD_2_4D1308B985836BAF_OFFSET))(this, a1, a2, a3);
	}
};
