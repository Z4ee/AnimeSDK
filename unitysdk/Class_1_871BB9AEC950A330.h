#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A3194024C7D2DEC;
class MonoUIAdaptConfig;
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_871BB9AEC950A330_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14281600)
#define CLASS_1_871BB9AEC950A330_GET_UIADAPTOPERATIONS_OFFSET UNITYSDK_OFFSET(0x14281C30)
#define CLASS_1_871BB9AEC950A330_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x142813A0)
#define CLASS_1_871BB9AEC950A330_METHOD_1_1EFC5A8A94CA6BE7_OFFSET UNITYSDK_OFFSET(0x142818B0)
#define CLASS_1_871BB9AEC950A330_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x14281430)
#define CLASS_1_871BB9AEC950A330_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x14281030)
#define CLASS_1_871BB9AEC950A330_METHOD_1_6A292B68614915E7_OFFSET UNITYSDK_OFFSET(0x14280E80)
#define CLASS_1_871BB9AEC950A330_METHOD_1_6A37F1EEE90B7CE4_OFFSET UNITYSDK_OFFSET(0x14281250)
#define CLASS_1_871BB9AEC950A330_METHOD_1_6C75958771B0E974_OFFSET UNITYSDK_OFFSET(0x14281AC0)
#define CLASS_1_871BB9AEC950A330_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x142814C0)
#define CLASS_1_871BB9AEC950A330_METHOD_1_8CB80E7E378BFD56_OFFSET UNITYSDK_OFFSET(0x14281A70)
#define CLASS_1_871BB9AEC950A330_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14281810)
#define CLASS_1_871BB9AEC950A330_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x14281750)
#define CLASS_1_871BB9AEC950A330_METHOD_1_E19BD20D85758F6D_OFFSET UNITYSDK_OFFSET(0x14280EF0)
#define CLASS_1_871BB9AEC950A330_METHOD_1_FD524E4070830188_OFFSET UNITYSDK_OFFSET(0x142812B0)
#define CLASS_1_871BB9AEC950A330_SET_UIADAPTOPERATIONS_OFFSET UNITYSDK_OFFSET(0x14281C40)
#define CLASS_1_871BB9AEC950A330__CTOR_OFFSET UNITYSDK_OFFSET(0x14280CC0)

inline static constexpr unsigned int Class_1_871BB9AEC950A330_TypeDefinitionIndex = 69695;

class Class_1_871BB9AEC950A330 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* _UIAdaptOperations_k__BackingField; // 0x18
	::MonoUIAdaptConfig* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::MonoUIAdaptConfig*>* Field_1_3; // 0x28
	::System::Collections::Generic::HashSet_1<::MonoUIAdaptConfig*>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6A292B68614915E7(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_6A292B68614915E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A37F1EEE90B7CE4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_6A37F1EEE90B7CE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E19BD20D85758F6D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_E19BD20D85758F6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_1EFC5A8A94CA6BE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_1EFC5A8A94CA6BE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CB80E7E378BFD56()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_8CB80E7E378BFD56_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_FD524E4070830188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_FD524E4070830188_OFFSET))(this);
	}

	::System::Void Method_1_6C75958771B0E974(::MonoUIAdaptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIAdaptConfig*))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_METHOD_1_6C75958771B0E974_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* get_UIAdaptOperations()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_GET_UIADAPTOPERATIONS_OFFSET))(this);
	}

	::System::Void set_UIAdaptOperations(::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>*))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330_SET_UIADAPTOPERATIONS_OFFSET))(this, a1);
	}
};
