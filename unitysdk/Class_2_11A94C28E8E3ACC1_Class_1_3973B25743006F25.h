#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_11A94C28E8E3ACC1_CLASS_1_3973B25743006F25_METHOD_1_BA9B6055EC75733D_OFFSET UNITYSDK_OFFSET(0x134F7040)
#define CLASS_2_11A94C28E8E3ACC1_CLASS_1_3973B25743006F25__CTOR_OFFSET UNITYSDK_OFFSET(0x134F7030)

inline static constexpr unsigned int Class_2_11A94C28E8E3ACC1_Class_1_3973B25743006F25_TypeDefinitionIndex = 71392;

class Class_2_11A94C28E8E3ACC1_Class_1_3973B25743006F25 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_CLASS_1_3973B25743006F25__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA9B6055EC75733D(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_CLASS_1_3973B25743006F25_METHOD_1_BA9B6055EC75733D_OFFSET))(this, a1);
	}
};
