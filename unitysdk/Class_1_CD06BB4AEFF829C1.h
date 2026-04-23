#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_621BFCA8F4CDD0A1;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0x9041960)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_4F680C77B6FB93F9_OFFSET UNITYSDK_OFFSET(0x9040390)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_5E1B12074A48CEA4_OFFSET UNITYSDK_OFFSET(0x9040E90)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_6DBF6F974FD0BF92_OFFSET UNITYSDK_OFFSET(0x90413A0)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_6FFDE68FDD1DA0C2_OFFSET UNITYSDK_OFFSET(0x9040C70)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x9041550)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_CA4DD35AA559AD98_OFFSET UNITYSDK_OFFSET(0x90404B0)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x90414D0)
#define CLASS_1_CD06BB4AEFF829C1_METHOD_1_E5DFAED3D7062967_OFFSET UNITYSDK_OFFSET(0x90415E0)
#define CLASS_1_CD06BB4AEFF829C1__CTOR_OFFSET UNITYSDK_OFFSET(0x9040340)
#define CLASS_1_CD06BB4AEFF829C1__SPLITINTOCLUSTERS_B__14_0_OFFSET UNITYSDK_OFFSET(0x9041A00)

inline static constexpr unsigned int Class_1_CD06BB4AEFF829C1_TypeDefinitionIndex = 71399;

class Class_1_CD06BB4AEFF829C1 : public ::System::Object
{
public:
	::System::Random* Field_1_10; // 0x10
	::UnityEngine::GameObject* Field_1_9; // 0x18
	::System::Collections::Generic::List_1<::Class_1_621BFCA8F4CDD0A1*>* Field_1_8; // 0x20
	::System::Single Field_1_1; // 0x28
	::UnityEngine::Vector2 Field_1_2; // 0x2C
	::System::Int32 Field_1_3; // 0x34
	::System::Single Field_1_5; // 0x38
	::System::Int32 Field_1_7; // 0x3C
	::System::Single Field_1_4; // 0x40
	::System::Single Field_1_6; // 0x44
	::System::Int32 Field_1_0; // 0x48

	::System::Void _ctor(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_621BFCA8F4CDD0A1*>* Method_1_4F680C77B6FB93F9()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_621BFCA8F4CDD0A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_4F680C77B6FB93F9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_621BFCA8F4CDD0A1*>* Method_1_CA4DD35AA559AD98()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_621BFCA8F4CDD0A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_CA4DD35AA559AD98_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_6FFDE68FDD1DA0C2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_6FFDE68FDD1DA0C2_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Single>* Method_1_5E1B12074A48CEA4(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_5E1B12074A48CEA4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5DFAED3D7062967(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_E5DFAED3D7062967_OFFSET))(this, a1);
	}

	::System::Single Method_1_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Single Method_1_6DBF6F974FD0BF92(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_6DBF6F974FD0BF92_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_1_45872D1C931761E1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1_METHOD_1_45872D1C931761E1_OFFSET))(this, a1, a2);
	}

	::System::Int32 _SplitIntoClusters_b__14_0(::System::Int32 _)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1__SPLITINTOCLUSTERS_B__14_0_OFFSET))(this, _);
	}
};
