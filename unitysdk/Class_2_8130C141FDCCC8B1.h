#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_51.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5BD3EF046502B972;
class Class_1_F356FCA60006484C;
namespace MoleMole::Config { class AnimCurveParam; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace System { class Object; }
template <typename T> class Class_2_2CF11500DC82A318_Class_1_9966DA97F862EC18;

#define CLASS_2_8130C141FDCCC8B1_METHOD_2_2467AAF22062FD85_OFFSET UNITYSDK_OFFSET(0x12E4C5B0)
#define CLASS_2_8130C141FDCCC8B1_METHOD_2_75ADC61DA2042576_OFFSET UNITYSDK_OFFSET(0x12E4BA80)
#define CLASS_2_8130C141FDCCC8B1_METHOD_2_89ACAF7889AF1DB2_OFFSET UNITYSDK_OFFSET(0x12E4B810)
#define CLASS_2_8130C141FDCCC8B1_METHOD_2_8A61E72A765F9176_OFFSET UNITYSDK_OFFSET(0x12E4C110)
#define CLASS_2_8130C141FDCCC8B1_METHOD_2_DD257A95D543C77A_OFFSET UNITYSDK_OFFSET(0x12E4C700)
#define CLASS_2_8130C141FDCCC8B1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E4C100)

inline static constexpr unsigned int Class_2_8130C141FDCCC8B1_TypeDefinitionIndex = 74526;

class Class_2_8130C141FDCCC8B1 : public ::Class_1_43BD383C98B4C0C5_51
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8130C141FDCCC8B1__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_89ACAF7889AF1DB2(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_8130C141FDCCC8B1_METHOD_2_89ACAF7889AF1DB2_OFFSET))(this, a1);
	}

	static ::Class_1_5BD3EF046502B972* Method_2_8A61E72A765F9176(::MoleMole::Config::ConfigHollowCameraStretchV2*& a1, ::MoleMole::UICameraAtom& a2, ::MoleMole::UICameraAtom& a3)
	{
		return ((::Class_1_5BD3EF046502B972*(*)(::MoleMole::Config::ConfigHollowCameraStretchV2*&, ::MoleMole::UICameraAtom&, ::MoleMole::UICameraAtom&))((::PBYTE)hIl2Cpp + CLASS_2_8130C141FDCCC8B1_METHOD_2_8A61E72A765F9176_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_2CF11500DC82A318_Class_1_9966DA97F862EC18<::System::Single>* Method_2_2467AAF22062FD85(::MoleMole::Config::AnimCurveParam* a1, ::System::Single a2)
	{
		return ((::Class_2_2CF11500DC82A318_Class_1_9966DA97F862EC18<::System::Single>*(*)(::MoleMole::Config::AnimCurveParam*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8130C141FDCCC8B1_METHOD_2_2467AAF22062FD85_OFFSET))(a1, a2);
	}

	::Class_1_F356FCA60006484C* Method_2_DD257A95D543C77A(::MoleMole::Config::ConfigHollowCameraStretchV2* a1, ::MoleMole::UICameraAtom a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_8130C141FDCCC8B1_METHOD_2_DD257A95D543C77A_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_5BD3EF046502B972* Method_2_75ADC61DA2042576(::MoleMole::UICameraAtom& a1, ::MoleMole::Config::ConfigHollowCameraStretchV2*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::Class_1_5BD3EF046502B972*(*)(::MoleMole::UICameraAtom&, ::MoleMole::Config::ConfigHollowCameraStretchV2*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_8130C141FDCCC8B1_METHOD_2_75ADC61DA2042576_OFFSET))(a1, a2, a3);
	}
};
