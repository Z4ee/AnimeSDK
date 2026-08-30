#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_39;
namespace BansheeGz::BGSpline::Curve { class ICustomBGCurve; }

#define CLASS_1_B6045334FA181376__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0E600)

inline static constexpr unsigned int Class_1_B6045334FA181376_TypeDefinitionIndex = 41311;

class Class_1_B6045334FA181376 : public ::System::Object
{
public:
	::BansheeGz::BGSpline::Curve::ICustomBGCurve* NLIFDJHPHLP; // 0x10
	::Il2CppArray<::Class_1_47EB23CB5C4B2615_39*>* LFFLDCAICMJ; // 0x18
	::System::Boolean IGLNFOCGMFK; // 0x20
	::System::Single JJGOEDKMFPH; // 0x24
	::System::Single BMPGDKIMCGE; // 0x28
	::System::Single OJDCAPDHOIL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6045334FA181376__CTOR_OFFSET))(this);
	}
};
