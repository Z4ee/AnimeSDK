#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854.h"
#include "unitysdk/Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_1BD23F554D43084A.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_0_16E4307DCC419505_109;

#define CLASS_1_F0E4E2848B1D52CE_CLASS_2_3DC4DAE459292E77_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12A15D20)
#define CLASS_1_F0E4E2848B1D52CE_CLASS_2_3DC4DAE459292E77__CTOR_OFFSET UNITYSDK_OFFSET(0x12A15EB0)

inline static constexpr unsigned int Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_TypeDefinitionIndex = 43180;

class Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_6; // 0x70
	::Class_0_16E4307DCC419505_109<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_1BD23F554D43084A>* Field_2_1; // 0x78
	::System::Collections::Generic::Queue_1<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854>* Field_2_8; // 0x80
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_3; // 0x88
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_0; // 0x90
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_5; // 0x98
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_2; // 0xA0
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_7; // 0xA8
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_4; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E4E2848B1D52CE_CLASS_2_3DC4DAE459292E77__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E4E2848B1D52CE_CLASS_2_3DC4DAE459292E77_ONCREATEPROPERTY_OFFSET))(this);
	}
};
