#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

class Class_2_B8B54A1B9D8F60FB_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_4_3F1E6598B55A097B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1020BB30)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_2038CB603E452C23_OFFSET UNITYSDK_OFFSET(0x1020BD80)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_34476BE3E391FE9D_1_OFFSET UNITYSDK_OFFSET(0x1020BEE0)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_34476BE3E391FE9D_OFFSET UNITYSDK_OFFSET(0x1020BD70)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_405718C8D907DC4E_1_OFFSET UNITYSDK_OFFSET(0x1020BD40)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_405718C8D907DC4E_OFFSET UNITYSDK_OFFSET(0x1020BD30)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1020BD50)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x1020BD60)
#define CLASS_4_3F1E6598B55A097B_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1020BE50)
#define CLASS_4_3F1E6598B55A097B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1020BC00)
#define CLASS_4_3F1E6598B55A097B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1020BB80)
#define CLASS_4_3F1E6598B55A097B__CTOR_OFFSET UNITYSDK_OFFSET(0x1020BC70)

inline static constexpr unsigned int Class_4_3F1E6598B55A097B_TypeDefinitionIndex = 79039;

class Class_4_3F1E6598B55A097B : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x206; // 0x0
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* Field_4_3; // 0x50
	::Class_2_B8B54A1B9D8F60FB_1* Field_4_1; // 0x58
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* Field_4_2; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_ONCLEAN_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* Method_4_405718C8D907DC4E()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_405718C8D907DC4E_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* Method_4_405718C8D907DC4E_1()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_405718C8D907DC4E_1_OFFSET))(this);
	}

	::Class_2_B8B54A1B9D8F60FB_1* Method_4_43A46E5F9FAC62B8()
	{
		return ((::Class_2_B8B54A1B9D8F60FB_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_4_58BA0C8308C8127F(::Class_2_B8B54A1B9D8F60FB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8B54A1B9D8F60FB_1*))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Void Method_4_34476BE3E391FE9D(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_34476BE3E391FE9D_OFFSET))(this, a1);
	}

	static ::Class_4_3F1E6598B55A097B* Method_4_2038CB603E452C23()
	{
		return ((::Class_4_3F1E6598B55A097B*(*)())((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_2038CB603E452C23_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_4_34476BE3E391FE9D_1(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_4_3F1E6598B55A097B_METHOD_4_34476BE3E391FE9D_1_OFFSET))(this, a1);
	}
};
