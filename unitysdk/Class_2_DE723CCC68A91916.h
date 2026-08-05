#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Enum_3_B1D0BD11CC14B0E6.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_1.h"

class Class_1_47F263CB5C51B1A3_1;
class Class_1_C24B693A39FF0505;
class Class_2_208CC9941471731A_397;
class Class_2_576F70FE740CFF91;
class Class_2_A09016458FA07BDF;
class Class_3_F1C68A9B30948CCC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_161;
template <typename T> class Class_0_16E4307DCC419505_138;
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_DE723CCC68A91916_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C1F370)
#define CLASS_2_DE723CCC68A91916_METHOD_2_1F6790C3F844E7A6_OFFSET UNITYSDK_OFFSET(0x17C1F960)
#define CLASS_2_DE723CCC68A91916_METHOD_2_4F2DF85F37DC818F_OFFSET UNITYSDK_OFFSET(0x17C1F550)
#define CLASS_2_DE723CCC68A91916_METHOD_2_51B37F44CBD968A6_OFFSET UNITYSDK_OFFSET(0x17C20030)
#define CLASS_2_DE723CCC68A91916_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x17C1FD40)
#define CLASS_2_DE723CCC68A91916_METHOD_2_6396F11B1E7F1C77_OFFSET UNITYSDK_OFFSET(0x17C1F700)
#define CLASS_2_DE723CCC68A91916_METHOD_2_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x17C20020)
#define CLASS_2_DE723CCC68A91916_METHOD_2_CAC2AF2352C27911_OFFSET UNITYSDK_OFFSET(0x17C1F5D0)
#define CLASS_2_DE723CCC68A91916_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17C1E710)
#define CLASS_2_DE723CCC68A91916__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1F540)

inline static constexpr unsigned int Class_2_DE723CCC68A91916_TypeDefinitionIndex = 41469;

class Class_2_DE723CCC68A91916 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	// static const ::System::Int32 Field_2_3 = 0x0; // 0x0
	::Class_0_16E4307DCC419505_161<::Enum_3_B1D0BD11CC14B0E6, ::System::Int32>* Field_2_4; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_161<::System::Int32, ::System::Boolean>* Field_2_9; // 0x90
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_13; // 0x98
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_8; // 0xA0
	::Class_0_16E4307DCC419505_161<::Enum_3_B1D0BD11CC14B0E6, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_4C8453486C91E3A1_1>*>* Field_2_5; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_576F70FE740CFF91*>* Field_2_2; // 0xB0
	::Class_0_16E4307DCC419505_138<::System::Int32>* Field_2_7; // 0xB8
	::Class_0_16E4307DCC419505_161<::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_4C8453486C91E3A1_1>*>* Field_2_6; // 0xC0
	::Class_0_16E4307DCC419505_161<::System::Int32, ::Class_3_F1C68A9B30948CCC*>* Field_2_10; // 0xC8
	::Class_0_16E4307DCC419505_159<::Class_1_47F263CB5C51B1A3_1*>* Field_2_12; // 0xD0
	::Class_0_16E4307DCC419505_159<::Class_1_C24B693A39FF0505*>* Field_2_15; // 0xD8
	::Class_0_16E4307DCC419505_161<::System::Int32, ::System::Boolean>* Field_2_11; // 0xE0
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_14; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_A09016458FA07BDF*>* Field_2_1; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_2_4F2DF85F37DC818F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_METHOD_2_4F2DF85F37DC818F_OFFSET))(this);
	}

	::System::Int32 Method_2_CAC2AF2352C27911()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_METHOD_2_CAC2AF2352C27911_OFFSET))(this);
	}

	::System::Boolean Method_2_6396F11B1E7F1C77(::Class_2_208CC9941471731A_397* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_397*))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_METHOD_2_6396F11B1E7F1C77_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1F6790C3F844E7A6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_METHOD_2_1F6790C3F844E7A6_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::System::Void Method_2_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_METHOD_2_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Int32 Method_2_51B37F44CBD968A6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE723CCC68A91916_METHOD_2_51B37F44CBD968A6_OFFSET))(this);
	}
};
