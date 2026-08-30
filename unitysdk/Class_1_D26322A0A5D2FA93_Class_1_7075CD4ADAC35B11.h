#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11_CLEAR_OFFSET UNITYSDK_OFFSET(0x18753BA0)
#define CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11__CTOR_OFFSET UNITYSDK_OFFSET(0x18753C10)

inline static constexpr unsigned int Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11_TypeDefinitionIndex = 60869;

class Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11 : public ::System::Object
{
public:
	// static const ::System::Single DOPMIIHPALK; // 0x0
	// static const ::System::Single ANNIBFPMFFG; // 0x0
	// static const ::System::Single OPIKCOBIMOD; // 0x0
	::System::Action* HHAFBKLIAEG; // 0x10
	::System::Func_1<::System::Boolean>* AKOMKFNMNOO; // 0x18
	::System::Single HNABKMOKIKO; // 0x20
	::System::Boolean OPAACBLOALC; // 0x24
	::System::Boolean KIBAEJOKIAF; // 0x25
	::System::Single HNBAPLCOKAH; // 0x28
	::System::Single JOCODLOKEGM; // 0x2C
	::System::Single LFHMPFCJOCP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11_CLEAR_OFFSET))(this);
	}
};
