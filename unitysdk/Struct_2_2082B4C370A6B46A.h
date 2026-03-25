#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2082B4C370A6B46A_METHOD_2_1B675D10278EA8D1_OFFSET UNITYSDK_OFFSET(0x14EB320)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x14EB4D0)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x14EB530)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14EB470)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_54050BD98C445A82_OFFSET UNITYSDK_OFFSET(0x14EB310)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_5CEA150B43F2AFC7_1_OFFSET UNITYSDK_OFFSET(0x14EB330)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_5CEA150B43F2AFC7_2_OFFSET UNITYSDK_OFFSET(0x14EB3D0)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_5CEA150B43F2AFC7_OFFSET UNITYSDK_OFFSET(0x14EB270)
#define STRUCT_2_2082B4C370A6B46A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EB590)

inline static constexpr unsigned int Struct_2_2082B4C370A6B46A_TypeDefinitionIndex = 46492;

struct alignas(8) Struct_2_2082B4C370A6B46A
{
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_2_2; // 0x20

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_2_5CEA150B43F2AFC7()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_5CEA150B43F2AFC7_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_54050BD98C445A82()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_54050BD98C445A82_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_1B675D10278EA8D1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_1B675D10278EA8D1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_2_5CEA150B43F2AFC7_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_5CEA150B43F2AFC7_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_2_5CEA150B43F2AFC7_2()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_5CEA150B43F2AFC7_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2082B4C370A6B46A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
