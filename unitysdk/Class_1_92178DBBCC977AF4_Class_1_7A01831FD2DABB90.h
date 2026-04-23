#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_26.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92178DBBCC977AF4_CLASS_1_7A01831FD2DABB90__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E9BBC0)
#define CLASS_1_92178DBBCC977AF4_CLASS_1_7A01831FD2DABB90__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9BB30)

inline static constexpr unsigned int Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90_TypeDefinitionIndex = 37944;

class Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::RPG::GameCore::ChimeraDuelTeamType Field_1_9; // 0x1C
	::System::Int32 Field_1_13; // 0x20
	::Enum_3_0A3761FE34514D6C_26 Field_1_7; // 0x24
	::System::Int32 Field_1_14; // 0x28
	::System::Int32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_0; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::UInt32 Field_1_5; // 0x38
	::System::Int32 Field_1_2; // 0x3C
	::System::UInt32 Field_1_3; // 0x40
	::System::Int32 Field_1_11; // 0x44
	::System::Int32 Field_1_15; // 0x48
	::System::Boolean Field_1_16; // 0x4C
	::System::Int32 Field_1_12; // 0x50
	::System::Int32 Field_1_8; // 0x54

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Boolean a7, ::System::Int32 a8, ::RPG::GameCore::ChimeraDuelTeamType a9, ::System::Int32 a10, ::System::Int32 a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92178DBBCC977AF4_CLASS_1_7A01831FD2DABB90__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void _ctor_1(::Class_2_49CAB3DE74280C58* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92178DBBCC977AF4_CLASS_1_7A01831FD2DABB90__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
