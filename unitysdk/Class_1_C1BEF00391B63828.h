#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A06B10C4DE479401;
namespace MoleMole { class BezierCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C1BEF00391B63828_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x17EB2050)
#define CLASS_1_C1BEF00391B63828_METHOD_1_2759BB4309C451DA_OFFSET UNITYSDK_OFFSET(0x17EB1E10)
#define CLASS_1_C1BEF00391B63828_METHOD_1_4E4D44E9E71BC0AD_OFFSET UNITYSDK_OFFSET(0x17EB10E0)
#define CLASS_1_C1BEF00391B63828_METHOD_1_68416897A73BD41A_OFFSET UNITYSDK_OFFSET(0x17EB1400)
#define CLASS_1_C1BEF00391B63828_METHOD_1_7ABAA176B11E9110_OFFSET UNITYSDK_OFFSET(0x17EB1FD0)
#define CLASS_1_C1BEF00391B63828_METHOD_1_8AE7C6D7320CD780_OFFSET UNITYSDK_OFFSET(0x17EB1B30)
#define CLASS_1_C1BEF00391B63828_METHOD_1_F5D5E4ADB800E691_OFFSET UNITYSDK_OFFSET(0x17EB1BD0)
#define CLASS_1_C1BEF00391B63828__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB0EB0)

inline static constexpr unsigned int Class_1_C1BEF00391B63828_TypeDefinitionIndex = 43095;

class Class_1_C1BEF00391B63828 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>* Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::BezierCurve* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::BezierCurve*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_68416897A73BD41A(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>*))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828_METHOD_1_68416897A73BD41A_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_8AE7C6D7320CD780(::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>* a1)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>*))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828_METHOD_1_8AE7C6D7320CD780_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_F5D5E4ADB800E691(::System::Single a1, ::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>* a2)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>*))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828_METHOD_1_F5D5E4ADB800E691_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_1_7ABAA176B11E9110(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828_METHOD_1_7ABAA176B11E9110_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	static ::System::Void Method_1_4E4D44E9E71BC0AD(::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828_METHOD_1_4E4D44E9E71BC0AD_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_2759BB4309C451DA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828_METHOD_1_2759BB4309C451DA_OFFSET))(a1, a2, a3, a4, a5);
	}
};
