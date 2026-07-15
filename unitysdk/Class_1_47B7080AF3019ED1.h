#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_201314D6C7A93CDF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_47B7080AF3019ED1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170A38B0)
#define CLASS_1_47B7080AF3019ED1_METHOD_1_17EDEC1890597114_OFFSET UNITYSDK_OFFSET(0x170AB390)
#define CLASS_1_47B7080AF3019ED1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x170ABC60)
#define CLASS_1_47B7080AF3019ED1_METHOD_1_21AF6E76083FBD1E_OFFSET UNITYSDK_OFFSET(0x170AB670)
#define CLASS_1_47B7080AF3019ED1_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x170AB990)
#define CLASS_1_47B7080AF3019ED1_METHOD_1_E0474ABD724209BE_OFFSET UNITYSDK_OFFSET(0x170ABA60)
#define CLASS_1_47B7080AF3019ED1__CTOR_OFFSET UNITYSDK_OFFSET(0x170A3790)

inline static constexpr unsigned int Class_1_47B7080AF3019ED1_TypeDefinitionIndex = 66417;

class Class_1_47B7080AF3019ED1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_201314D6C7A93CDF*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47B7080AF3019ED1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47B7080AF3019ED1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_17EDEC1890597114(::Class_1_201314D6C7A93CDF* a1, ::System::UInt32 a2, ::RPG::MVector3 a3, ::System::Nullable_1<::RPG::MVector3> a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_201314D6C7A93CDF*, ::System::UInt32, ::RPG::MVector3, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + CLASS_1_47B7080AF3019ED1_METHOD_1_17EDEC1890597114_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::MVector3 Method_1_21AF6E76083FBD1E(::System::Single a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_47B7080AF3019ED1_METHOD_1_21AF6E76083FBD1E_OFFSET))(this, a1);
	}

	::Class_1_201314D6C7A93CDF* Method_1_67C10584F4320583()
	{
		return ((::Class_1_201314D6C7A93CDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47B7080AF3019ED1_METHOD_1_67C10584F4320583_OFFSET))(this);
	}

	::System::Void Method_1_E0474ABD724209BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47B7080AF3019ED1_METHOD_1_E0474ABD724209BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47B7080AF3019ED1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
