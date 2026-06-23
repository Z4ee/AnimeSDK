#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_1_E3DC1E0D82B1C1F3_EQUALS_OFFSET UNITYSDK_OFFSET(0x189157A0)
#define CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_0C0C508050B6FD34_OFFSET UNITYSDK_OFFSET(0x189164A0)
#define CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x18916350)
#define CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18915800)
#define CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_958B8E447A8DEF3F_OFFSET UNITYSDK_OFFSET(0x18915E50)
#define CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0x18915A70)
#define CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_AEBB6B9FF3174063_OFFSET UNITYSDK_OFFSET(0x18915810)
#define CLASS_1_E3DC1E0D82B1C1F3__CTOR_OFFSET UNITYSDK_OFFSET(0x189157F0)

inline static constexpr unsigned int Class_1_E3DC1E0D82B1C1F3_TypeDefinitionIndex = 55127;

class Class_1_E3DC1E0D82B1C1F3 : public ::System::Object
{
public:
	::Struct_2_D89177B577188692 Field_1_0; // 0x10
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Int32 Field_1_1; // 0x38
	::System::Boolean Field_1_3; // 0x3C
	::System::Boolean Field_1_2; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_E3DC1E0D82B1C1F3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E3DC1E0D82B1C1F3*))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3_EQUALS_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_AEBB6B9FF3174063(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_AEBB6B9FF3174063_OFFSET))(this, a1);
	}

	::System::Void Method_1_958B8E447A8DEF3F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_958B8E447A8DEF3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_1_A002848F130F70CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_A002848F130F70CA_OFFSET))(this);
	}

	::System::Void Method_1_0C0C508050B6FD34(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + CLASS_1_E3DC1E0D82B1C1F3_METHOD_1_0C0C508050B6FD34_OFFSET))(this, a1);
	}
};
