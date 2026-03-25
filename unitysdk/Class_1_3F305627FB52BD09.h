#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92608A36037A1D69;
class MonoUIAdaptConfig;
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3F305627FB52BD09_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1C7B20)
#define CLASS_1_3F305627FB52BD09_GET_UIADAPTOPERATIONS_OFFSET UNITYSDK_OFFSET(0xA1C8130)
#define CLASS_1_3F305627FB52BD09_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA1C7C40)
#define CLASS_1_3F305627FB52BD09_METHOD_1_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0xA1C77C0)
#define CLASS_1_3F305627FB52BD09_METHOD_1_635445A7258F7A25_OFFSET UNITYSDK_OFFSET(0xA1C7DB0)
#define CLASS_1_3F305627FB52BD09_METHOD_1_6C75958771B0E974_OFFSET UNITYSDK_OFFSET(0xA1C7FC0)
#define CLASS_1_3F305627FB52BD09_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xA1C7570)
#define CLASS_1_3F305627FB52BD09_METHOD_1_8CB80E7E378BFD56_OFFSET UNITYSDK_OFFSET(0xA1C7F70)
#define CLASS_1_3F305627FB52BD09_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xA1C79E0)
#define CLASS_1_3F305627FB52BD09_METHOD_1_949F85ACEB18E5DE_OFFSET UNITYSDK_OFFSET(0xA1C73B0)
#define CLASS_1_3F305627FB52BD09_METHOD_1_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0xA1C7950)
#define CLASS_1_3F305627FB52BD09_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA1C7D10)
#define CLASS_1_3F305627FB52BD09_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xA1C78C0)
#define CLASS_1_3F305627FB52BD09_METHOD_1_E19BD20D85758F6D_OFFSET UNITYSDK_OFFSET(0xA1C7420)
#define CLASS_1_3F305627FB52BD09_METHOD_1_F5E5B0E3339B3450_OFFSET UNITYSDK_OFFSET(0xA1C7760)
#define CLASS_1_3F305627FB52BD09_SET_UIADAPTOPERATIONS_OFFSET UNITYSDK_OFFSET(0xA1C8140)
#define CLASS_1_3F305627FB52BD09__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C7200)

inline static constexpr unsigned int Class_1_3F305627FB52BD09_TypeDefinitionIndex = 59857;

class Class_1_3F305627FB52BD09 : public ::System::Object
{
public:
	::MonoUIAdaptConfig* Field_1_1; // 0x10
	::RPG::Client::UIController* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>* _UIAdaptOperations_k__BackingField; // 0x20
	::System::Collections::Generic::HashSet_1<::MonoUIAdaptConfig*>* Field_1_3; // 0x28
	::System::Collections::Generic::HashSet_1<::MonoUIAdaptConfig*>* Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_949F85ACEB18E5DE(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_949F85ACEB18E5DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5E5B0E3339B3450(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_F5E5B0E3339B3450_OFFSET))(this, a1);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E19BD20D85758F6D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_E19BD20D85758F6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_635445A7258F7A25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_635445A7258F7A25_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CB80E7E378BFD56()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_8CB80E7E378BFD56_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Void Method_1_6C75958771B0E974(::MonoUIAdaptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIAdaptConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_METHOD_1_6C75958771B0E974_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>* get_UIAdaptOperations()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_GET_UIADAPTOPERATIONS_OFFSET))(this);
	}

	::System::Void set_UIAdaptOperations(::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F305627FB52BD09_SET_UIADAPTOPERATIONS_OFFSET))(this, value);
	}
};
