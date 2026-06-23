#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_83.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Share/EQuestLifeType.h"
#include "unitysdk/Share/EQuestType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_336.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F69D29AB796376C2_METHOD_2_13370B63EDCE306C_OFFSET UNITYSDK_OFFSET(0x142B3150)
#define CLASS_2_F69D29AB796376C2_METHOD_2_689C262ED515F3AE_OFFSET UNITYSDK_OFFSET(0x142B2AB0)
#define CLASS_2_F69D29AB796376C2_METHOD_2_8A861E73F7EF9F36_OFFSET UNITYSDK_OFFSET(0x142B2950)
#define CLASS_2_F69D29AB796376C2_METHOD_2_935CE26C13FD1481_OFFSET UNITYSDK_OFFSET(0x142B31A0)
#define CLASS_2_F69D29AB796376C2_METHOD_2_A5F60EA8C3AC16FB_OFFSET UNITYSDK_OFFSET(0x142B2B10)
#define CLASS_2_F69D29AB796376C2_METHOD_2_ADFE9F75349F8E89_1_OFFSET UNITYSDK_OFFSET(0x142B3000)
#define CLASS_2_F69D29AB796376C2_METHOD_2_ADFE9F75349F8E89_OFFSET UNITYSDK_OFFSET(0x142B2960)
#define CLASS_2_F69D29AB796376C2_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x142B2AC0)
#define CLASS_2_F69D29AB796376C2_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x142B31B0)
#define CLASS_2_F69D29AB796376C2_METHOD_2_F2141DA88E673709_OFFSET UNITYSDK_OFFSET(0x142B2AD0)
#define CLASS_2_F69D29AB796376C2__CTOR_OFFSET UNITYSDK_OFFSET(0x142B28B0)

inline static constexpr unsigned int Class_2_F69D29AB796376C2_TypeDefinitionIndex = 49180;

class Class_2_F69D29AB796376C2 : public ::Class_1_5DA2E7556103D5A3_83
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0xD0
	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Field_2_2; // 0xD8
	::System::Int32 Field_2_0; // 0xE0
	::Share::EQuestLifeType Field_2_1; // 0xE4

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_336 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_336, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_8A861E73F7EF9F36()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_8A861E73F7EF9F36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_ADFE9F75349F8E89()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_ADFE9F75349F8E89_OFFSET))(this);
	}

	::System::Void Method_2_689C262ED515F3AE(::Share::EQuestLifeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EQuestLifeType))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_689C262ED515F3AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt16 Method_2_F2141DA88E673709()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_F2141DA88E673709_OFFSET))(this);
	}

	::System::String* Method_2_A5F60EA8C3AC16FB(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_A5F60EA8C3AC16FB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_ADFE9F75349F8E89_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_ADFE9F75349F8E89_1_OFFSET))(this);
	}

	::Share::EQuestType Method_2_13370B63EDCE306C()
	{
		return ((::Share::EQuestType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_13370B63EDCE306C_OFFSET))(this);
	}

	::Share::EQuestLifeType Method_2_935CE26C13FD1481()
	{
		return ((::Share::EQuestLifeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_935CE26C13FD1481_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F69D29AB796376C2_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
