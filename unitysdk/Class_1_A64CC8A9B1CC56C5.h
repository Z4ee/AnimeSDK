#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_DB9F32FCA772D309_1;
class Class_2_1DB6C02CA182EEBA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A64CC8A9B1CC56C5_METHOD_1_68529220378F3FE9_OFFSET UNITYSDK_OFFSET(0x1241DBD0)
#define CLASS_1_A64CC8A9B1CC56C5_METHOD_1_8BBA815D7145F67D_OFFSET UNITYSDK_OFFSET(0x1241D990)
#define CLASS_1_A64CC8A9B1CC56C5_METHOD_1_CA7166CC92AE9871_OFFSET UNITYSDK_OFFSET(0x1241D650)
#define CLASS_1_A64CC8A9B1CC56C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1241D910)

inline static constexpr unsigned int Class_1_A64CC8A9B1CC56C5_TypeDefinitionIndex = 51685;

class Class_1_A64CC8A9B1CC56C5 : public ::System::Object
{
public:
	::Class_2_1DB6C02CA182EEBA* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_5; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::Enum_3_01618AD0437C8486_1 Field_1_1; // 0x2C
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64CC8A9B1CC56C5__CTOR_OFFSET))(this);
	}

	static ::Class_1_A64CC8A9B1CC56C5* Method_1_CA7166CC92AE9871(::Class_1_DB9F32FCA772D309_1* a1)
	{
		return ((::Class_1_A64CC8A9B1CC56C5*(*)(::Class_1_DB9F32FCA772D309_1*))((::PBYTE)hIl2Cpp + CLASS_1_A64CC8A9B1CC56C5_METHOD_1_CA7166CC92AE9871_OFFSET))(a1);
	}

	::Class_1_DB9F32FCA772D309_1* Method_1_8BBA815D7145F67D()
	{
		return ((::Class_1_DB9F32FCA772D309_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64CC8A9B1CC56C5_METHOD_1_8BBA815D7145F67D_OFFSET))(this);
	}

	::Class_1_A64CC8A9B1CC56C5* Method_1_68529220378F3FE9()
	{
		return ((::Class_1_A64CC8A9B1CC56C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64CC8A9B1CC56C5_METHOD_1_68529220378F3FE9_OFFSET))(this);
	}
};
