#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7912BA534EDCEE86_Mode.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
class Class_1_0C40FF0290B5423C;
class Class_1_582251EF6392A222;
class Class_1_AB817CB39E494C61;
class Class_1_D19B260269D43396;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_053C0CF0777C1CB9_METHOD_1_27021204C0A46FF4_OFFSET UNITYSDK_OFFSET(0x113618B0)
#define CLASS_1_053C0CF0777C1CB9_METHOD_1_2E8C3A9EB158A39D_OFFSET UNITYSDK_OFFSET(0x113614C0)
#define CLASS_1_053C0CF0777C1CB9_METHOD_1_484CA283FECEFC28_OFFSET UNITYSDK_OFFSET(0x11361510)
#define CLASS_1_053C0CF0777C1CB9_METHOD_1_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x11361460)
#define CLASS_1_053C0CF0777C1CB9_METHOD_1_6B61FC8F1334140B_OFFSET UNITYSDK_OFFSET(0x11361B60)
#define CLASS_1_053C0CF0777C1CB9_METHOD_1_8406C4503F4E50CD_OFFSET UNITYSDK_OFFSET(0x11361BC0)
#define CLASS_1_053C0CF0777C1CB9_METHOD_1_AA3E8FC5C3E6B9A4_OFFSET UNITYSDK_OFFSET(0x11361830)
#define CLASS_1_053C0CF0777C1CB9__CTOR_OFFSET UNITYSDK_OFFSET(0x11361C10)

inline static constexpr unsigned int Class_1_053C0CF0777C1CB9_TypeDefinitionIndex = 58370;

class Class_1_053C0CF0777C1CB9 : public ::System::Object
{
public:
	::Class_1_AB817CB39E494C61* Field_1_1; // 0x10
	::Class_1_02D30900317D93FD* Field_1_0; // 0x18
	::Class_3_7912BA534EDCEE86_Mode Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5CDF16CC200D8B52(::Class_1_AB817CB39E494C61* a1, ::Class_1_02D30900317D93FD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB817CB39E494C61*, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9_METHOD_1_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E8C3A9EB158A39D(::Class_3_7912BA534EDCEE86_Mode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7912BA534EDCEE86_Mode))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9_METHOD_1_2E8C3A9EB158A39D_OFFSET))(this, a1);
	}

	::Class_1_D19B260269D43396* Method_1_484CA283FECEFC28(::System::Int32 a1)
	{
		return ((::Class_1_D19B260269D43396*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9_METHOD_1_484CA283FECEFC28_OFFSET))(this, a1);
	}

	::Class_1_D19B260269D43396* Method_1_AA3E8FC5C3E6B9A4(::System::Collections::Generic::List_1<::Class_1_0C40FF0290B5423C*>* a1, ::System::Int32 a2)
	{
		return ((::Class_1_D19B260269D43396*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0C40FF0290B5423C*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9_METHOD_1_AA3E8FC5C3E6B9A4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_582251EF6392A222*>* Method_1_27021204C0A46FF4(::System::Collections::Generic::List_1<::Class_1_0C40FF0290B5423C*>* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_582251EF6392A222*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0C40FF0290B5423C*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9_METHOD_1_27021204C0A46FF4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6B61FC8F1334140B(::RPG::GameCore::ActionBarUIStatus a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarUIStatus))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9_METHOD_1_6B61FC8F1334140B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8406C4503F4E50CD(::RPG::GameCore::ActionBarUIStatus a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarUIStatus))((::PBYTE)hIl2Cpp + CLASS_1_053C0CF0777C1CB9_METHOD_1_8406C4503F4E50CD_OFFSET))(this, a1);
	}
};
